#include "stdafx.h"
#include "klotski.h"
#include "qgamehelpdlg.h"
#include "gameboards.h"

Klotski::Klotski(QWidget* parent)
    : QMainWindow(parent)
{
	ui.setupUi(this);
	gvBoards[0] = ui.graphicsView_00;
	gvBoards[1] = ui.graphicsView_01;
	gvBoards[2] = ui.graphicsView_02;
	gvBoards[3] = ui.graphicsView_03;
	gvBoards[4] = ui.graphicsView_04;
	gvBoards[5] = ui.graphicsView_05;
	gvBoards[6] = ui.graphicsView_06;
	gvBoards[7] = ui.graphicsView_07;
	gvBoards[8] = ui.graphicsView_08;
	gvBoards[9] = ui.graphicsView_09;
	gvBoards[10] = ui.graphicsView_10;
	gvBoards[11] = ui.graphicsView_11;
	gvBoards[12] = ui.graphicsView_12;
	gvBoards[13] = ui.graphicsView_13;
	gvBoards[14] = ui.graphicsView_14;
	gvBoards[15] = ui.graphicsView_15;
	gvBoards[16] = ui.graphicsView_16;
	gvBoards[17] = ui.graphicsView_17;
	gvBoards[18] = ui.graphicsView_18;
	gvBoards[19] = ui.graphicsView_19;
	for (int g = 0; g < BLOCK_COUNT; g++)
	{
		gvBoards[g]->setBlockId(g);
		connect(gvBoards[g], SIGNAL(press_block(int)), this, SLOT(PressBlock(int)));
	}
	bdActGroup = new QActionGroup(this);
	for (int b = 0; b < GameBoards.size(); b++)
	{
		QAction* action = ui.menu_layout->addAction(GameBoards.value(b).getName());
		action->setCheckable(true);
		if (b == selectedBoard)
		{
			action->setChecked(true);
		}
		bdActGroup->addAction(action);
		bdActions[b] = action;
	}
	connect(bdActGroup, SIGNAL(triggered(QAction*)), this, SLOT(ChangeGame(QAction*)));
	connect(ui.action_restart, SIGNAL(triggered()), this, SLOT(RestartSameGame()));
	connect(ui.action_descriptions, SIGNAL(triggered()), this, SLOT(ShowHelp()));
	connect(ui.action_about, SIGNAL(triggered()), this, SLOT(ShowAbout()));
	connect(ui.action_exit, SIGNAL(triggered()), this, SLOT(Exit()));
	RestartGame();
}

Klotski::~Klotski()
{}

void Klotski::resizeEvent(QResizeEvent* event)
{
	PaintBoard();
}

void Klotski::mousePressEvent(QMouseEvent* event)
{
	if (isSucceeded)
	{
		return;
	}
	int topStart = 30;
	QPoint startPos = QPoint(leftStart, topStart);
	QPoint clickPos = event->pos() - startPos;
	QPoint clickSpace = QPoint((clickPos.x() / blockSize), (clickPos.y() / blockSize));
	if (clickPos.x() >= 0 && clickPos.y() >= 0 && clickSpace.x() < GameBoards.value(selectedBoard).getWidth() && clickSpace.y() < GameBoards.value(selectedBoard).getHeight())
	{
		int blockId = -1;
		bool hasPressed = false;
		for (int g = 0; g < BLOCK_COUNT; g++)
		{
			if (gvBoards[g]->isPressed())
			{
				blockId = g;
				hasPressed = true;
			}
		}
		if (!hasPressed)
		{
			return;
		}
		int x = clickSpace.x() - engine->getBlock(blockId).getX();
		int y = clickSpace.y() - engine->getBlock(blockId).getY();
		bool testedDown = false, testedUp = false, testedRight = false, testedLeft = false;
		bool moveSucceed = false;
		while (x != 0 || y != 0)
		{
			if (y != 0)
			{
				if (y > 0)
				{
					bool moveSuccess = engine->MoveDown(blockId);
					if (!(moveSuccess) && !testedDown)
					{
						testedDown = true;
					}
					else
					{
						y--;
					}
					if (moveSuccess)
					{
						AddStep(blockId);
						RecordStepDirection("DOWN");
						moveSucceed = true;
					}
				}
				if (y < 0)
				{
					bool moveSuccess = engine->MoveUp(blockId);
					if (!(moveSuccess) && !testedUp)
					{
						testedUp = true;
					}
					else
					{
						y++;
					}
					if (moveSuccess)
					{
						AddStep(blockId);
						RecordStepDirection("UP");
						moveSucceed = true;
					}
				}
			}
			if (x != 0)
			{
				if (x > 0)
				{
					bool moveSuccess = engine->MoveRight(blockId);
					if (!(moveSuccess) && !testedRight)
					{
						testedRight = true;
					}
					else
					{
						x--;
					}
					if (moveSuccess)
					{
						AddStep(blockId);
						RecordStepDirection("RIGHT");
						moveSucceed = true;
					}
				}
				if (x < 0)
				{
					bool moveSuccess = engine->MoveLeft(blockId);
					if (!(moveSuccess) && !testedLeft)
					{
						testedLeft = true;
					}
					else
					{
						x++;
					}
					if (moveSuccess)
					{
						AddStep(blockId);
						RecordStepDirection("LEFT");
						moveSucceed = true;
					}
				}
			}
		}
		gvBoards[blockId]->setPressed(false);
		PaintBoard();
		if (moveSucceed)
		{
			CheckSuccess();
		}
	}
}

void Klotski::RestartGame()
{
	engine = new KlotskiEngine(GameBoards.value(selectedBoard).getBoardBlocks(), GameBoards.value(selectedBoard).getBoardBlanks());
	moveSteps = 0;
	moveingBlock = -1;
	isSucceeded = false;
	recordingSteps = ui.action_record->isChecked();
	if (recordingSteps)
	{
		QDateTime nowTime = QDateTime::currentDateTime();
		QString filename = GameBoards.value(selectedBoard).getFilename() + "_" + nowTime.toString("yyyyMMddhhmmsszzz") + ".log";
		stepLogFile = new QFile(filename);
	}
	for (int g = 0; g < BLOCK_COUNT; g++)
	{
		gvBoards[g]->setPressed(false);
	}
}

void Klotski::PaintBoard()
{
	int windowHeight = this->geometry().height() - 40;
	int windowWidth = this->geometry().width();
	int blockSizeH = (windowHeight - 20) / GameBoards.value(selectedBoard).getHeight() - (windowHeight - 20) / GameBoards.value(selectedBoard).getHeight() % 10;
	int blockSizeW = (windowWidth) / GameBoards.value(selectedBoard).getWidth() - (windowWidth) / GameBoards.value(selectedBoard).getWidth() % 10;
	blockSize = blockSizeH <= blockSizeW ? blockSizeH : blockSizeW;
	leftStart = (windowWidth - blockSize * GameBoards.value(selectedBoard).getWidth()) / 2;
	int topStart = 10;
	for (int g = 0; g < BLOCK_COUNT; g++)
	{
		if (g >= GameBoards.value(selectedBoard).getBoardBlocks().size())
		{
			gvBoards[g]->setGeometry(0, 0, 0, 0);
			gvBoards[g]->setVisible(false);
		}
		else
		{
			gvBoards[g]->setVisible(true);
			gvBoards[g]->setLineWidth(2);
			gvBoards[g]->setMidLineWidth(2);
			if (gvBoards[g]->isPressed())
			{
				gvBoards[g]->setFrameStyle(QFrame::Panel | QFrame::Sunken);
			}
			else
			{
				gvBoards[g]->setFrameStyle(QFrame::Panel | QFrame::Raised);
			}
			gvBoards[g]->setGeometry(leftStart + engine->getBlock(g).getX() * blockSize, topStart + engine->getBlock(g).getY() * blockSize, blockSize * engine->getBlock(g).getWidth(), blockSize * engine->getBlock(g).getHeight());
			if (engine->getBlock(g).getBackgroundImage() != "")
			{
				QGraphicsScene* scene = new QGraphicsScene(this);
				QPixmap p(engine->getBlock(g).getBackgroundImage());
				p = p.scaled(blockSize * engine->getBlock(g).getWidth(), blockSize * engine->getBlock(g).getHeight());
				scene->addPixmap(p);
				gvBoards[g]->setScene(scene);
			}
		}
	}
}

void Klotski::AddStep(int blockId)
{
	if (moveingBlock != blockId)
	{
		moveSteps++;
		moveingBlock = blockId;
		ui.statusBar->showMessage(QString::fromUtf8("步数：")+QString("%1").arg(moveSteps));
		if (recordingSteps)
		{
			if (!stepLogFile->open(QIODevice::WriteOnly | QIODevice::Append))
			{
				return;
			}
			QTextStream out(stepLogFile);
			out << "Step " << moveSteps << ": " << engine->getBlock(blockId).getName() << "\r\n";
			stepLogFile->close();
		}
	}
}

void Klotski::RecordStepDirection(const QString& direcionText)
{
	if (recordingSteps)
	{
		if (!stepLogFile->open(QIODevice::WriteOnly | QIODevice::Append))
		{
			return;
		}
		QTextStream out(stepLogFile);
		out << direcionText << "\r\n";
		stepLogFile->close();
	}
}

void Klotski::CheckSuccess()
{
	int successable = 0, succeed = 0;
	for (int g = 0; g < GameBoards.value(selectedBoard).getBoardBlocks().size(); g++)
	{
		if (engine->getBlock(g).getGoalX() != -1 && engine->getBlock(g).getGoalY() != -1)
		{
			successable++;
		}
		if (engine->IsWon(g))
		{
			succeed++;
		}
	}
	if (succeed > 0 && successable == succeed)
	{
		QMessageBox msgBox;
		msgBox.setWindowTitle(QString::fromUtf8("推盘解谜"));
		msgBox.setText(QString::fromUtf8("解谜成功！用了") + QString("%1").arg(moveSteps) + QString::fromUtf8("步。"));
		msgBox.exec();
		isSucceeded = true;
	}
}

void Klotski::RestartSameGame()
{
	RestartGame();
	PaintBoard();
	ui.statusBar->showMessage("");
}

void Klotski::ChangeGame(QAction* action)
{
	for (int a = 0; a < BOARD_COUNT; a++)
	{
		if (bdActions[a]->text() == action->text())
		{
			if (a == selectedBoard)
			{
				break;
			}
			selectedBoard = a;
			RestartSameGame();
			break;
		}
	}
}

void Klotski::ShowHelp()
{
	QGameHelpDlg dlg;
	dlg.exec();
}

void Klotski::ShowAbout()
{
	QMessageBox::about(this, QString(), "Version 1.2.1\r\n2024.10.24");
}

void Klotski::Exit()
{
	close();
}

void Klotski::PressBlock(int blockId)
{
	if (isSucceeded)
	{
		return;
	}
	for (int g = 0; g < BLOCK_COUNT; g++)
	{
		if (g == blockId)
		{
			gvBoards[g]->setPressed(true);
		}
		else
		{
			gvBoards[g]->setPressed(false);
		}
	}
	PaintBoard();
}

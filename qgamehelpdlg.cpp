#include "stdafx.h"
#include "qgamehelpdlg.h"
#include "gameboards.h"

QGameHelpDlg::QGameHelpDlg(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	for (int b = 0; b < GameBoards.size(); b++)
	{
		QTextBrowser* tabBrowser = new QTextBrowser();
		tabBrowser->setPlainText(GameBoards.value(b).getDescription());
		ui.tabWidget->addTab(tabBrowser, GameBoards.value(b).getName());
	}
}

QGameHelpDlg::~QGameHelpDlg()
{}

void QGameHelpDlg::resizeEvent(QResizeEvent* event)
{
	ui.tabWidget->setGeometry(0, 0, this->width(), this->height());
}
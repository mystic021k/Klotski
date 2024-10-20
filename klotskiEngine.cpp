#include "stdafx.h"
#include "klotskiEngine.h"
#include <QMessageBox>

KlotskiEngine::KlotskiEngine(QList<KlotskiBlock> blocks, QList<kBlank> blanks)
{
	gameBlocks = QList<KlotskiBlock>();
	for (int o = 0; o < blocks.size(); o++)
	{
		gameBlocks.append(blocks.value(o));
	}
	gameBlanks = QList<kBlank>();
	for (int a = 0; a < blanks.size(); a++)
	{
		gameBlanks.append(blanks.value(a));
	}
}

bool KlotskiEngine::MoveDown(int blockNum)
{
	int leftBlank = -1;
	int rightBlank = -1;
	if (gameBlocks.value(blockNum).getWidth() == 2)
	{
		for (int a = 0; a < gameBlanks.size(); a++)
		{
			if (gameBlanks[a].x == gameBlocks.value(blockNum).getX() && gameBlanks[a].y == gameBlocks.value(blockNum).getY() + gameBlocks.value(blockNum).getHeight())
			{
				leftBlank = a;
			}
			if (gameBlanks[a].x == gameBlocks.value(blockNum).getX() + 1 && gameBlanks[a].y == gameBlocks.value(blockNum).getY() + gameBlocks.value(blockNum).getHeight())
			{
				rightBlank = a;
			}
		}
		if (leftBlank != -1 && rightBlank != -1)
		{
			gameBlanks[leftBlank].y = gameBlocks.value(blockNum).getY();
			gameBlanks[rightBlank].y = gameBlocks.value(blockNum).getY();
			gameBlocks.operator[](blockNum).setY(gameBlocks.value(blockNum).getY() + 1);
			return true;
		}
	}
	if (gameBlocks.value(blockNum).getWidth() == 1)
	{
		for (int a = 0; a < gameBlanks.size(); a++)
		{
			if (gameBlanks[a].x == gameBlocks.value(blockNum).getX() && gameBlanks[a].y == gameBlocks.value(blockNum).getY() + gameBlocks.value(blockNum).getHeight())
			{
				leftBlank = a;
			}
		}
		if (leftBlank != -1)
		{
			gameBlanks[leftBlank].y = gameBlocks.value(blockNum).getY();
			gameBlocks.operator[](blockNum).setY(gameBlocks.value(blockNum).getY() + 1);
			return true;
		}
	}
	return false;
}

bool KlotskiEngine::MoveRight(int blockNum)
{
	int upBlank = -1;
	int downBlank = -1;
	if (gameBlocks.value(blockNum).getHeight() == 2)
	{
		for (int a = 0; a < gameBlanks.size(); a++)
		{
			if (gameBlanks[a].y == gameBlocks.value(blockNum).getY() && gameBlanks[a].x == gameBlocks.value(blockNum).getX() + gameBlocks.value(blockNum).getWidth())
			{
				upBlank = a;
			}
			if (gameBlanks[a].y == gameBlocks.value(blockNum).getY() + 1 && gameBlanks[a].x == gameBlocks.value(blockNum).getX() + gameBlocks.value(blockNum).getWidth())
			{
				downBlank = a;
			}
		}
		if (upBlank != -1 && downBlank != -1)
		{
			gameBlanks[upBlank].x = gameBlocks.value(blockNum).getX();
			gameBlanks[downBlank].x = gameBlocks.value(blockNum).getX();
			gameBlocks.operator[](blockNum).setX(gameBlocks.value(blockNum).getX() + 1);
			return true;
		}
	}
	if (gameBlocks.value(blockNum).getHeight() == 1)
	{
		for (int a = 0; a < gameBlanks.size(); a++)
		{
			if (gameBlanks[a].y == gameBlocks.value(blockNum).getY() && gameBlanks[a].x == gameBlocks.value(blockNum).getX() + gameBlocks.value(blockNum).getWidth())
			{
				upBlank = a;
			}
		}
		if (upBlank != -1)
		{
			gameBlanks[upBlank].x = gameBlocks.value(blockNum).getX();
			gameBlocks.operator[](blockNum).setX(gameBlocks.value(blockNum).getX() + 1);
			return true;
		}
	}
	return false;
}

bool KlotskiEngine::MoveUp(int blockNum)
{
	int leftBlank = -1;
	int rightBlank = -1;
	if (gameBlocks.value(blockNum).getWidth() == 2)
	{
		for (int a = 0; a < gameBlanks.size(); a++)
		{
			if (gameBlanks[a].x == gameBlocks.value(blockNum).getX() && gameBlanks[a].y == gameBlocks.value(blockNum).getY() - 1)
			{
				leftBlank = a;
			}
			if (gameBlanks[a].x == gameBlocks.value(blockNum).getX() + 1 && gameBlanks[a].y == gameBlocks.value(blockNum).getY() - 1)
			{
				rightBlank = a;
			}
		}
		if (leftBlank != -1 && rightBlank != -1)
		{
			gameBlanks[leftBlank].y = gameBlocks.value(blockNum).getY() + gameBlocks.value(blockNum).getHeight() - 1;
			gameBlanks[rightBlank].y = gameBlocks.value(blockNum).getY() + gameBlocks.value(blockNum).getHeight() - 1;
			gameBlocks.operator[](blockNum).setY(gameBlocks.value(blockNum).getY() - 1);
			return true;
		}
	}
	if (gameBlocks.value(blockNum).getWidth() == 1)
	{
		for (int a = 0; a < gameBlanks.size(); a++)
		{
			if (gameBlanks[a].x == gameBlocks.value(blockNum).getX() && gameBlanks[a].y == gameBlocks.value(blockNum).getY() - 1)
			{
				leftBlank = a;
			}
		}
		if (leftBlank != -1)
		{
			gameBlanks[leftBlank].y = gameBlocks.value(blockNum).getY() + gameBlocks.value(blockNum).getHeight() - 1;
			gameBlocks.operator[](blockNum).setY(gameBlocks.value(blockNum).getY() - 1);
			return true;
		}
	}
	return false;
}

bool KlotskiEngine::MoveLeft(int blockNum)
{
	int upBlank = -1;
	int downBlank = -1;
	if (gameBlocks.value(blockNum).getHeight() == 2)
	{
		for (int a = 0; a < gameBlanks.size(); a++)
		{
			if (gameBlanks[a].y == gameBlocks.value(blockNum).getY() && gameBlanks[a].x == gameBlocks.value(blockNum).getX() - 1)
			{
				upBlank = a;
			}
			if (gameBlanks[a].y == gameBlocks.value(blockNum).getY() + 1 && gameBlanks[a].x == gameBlocks.value(blockNum).getX() - 1)
			{
				downBlank = a;
			}
		}
		if (upBlank != -1 && downBlank != -1)
		{
			gameBlanks[upBlank].x = gameBlocks.value(blockNum).getX() + gameBlocks.value(blockNum).getWidth() - 1;
			gameBlanks[downBlank].x = gameBlocks.value(blockNum).getX() + gameBlocks.value(blockNum).getWidth() - 1;
			gameBlocks.operator[](blockNum).setX(gameBlocks.value(blockNum).getX() - 1);
			return true;
		}
	}
	if (gameBlocks.value(blockNum).getHeight() == 1)
	{
		for (int a = 0; a < gameBlanks.size(); a++)
		{
			if (gameBlanks[a].y == gameBlocks.value(blockNum).getY() && gameBlanks[a].x == gameBlocks.value(blockNum).getX() - 1)
			{
				upBlank = a;
			}
		}
		if (upBlank != -1)
		{
			gameBlanks[upBlank].x = gameBlocks.value(blockNum).getX() + gameBlocks.value(blockNum).getWidth() - 1;
			gameBlocks.operator[](blockNum).setX(gameBlocks.value(blockNum).getX() - 1);
			return true;
		}
	}
	return false;
}

bool KlotskiEngine::IsWon(int blockNum)
{
	if (gameBlocks.value(blockNum).getX() == gameBlocks.value(blockNum).getGoalX() && gameBlocks.value(blockNum).getY() == gameBlocks.value(blockNum).getGoalY())
	{
		return true;
	} 
	else
	{
		return false;
	}
}

KlotskiBlock KlotskiEngine::getBlock(int blockNum)
{
	return gameBlocks.value(blockNum);
}

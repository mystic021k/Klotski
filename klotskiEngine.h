#pragma once
#include <QList>
#include "klotskiBlock.h"

class KlotskiEngine
{
public:
	KlotskiEngine(QList<KlotskiBlock> blocks, QList<kBlank> blanks);

private:
	QList<KlotskiBlock> gameBlocks;
	QList<kBlank> gameBlanks;

public:
	bool MoveDown(int blockNum);
	bool MoveRight(int blockNum);
	bool MoveUp(int blockNum);
	bool MoveLeft(int blockNum);
	bool IsWon(int blockNum);
	KlotskiBlock getBlock(int blockNum);
};

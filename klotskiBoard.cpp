#include "stdafx.h"
#include "klotskiBoard.h"

KlotskiBoard::KlotskiBoard()
{
}

KlotskiBoard::KlotskiBoard(const QList<KlotskiBlock>& boardBlocks, const QList<kBlank>& boardBlanks, const QString& name, const QString& description, int width, int height)
	: boardBlocks(boardBlocks), boardBlanks(boardBlanks), name(name), description(description), width(width), height(height)
{
}

void KlotskiBoard::setBoardBlocks(QList<KlotskiBlock> blocks)
{
	this->boardBlocks = blocks;
}

QList<KlotskiBlock> KlotskiBoard::getBoardBlocks()
{
	return this->boardBlocks;
}

void KlotskiBoard::setBoardBlanks(QList<kBlank> blanks)
{
	this->boardBlanks = blanks;
}

QList<kBlank> KlotskiBoard::getBoardBlanks()
{
	return this->boardBlanks;
}

void KlotskiBoard::setName(QString name)
{
	this->name = name;
}

QString KlotskiBoard::getName()
{
	return this->name;
}

void KlotskiBoard::setDescription(QString description)
{
	this->description = description;
}

QString KlotskiBoard::getDescription()
{
	return this->description;
}

void KlotskiBoard::setWidth(int width)
{
	this->width = width;
}

int KlotskiBoard::getWidth()
{
	return this->width;
}

void KlotskiBoard::setHeight(int height)
{
	this->height = height;
}

int KlotskiBoard::getHeight()
{
	return this->height;
}

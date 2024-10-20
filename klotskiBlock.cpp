#include "stdafx.h"
#include "klotskiBlock.h"

KlotskiBlock::KlotskiBlock()
{
}

KlotskiBlock::KlotskiBlock(int width, int height, int x, int y, int goalX, int goalY, const QString& backgroundImage)
	: width(width), height(height), x(x), y(y), goalX(goalX), goalY(goalY), backgroundImage(backgroundImage)
{
}

void KlotskiBlock::setWidth(int width)
{
	this->width = width;
}

int KlotskiBlock::getWidth()
{
	return this->width;
}

void KlotskiBlock::setHeight(int height)
{
	this->height = height;
}

int KlotskiBlock::getHeight()
{
	return this->height;
}

void KlotskiBlock::setX(int x)
{
	this->x = x;
}

int KlotskiBlock::getX()
{
	return this->x;
}

void KlotskiBlock::setY(int y)
{
	this->y = y;
}

int KlotskiBlock::getY()
{
	return this->y;
}

void KlotskiBlock::setGoalX(int goalX)
{
	this->goalX = goalX;
}

int KlotskiBlock::getGoalX()
{
	return this->goalX;
}

void KlotskiBlock::setGoalY(int goalY)
{
	this->goalY = goalY;
}

int KlotskiBlock::getGoalY()
{
	return this->goalY;
}

void KlotskiBlock::setBackgroundImage(QString imgPath)
{
	this->backgroundImage = imgPath;
}

QString KlotskiBlock::getBackgroundImage()
{
	return this->backgroundImage;
}

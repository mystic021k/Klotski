#pragma once
class KlotskiBlock
{
private:
	int width;
	int height;
	int x;
	int y;
	int goalX;
	int goalY;
	QString backgroundImage;
public:
	KlotskiBlock();
	KlotskiBlock(int width, int height, int x, int y, int goalX, int goalY, const QString& backgroundImage);
	void setWidth(int width);
	int getWidth();
	void setHeight(int height);
	int getHeight();
	void setX(int x);
	int getX();
	void setY(int y);
	int getY();
	void setGoalX(int goalX);
	int getGoalX();
	void setGoalY(int goalY);
	int getGoalY();
	void setBackgroundImage(QString imgPath);
	QString getBackgroundImage();
};

struct kBlank
{
	int x;
	int y;
};

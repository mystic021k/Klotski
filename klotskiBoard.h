#pragma once
#include <QList>
#include "klotskiBlock.h"

class KlotskiBoard
{
private:
	QList<KlotskiBlock> boardBlocks;
	QList<kBlank> boardBlanks;
	QString name;
	QString description;
	int width;
	int height;
public:
	KlotskiBoard();
	KlotskiBoard(const QList<KlotskiBlock>& boardBlocks, const QList<kBlank>& boardBlanks, const QString& name, const QString& description, int width, int height);
	void setBoardBlocks(QList<KlotskiBlock> blocks);
	QList<KlotskiBlock> getBoardBlocks();
	void setBoardBlanks(QList<kBlank> blanks);
	QList<kBlank> getBoardBlanks();
	void setName(QString name);
	QString getName();
	void setDescription(QString description);
	QString getDescription();
	void setWidth(int width);
	int getWidth();
	void setHeight(int height);
	int getHeight();
};

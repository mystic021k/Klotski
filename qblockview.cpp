#include "stdafx.h"
#include "qblockview.h"

QBlockView::QBlockView(QWidget* parent)
	: QGraphicsView(parent)
{
}

QBlockView::QBlockView(QGraphicsScene* scene, QWidget* parent)
	: QGraphicsView(scene, parent)
{
}

bool QBlockView::isPressed()
{
	return this->pressed;
}

void QBlockView::setPressed(bool pstate)
{
	this->pressed = pstate;
}

void QBlockView::setBlockId(int id)
{
	this->blockId = id;
}

void QBlockView::mousePressEvent(QMouseEvent* event) {
	emit press_block(this->blockId);
}

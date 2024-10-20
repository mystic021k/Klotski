#pragma once
#include <qgraphicsview.h>
#include "klotskiEngine.h"
class QBlockView :
    public QGraphicsView
{
    Q_OBJECT
signals:
    void press_block(int blockId);
public:
    QBlockView(QWidget* parent);
    QBlockView(QGraphicsScene* scene, QWidget* parent);
    bool isPressed();
    void setPressed(bool pstate);
    void setBlockId(int id);
private:
    bool pressed = false;
    int blockId = -1;
    void mousePressEvent(QMouseEvent* event);
};

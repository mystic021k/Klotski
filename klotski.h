#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_klotski.h"
#include "klotskiBoard.h"
#include "klotskiEngine.h"
#include "qblockview.h"
#define BLOCK_COUNT 20
#define BOARD_COUNT 6

class Klotski : public QMainWindow
{
    Q_OBJECT

public:
    Klotski(QWidget *parent = nullptr);
    ~Klotski();

private:
    Ui::KlotskiClass ui;
    int selectedBoard = 0;
    int moveSteps = 0;
    int moveingBlock = -1;
    bool isSucceeded = false;
    KlotskiEngine* engine;
    QBlockView* gvBoards[BLOCK_COUNT];
    QAction* bdActions[BOARD_COUNT];
    QActionGroup* bdActGroup;
    void resizeEvent(QResizeEvent* event);
    void mousePressEvent(QMouseEvent* event);
    void RestartGame();
    void PaintBoard();
    void AddStep(int blockId);
    void CheckSuccess();
public slots:
    void PressBlock(int blockId);
    void RestartSameGame();
    void ChangeGame(QAction* action);
};

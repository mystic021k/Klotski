#include <qlist.h>
#include "klotskiBoard.h"

QList<KlotskiBlock> HrdBlocks = {
	KlotskiBlock(2, 2, 1, 0, 1, 3, ":/Hrd/png/hrd_Caocao.png"),
	KlotskiBlock(1, 2, 0, 0, -1, -1, ":/Hrd/png/hrd_Zhangfei.png"),
	KlotskiBlock(1, 2, 3, 0, -1, -1, ":/Hrd/png/hrd_Zhaoyun.png"),
	KlotskiBlock(1, 2, 0, 2, -1, -1, ":/Hrd/png/hrd_Huangzhong.png"),
	KlotskiBlock(1, 2, 3, 2, -1, -1, ":/Hrd/png/hrd_Machao.png"),
	KlotskiBlock(2, 1, 1, 2, -1, -1, ":/Hrd/png/hrd_Guanyu.png"),
	KlotskiBlock(1, 1, 1, 3, -1, -1, ":/Hrd/png/hrd_Zu.png"),
	KlotskiBlock(1, 1, 2, 3, -1, -1, ":/Hrd/png/hrd_Zu.png"),
	KlotskiBlock(1, 1, 0, 4, -1, -1, ":/Hrd/png/hrd_Zu.png"),
	KlotskiBlock(1, 1, 3, 4, -1, -1, ":/Hrd/png/hrd_Zu.png")
};
QList<kBlank> HrdBlanks = {
	{1, 4},
	{2, 4}
};
KlotskiBoard HrdBoard = KlotskiBoard(HrdBlocks, HrdBlanks, QString::fromLocal8Bit("华容道"), QString::fromLocal8Bit("始于民国时期，基于《三国演义》的华容道的故事创造的棋子样式。"), 4, 5);

QList<KlotskiBlock> ShogiBlocks = {
	KlotskiBlock(2, 2, 1, 0, 1, 3, ":/Shogi/png/shogi_osho.png"),
	KlotskiBlock(1, 2, 0, 0, -1, -1, ":/Shogi/png/shogi_hisha.png"),
	KlotskiBlock(1, 2, 3, 0, -1, -1, ":/Shogi/png/shogi_kakugyo.png"),
	KlotskiBlock(1, 1, 0, 2, -1, -1, ":/Shogi/png/shogi_kyosha.png"),
	KlotskiBlock(1, 1, 1, 2, -1, -1, ":/Shogi/png/shogi_keima.png"),
	KlotskiBlock(1, 1, 2, 2, -1, -1, ":/Shogi/png/shogi_keima.png"),
	KlotskiBlock(1, 1, 3, 2, -1, -1, ":/Shogi/png/shogi_kyosha.png"),
	KlotskiBlock(2, 1, 0, 3, -1, -1, ":/Shogi/png/shogi_kinsho.png"),
	KlotskiBlock(2, 1, 2, 3, -1, -1, ":/Shogi/png/shogi_ginsho.png"),
	KlotskiBlock(1, 1, 0, 4, -1, -1, ":/Shogi/png/shogi_fuhyo.png"),
	KlotskiBlock(1, 1, 3, 4, -1, -1, ":/Shogi/png/shogi_fuhyo.png")
};
QList<kBlank> ShogiBlanks = {
	{1, 4},
	{2, 4}
};
KlotskiBoard ShogiBoard = KlotskiBoard(ShogiBlocks, ShogiBlanks, QString::fromLocal8Bit("将棋"), QString::fromLocal8Bit("源自日本，将棋版的棋子样式。"), 4, 5);

QList<KlotskiBlock> DonaldBlocks = {
	KlotskiBlock(2, 2, 1, 0, 1, 3, ":/Donald/png/donald_donald.png"),
	KlotskiBlock(1, 2, 0, 0, -1, -1, ":/Donald/png/donald_goofy01.png"),
	KlotskiBlock(1, 2, 3, 0, -1, -1, ":/Donald/png/donald_goofy01.png"),
	KlotskiBlock(1, 2, 0, 2, -1, -1, ":/Donald/png/donald_goofy02.png"),
	KlotskiBlock(1, 2, 3, 2, -1, -1, ":/Donald/png/donald_goofy02.png"),
	KlotskiBlock(1, 1, 1, 2, -1, -1, ":/Donald/png/donald_mickey01.png"),
	KlotskiBlock(1, 1, 2, 2, -1, -1, ":/Donald/png/donald_mickey01.png"),
	KlotskiBlock(1, 1, 0, 4, -1, -1, ":/Donald/png/donald_mickey02.png"),
	KlotskiBlock(1, 1, 3, 4, -1, -1, ":/Donald/png/donald_mickey02.png"),
	KlotskiBlock(2, 1, 1, 4, -1, -1, ":/Donald/png/donald_pluto.png")
};
QList<kBlank> DonaldBlanks = {
	{1, 3},
	{2, 3}
};
KlotskiBoard DonaldBoard = KlotskiBoard(DonaldBlocks, DonaldBlanks, QString::fromLocal8Bit("唐老鸭"), QString::fromLocal8Bit("从某本书上看到的，以迪士尼人物为主题的棋子样式。"), 4, 5);

QList<KlotskiBlock> TenBlocks = {
	KlotskiBlock(2, 2, 0, 0, 0, 3, ":/NcBlocks/png/block_a.png"),
	KlotskiBlock(2, 2, 0, 3, 0, 0, ":/NcBlocks/png/block_b.png"),
	KlotskiBlock(1, 1, 2, 0, -1, -1, ":/NcBlocks/png/block_1s.png"),
	KlotskiBlock(1, 1, 3, 0, -1, -1, ":/NcBlocks/png/block_2s.png"),
	KlotskiBlock(2, 1, 2, 1, -1, -1, ":/NcBlocks/png/block_3.png"),
	KlotskiBlock(1, 1, 2, 2, -1, -1, ":/NcBlocks/png/block_4s.png"),
	KlotskiBlock(1, 1, 3, 2, -1, -1, ":/NcBlocks/png/block_5s.png"),
	KlotskiBlock(2, 1, 2, 3, -1, -1, ":/NcBlocks/png/block_6.png"),
	KlotskiBlock(1, 1, 2, 4, -1, -1, ":/NcBlocks/png/block_7s.png"),
	KlotskiBlock(1, 1, 3, 4, -1, -1, ":/NcBlocks/png/block_8.png")
};
QList<kBlank> TenBlanks = {
	{0, 2},
	{1, 2}
};
KlotskiBoard TenBoard = KlotskiBoard(TenBlocks, TenBlanks, QString::fromLocal8Bit("10 Block"), QString::fromLocal8Bit("10 Block Puzzle by A. Filipiak"), 4, 5);

QList<KlotskiBlock> BlockadoBlocks = {
	KlotskiBlock(2, 2, 0, 0, 0, 4, ":/NcBlocks/png/block_a.png"),
	KlotskiBlock(2, 1, 2, 0, -1, -1, ":/NcBlocks/png/block_1.png"),
	KlotskiBlock(2, 1, 2, 1, -1, -1, ":/NcBlocks/png/block_2.png"),
	KlotskiBlock(2, 1, 2, 2, -1, -1, ":/NcBlocks/png/block_3.png"),
	KlotskiBlock(1, 2, 0, 3, -1, -1, ":/NcBlocks/png/block_4v.png"),
	KlotskiBlock(1, 2, 1, 3, -1, -1, ":/NcBlocks/png/block_5.png"),
	KlotskiBlock(2, 1, 2, 3, -1, -1, ":/NcBlocks/png/block_6.png"),
	KlotskiBlock(2, 1, 2, 4, -1, -1, ":/NcBlocks/png/block_7.png"),
	KlotskiBlock(1, 1, 0, 5, -1, -1, ":/NcBlocks/png/block_8.png"),
	KlotskiBlock(1, 1, 1, 5, -1, -1, ":/NcBlocks/png/block_9.png"),
	KlotskiBlock(2, 1, 2, 5, -1, -1, ":/NcBlocks/png/block_10.png")
};
QList<kBlank> BlockadoBlanks = {
	{0, 2},
	{1, 2}
};
KlotskiBoard BlockadoBoard = KlotskiBoard(BlockadoBlocks, BlockadoBlanks, QString::fromLocal8Bit("Blockado"), QString::fromLocal8Bit("Blockado by Acme Novelty Sales"), 4, 6);

QList<KlotskiBlock> PennantBlocks = {
	KlotskiBlock(2, 2, 0, 0, 0, 3, ":/NcBlocks/png/block_a.png"),
	KlotskiBlock(2, 1, 2, 0, -1, -1, ":/NcBlocks/png/block_1.png"),
	KlotskiBlock(2, 1, 2, 1, -1, -1, ":/NcBlocks/png/block_2.png"),
	KlotskiBlock(2, 1, 2, 3, -1, -1, ":/NcBlocks/png/block_3.png"),
	KlotskiBlock(2, 1, 2, 4, -1, -1, ":/NcBlocks/png/block_4.png"),
	KlotskiBlock(1, 2, 1, 3, -1, -1, ":/NcBlocks/png/block_5.png"),
	KlotskiBlock(1, 2, 0, 3, -1, -1, ":/NcBlocks/png/block_6v.png"),
	KlotskiBlock(1, 1, 0, 2, -1, -1, ":/NcBlocks/png/block_7s.png"),
	KlotskiBlock(1, 1, 1, 2, -1, -1, ":/NcBlocks/png/block_8.png")
};
QList<kBlank> PennantBlanks = {
	{2, 2},
	{3, 2}
};
KlotskiBoard PennantBoard = KlotskiBoard(PennantBlocks, PennantBlanks, QString::fromLocal8Bit("Pennant"), QString::fromLocal8Bit("Pennant Puzzle by L. W. Hardy"), 4, 5);

QList<KlotskiBoard> GameBoards = { HrdBoard, ShogiBoard, DonaldBoard, TenBoard, BlockadoBoard, PennantBoard };

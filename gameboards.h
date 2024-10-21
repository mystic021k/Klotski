#include <qlist.h>
#include "klotskiBoard.h"

static QList<KlotskiBlock> HrdBlocks = {
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
static QList<kBlank> HrdBlanks = {
	{1, 4},
	{2, 4}
};
static KlotskiBoard HrdBoard = KlotskiBoard(HrdBlocks, HrdBlanks, QString::fromLocal8Bit("���ݵ�"), QString::fromLocal8Bit("���������������ҵ��ѧ���ڽ���Ӣ��1949�����ġ���ѧ��ǲ���������Ʋ���ð汾����ʽ����ʼ�������������Դ�ڡ��������塷�С��ٰܲ��߻��ݵ������龰��������Ϸ��Ŀ������òܲٴӻ��ݵ����ߣ������������ϵľ��ǰ�����һ���Ƶ��ײ��м䡣���ڴ�Ҫ�ѡ��ܲ١���������ƶ������ڴ�����ÿ����������������·���͡��������塷�еĹ��º����ϡ�"), 4, 5);

static QList<KlotskiBlock> ShogiBlocks = {
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
static QList<kBlank> ShogiBlanks = {
	{1, 4},
	{2, 4}
};
static KlotskiBoard ShogiBoard = KlotskiBoard(ShogiBlocks, ShogiBlanks, QString::fromLocal8Bit("����"), QString::fromLocal8Bit("���ձ���Ҫ��������۵İ汾������Ů���ͽ��壬��Ϊǰ�ߵ�ģʽ�������ݵ���һ�������ڴ�ѡ���Ǻ��ߡ�����������ʽ����ۡ�Ŀ���ǰѡ�������Ҳ��������һ���Ƶ��ײ��м䡣"), 4, 5);

static QList<KlotskiBlock> DonaldBlocks = {
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
static QList<kBlank> DonaldBlanks = {
	{1, 3},
	{2, 3}
};
static KlotskiBoard DonaldBoard = KlotskiBoard(DonaldBlocks, DonaldBlanks, QString::fromLocal8Bit("����Ѽ"), QString::fromLocal8Bit("�����Ҵ�һ�����Ͽ���������ǵ�ʿ������İ汾��Ŀ����������Ѽ�߽����ţ�����Ҳ�ǰ�����һ���Ƶ��ײ��м䡣�ӻ����������ð汾��û�еõ���ʿ�����Ȩ�����ڴ��õ����������Ŀɶ�Ӧ�ϵĵ�ʿ������ͼƬ������Ϊ�˷�������͸߷ɶ�ֻ�����ֶ�����"), 4, 5);

static QList<KlotskiBlock> TenBlocks = {
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
static QList<kBlank> TenBlanks = {
	{0, 2},
	{1, 2}
};
static KlotskiBoard TenBoard = KlotskiBoard(TenBlocks, TenBlanks, QString::fromLocal8Bit("10 Block"), QString::fromLocal8Bit("�����������ǣ�10 Block Puzzle by A. Filipiak��Ŀ���ǰ���������Ҳ����A���B���λ�ý�����"), 4, 5);

static QList<KlotskiBlock> BlockadoBlocks = {
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
static QList<kBlank> BlockadoBlanks = {
	{0, 2},
	{1, 2}
};
static KlotskiBoard BlockadoBoard = KlotskiBoard(BlockadoBlocks, BlockadoBlanks, QString::fromLocal8Bit("Blockado"), QString::fromLocal8Bit("�����������ǣ�Blockado by Acme Novelty Sales��Ŀ���ǰ�����һ���Ƶ����½ǡ��Ƚ����еĳߴ���4��6�����̡�"), 4, 6);

static QList<KlotskiBlock> PennantBlocks = {
	KlotskiBlock(2, 2, 0, 0, 0, 3, ":/Pennant/png/pennant_chicago.png"),
	KlotskiBlock(2, 1, 2, 0, -1, -1, ":/Pennant/png/pennant_brooklyn.png"),
	KlotskiBlock(2, 1, 2, 1, -1, -1, ":/Pennant/png/pennant_stlouis.png"),
	KlotskiBlock(2, 1, 2, 3, -1, -1, ":/Pennant/png/pennant_cincinnati.png"),
	KlotskiBlock(2, 1, 2, 4, -1, -1, ":/Pennant/png/pennant_philadelphia.png"),
	KlotskiBlock(1, 2, 1, 3, -1, -1, ":/Pennant/png/pennant_newyork.png"),
	KlotskiBlock(1, 2, 0, 3, -1, -1, ":/Pennant/png/pennant_pittsburgh.png"),
	KlotskiBlock(1, 1, 0, 2, -1, -1, ":/Pennant/png/pennant_boston1.png"),
	KlotskiBlock(1, 1, 1, 2, -1, -1, ":/Pennant/png/pennant_boston2.png")
};
static QList<kBlank> PennantBlanks = {
	{2, 2},
	{3, 2}
};
static KlotskiBoard PennantBoard = KlotskiBoard(PennantBlocks, PennantBlanks, QString::fromLocal8Bit("Pennant"), QString::fromLocal8Bit("�����������ǣ�Pennant Puzzle by L. W. Hardy��������Dad's Puzzler��Ŀ���ǰ�����һ���Ƶ����½ǡ�������ʼ��1909�꣬�����������������ʽ�ı��֣��ڴ��õ��������һ��ӡ�����������ġ�"), 4, 5);

static QList<KlotskiBoard> GameBoards = { HrdBoard, ShogiBoard, DonaldBoard, TenBoard, BlockadoBoard, PennantBoard };

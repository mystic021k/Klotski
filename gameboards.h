#include <qlist.h>
#include "klotskiBoard.h"

const QList<KlotskiBlock> HrdBlocks = {
	KlotskiBlock(2, 2, 1, 0, 1, 3, ":/Hrd/png/hrd_Caocao.png", "Cao Cao"),
	KlotskiBlock(1, 2, 0, 0, -1, -1, ":/Hrd/png/hrd_Zhangfei.png", "Zhang Fei"),
	KlotskiBlock(1, 2, 3, 0, -1, -1, ":/Hrd/png/hrd_Zhaoyun.png", "Zhao Yun"),
	KlotskiBlock(1, 2, 0, 2, -1, -1, ":/Hrd/png/hrd_Huangzhong.png", "Huang Zhong"),
	KlotskiBlock(1, 2, 3, 2, -1, -1, ":/Hrd/png/hrd_Machao.png", "Ma Chao"),
	KlotskiBlock(2, 1, 1, 2, -1, -1, ":/Hrd/png/hrd_Guanyu.png", "Guan Yu"),
	KlotskiBlock(1, 1, 1, 3, -1, -1, ":/Hrd/png/hrd_Zu.png", "Zu 1"),
	KlotskiBlock(1, 1, 2, 3, -1, -1, ":/Hrd/png/hrd_Zu.png", "Zu 2"),
	KlotskiBlock(1, 1, 0, 4, -1, -1, ":/Hrd/png/hrd_Zu.png", "Zu 3"),
	KlotskiBlock(1, 1, 3, 4, -1, -1, ":/Hrd/png/hrd_Zu.png", "Zu 4")
};
const QList<kBlank> HrdBlanks = {
	{1, 4},
	{2, 4}
};
const KlotskiBoard HrdBoard = KlotskiBoard(HrdBlocks, HrdBlanks, QString::fromLocal8Bit("���ݵ�"), QString::fromLocal8Bit("���������������ҵ��ѧ���ڽ���Ӣ��1949�����ġ���ѧ��ǲ���������Ʋ���ð汾����ʽ����ʼ�������������Դ�ڡ��������塷�С��ٰܲ��߻��ݵ������龰��������Ϸ��Ŀ������òܲٴӻ��ݵ����ߣ������������ϵľ��ǰ�����һ���Ƶ��ײ��м䡣���ڴ�Ҫ�ѡ��ܲ١���������ƶ������ڴ�����ÿ����������������·���͡��������塷�еĹ��º����ϡ�"), "HRD", 4, 5);

const QList<KlotskiBlock> ShogiBlocks = {
	KlotskiBlock(2, 2, 1, 0, 1, 3, ":/Shogi/png/shogi_osho.png", "Osho"),
	KlotskiBlock(1, 2, 0, 0, -1, -1, ":/Shogi/png/shogi_hisha.png", "Hisha"),
	KlotskiBlock(1, 2, 3, 0, -1, -1, ":/Shogi/png/shogi_kakugyo.png", "Kakugyo"),
	KlotskiBlock(1, 1, 0, 2, -1, -1, ":/Shogi/png/shogi_kyosha.png", "Kyosha 1"),
	KlotskiBlock(1, 1, 1, 2, -1, -1, ":/Shogi/png/shogi_keima.png", "Keima 1"),
	KlotskiBlock(1, 1, 2, 2, -1, -1, ":/Shogi/png/shogi_keima.png", "Keima 2"),
	KlotskiBlock(1, 1, 3, 2, -1, -1, ":/Shogi/png/shogi_kyosha.png", "Kyosha 2"),
	KlotskiBlock(2, 1, 0, 3, -1, -1, ":/Shogi/png/shogi_kinsho.png", "Kinsho"),
	KlotskiBlock(2, 1, 2, 3, -1, -1, ":/Shogi/png/shogi_ginsho.png", "Ginsho"),
	KlotskiBlock(1, 1, 0, 4, -1, -1, ":/Shogi/png/shogi_fuhyo.png", "Fuhyo 1"),
	KlotskiBlock(1, 1, 3, 4, -1, -1, ":/Shogi/png/shogi_fuhyo.png", "Fuhyo 2")
};
const QList<kBlank> ShogiBlanks = {
	{1, 4},
	{2, 4}
};
const KlotskiBoard ShogiBoard = KlotskiBoard(ShogiBlocks, ShogiBlanks, QString::fromLocal8Bit("����"), QString::fromLocal8Bit("���ձ���Ҫ��������۵İ汾������Ů���ͽ��壬��Ϊǰ�ߵ�ģʽ�������ݵ���һ�������ڴ�ѡ���Ǻ��ߡ�����������ʽ����ۡ�Ŀ���ǰѡ�������Ҳ��������һ���Ƶ��ײ��м䡣"), "Shogi", 4, 5);

const QList<KlotskiBlock> DonaldBlocks = {
	KlotskiBlock(2, 2, 1, 0, 1, 3, ":/Donald/png/donald_donald.png", "Donald"),
	KlotskiBlock(1, 2, 0, 0, -1, -1, ":/Donald/png/donald_goofy01.png", "Goofy 1"),
	KlotskiBlock(1, 2, 3, 0, -1, -1, ":/Donald/png/donald_goofy01.png", "Goofy 2"),
	KlotskiBlock(1, 2, 0, 2, -1, -1, ":/Donald/png/donald_goofy02.png", "Goofy 3"),
	KlotskiBlock(1, 2, 3, 2, -1, -1, ":/Donald/png/donald_goofy02.png", "Goofy 4"),
	KlotskiBlock(1, 1, 1, 2, -1, -1, ":/Donald/png/donald_mickey01.png", "Mickey 1"),
	KlotskiBlock(1, 1, 2, 2, -1, -1, ":/Donald/png/donald_mickey01.png", "Mickey 2"),
	KlotskiBlock(1, 1, 0, 4, -1, -1, ":/Donald/png/donald_mickey02.png", "Mickey 3"),
	KlotskiBlock(1, 1, 3, 4, -1, -1, ":/Donald/png/donald_mickey02.png", "Mickey 4"),
	KlotskiBlock(2, 1, 1, 4, -1, -1, ":/Donald/png/donald_pluto.png", "Pluto")
};
const QList<kBlank> DonaldBlanks = {
	{1, 3},
	{2, 3}
};
const KlotskiBoard DonaldBoard = KlotskiBoard(DonaldBlocks, DonaldBlanks, QString::fromLocal8Bit("����Ѽ"), QString::fromLocal8Bit("�����Ҵ�һ�����Ͽ���������ǵ�ʿ������İ汾��Ŀ����������Ѽ�߽����ţ�����Ҳ�ǰ�����һ���Ƶ��ײ��м䡣�ӻ����������ð汾��û�еõ���ʿ�����Ȩ�����ڴ��õ����������Ŀɶ�Ӧ�ϵĵ�ʿ������ͼƬ������Ϊ�˷�������͸߷ɶ�ֻ�����ֶ�����"), "Donald", 4, 5);

const QList<KlotskiBlock> TenBlocks = {
	KlotskiBlock(2, 2, 0, 0, 0, 3, ":/NcBlocks/png/block_a.png", "Block A"),
	KlotskiBlock(2, 2, 0, 3, 0, 0, ":/NcBlocks/png/block_b.png", "Block B"),
	KlotskiBlock(1, 1, 2, 0, -1, -1, ":/NcBlocks/png/block_1s.png", "Block 1"),
	KlotskiBlock(1, 1, 3, 0, -1, -1, ":/NcBlocks/png/block_2s.png", "Block 2"),
	KlotskiBlock(2, 1, 2, 1, -1, -1, ":/NcBlocks/png/block_3.png", "Block 3"),
	KlotskiBlock(1, 1, 2, 2, -1, -1, ":/NcBlocks/png/block_4s.png", "Block 4"),
	KlotskiBlock(1, 1, 3, 2, -1, -1, ":/NcBlocks/png/block_5s.png", "Block 5"),
	KlotskiBlock(2, 1, 2, 3, -1, -1, ":/NcBlocks/png/block_6.png", "Block 6"),
	KlotskiBlock(1, 1, 2, 4, -1, -1, ":/NcBlocks/png/block_7s.png", "Block 7"),
	KlotskiBlock(1, 1, 3, 4, -1, -1, ":/NcBlocks/png/block_8.png", "Block 8")
};
const QList<kBlank> TenBlanks = {
	{0, 2},
	{1, 2}
};
const KlotskiBoard TenBoard = KlotskiBoard(TenBlocks, TenBlanks, QString::fromLocal8Bit("10 Block"), QString::fromLocal8Bit("�����������ǣ�10 Block Puzzle by A. Filipiak��Ŀ���ǰ���������Ҳ����A���B���λ�ý�����"), "10Block", 4, 5);

const QList<KlotskiBlock> BlockadoBlocks = {
	KlotskiBlock(2, 2, 0, 0, 0, 4, ":/NcBlocks/png/block_a.png", "Block A"),
	KlotskiBlock(2, 1, 2, 0, -1, -1, ":/NcBlocks/png/block_1.png", "Block 1"),
	KlotskiBlock(2, 1, 2, 1, -1, -1, ":/NcBlocks/png/block_2.png", "Block 2"),
	KlotskiBlock(2, 1, 2, 2, -1, -1, ":/NcBlocks/png/block_3.png", "Block 3"),
	KlotskiBlock(1, 2, 0, 3, -1, -1, ":/NcBlocks/png/block_4v.png", "Block 4"),
	KlotskiBlock(1, 2, 1, 3, -1, -1, ":/NcBlocks/png/block_5.png", "Block 5"),
	KlotskiBlock(2, 1, 2, 3, -1, -1, ":/NcBlocks/png/block_6.png", "Block 6"),
	KlotskiBlock(2, 1, 2, 4, -1, -1, ":/NcBlocks/png/block_7.png", "Block 7"),
	KlotskiBlock(1, 1, 0, 5, -1, -1, ":/NcBlocks/png/block_8.png", "Block 8"),
	KlotskiBlock(1, 1, 1, 5, -1, -1, ":/NcBlocks/png/block_9.png", "Block 9"),
	KlotskiBlock(2, 1, 2, 5, -1, -1, ":/NcBlocks/png/block_10.png", "Block 10")
};
const QList<kBlank> BlockadoBlanks = {
	{0, 2},
	{1, 2}
};
const KlotskiBoard BlockadoBoard = KlotskiBoard(BlockadoBlocks, BlockadoBlanks, QString::fromLocal8Bit("Blockado"), QString::fromLocal8Bit("�����������ǣ�Blockado by Acme Novelty Sales��Ŀ���ǰ�����һ���Ƶ����½ǡ��Ƚ����еĳߴ���4��6�����̡�"), "Blockado", 4, 6);

const QList<KlotskiBlock> PennantBlocks = {
	KlotskiBlock(2, 2, 0, 0, 0, 3, ":/Pennant/png/pennant_chicago.png", "Chicago"),
	KlotskiBlock(2, 1, 2, 0, -1, -1, ":/Pennant/png/pennant_brooklyn.png", "Brooklyn"),
	KlotskiBlock(2, 1, 2, 1, -1, -1, ":/Pennant/png/pennant_stlouis.png", "St. Louis"),
	KlotskiBlock(2, 1, 2, 3, -1, -1, ":/Pennant/png/pennant_cincinnati.png", "Cincinnati"),
	KlotskiBlock(2, 1, 2, 4, -1, -1, ":/Pennant/png/pennant_philadelphia.png", "Philadelphia"),
	KlotskiBlock(1, 2, 1, 3, -1, -1, ":/Pennant/png/pennant_newyork.png", "New York"),
	KlotskiBlock(1, 2, 0, 3, -1, -1, ":/Pennant/png/pennant_pittsburgh.png", "Pittsburgh"),
	KlotskiBlock(1, 1, 0, 2, -1, -1, ":/Pennant/png/pennant_boston1.png", "Boston 1"),
	KlotskiBlock(1, 1, 1, 2, -1, -1, ":/Pennant/png/pennant_boston2.png", "Boston 2")
};
const QList<kBlank> PennantBlanks = {
	{2, 2},
	{3, 2}
};
const KlotskiBoard PennantBoard = KlotskiBoard(PennantBlocks, PennantBlanks, QString::fromLocal8Bit("Pennant"), QString::fromLocal8Bit("�����������ǣ�Pennant Puzzle by L. W. Hardy��������Dad's Puzzler��Ŀ���ǰ�����һ���Ƶ����½ǡ�������ʼ��1909�꣬�����������������ʽ�ı��֣��ڴ��õ��������һ��ӡ�����������ġ�"), "Pennant", 4, 5);

const QList<KlotskiBoard> GameBoards = { HrdBoard, ShogiBoard, DonaldBoard, TenBoard, BlockadoBoard, PennantBoard };

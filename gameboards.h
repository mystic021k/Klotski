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
const KlotskiBoard HrdBoard = KlotskiBoard(HrdBlocks, HrdBlanks, QString::fromUtf8("华容道"), QString::fromUtf8("最早记载于西北工业大学教授姜长英在1949年出版的《科学消遣》，大致推测出该版本的样式最早始于民国。创意来源于《三国演义》中“曹操败走华容道”的情景，所以游戏的目标就是让曹操从华容道逃走，体现在棋盘上的就是把最大的一块移到底部中间。而在此要把“曹操”这个棋子移动到出口处，真得靠“关羽”这个棋子让路，和《三国演义》中的故事很贴合。"), "HRD", 4, 5);

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
const KlotskiBoard ShogiBoard = KlotskiBoard(ShogiBlocks, ShogiBlanks, QString::fromUtf8("将棋"), QString::fromUtf8("在日本主要有两种外观的版本：箱种女孩和将棋，因为前者的模式跟“华容道”一样，我在此选的是后者。将棋棋子样式的外观。目标是把“王将”也就是最大的一块移到底部中间。"), "Shogi", 4, 5);

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
const KlotskiBoard DonaldBoard = KlotskiBoard(DonaldBlocks, DonaldBlanks, QString::fromUtf8("唐老鸭"), QString::fromUtf8("这是我从一本书上看到的外观是迪士尼人物的版本。目标是让唐老鸭踢进球门，所以也是把最大的一块移到底部中间。从画风来看，该版本并没有得到迪士尼的授权，我在此用的是搜索到的可对应上的迪士尼人物图片，不过为了方便米奇和高飞都只有两种动作。"), "Donald", 4, 5);

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
const KlotskiBoard TenBoard = KlotskiBoard(TenBlocks, TenBlanks, QString::fromUtf8("10 Block"), QString::fromUtf8("完整的描述是：10 Block Puzzle by A. Filipiak。目标是把最大的两块也就是A块和B块的位置交换。"), "10Block", 4, 5);

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
const KlotskiBoard BlockadoBoard = KlotskiBoard(BlockadoBlocks, BlockadoBlanks, QString::fromUtf8("Blockado"), QString::fromUtf8("完整的描述是：Blockado by Acme Novelty Sales。目标是把最大的一块移到左下角。比较少有的尺寸是4×6的棋盘。"), "Blockado", 4, 6);

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
const KlotskiBoard PennantBoard = KlotskiBoard(PennantBlocks, PennantBlanks, QString::fromUtf8("Pennant"), QString::fromUtf8("完整的描述是：Pennant Puzzle by L. W. Hardy，又名：Dad's Puzzler。目标是把最大的一块移到左下角。该谜题始于1909年，后来出过多种外观样式的变种，在此用的是最早的一种印有美国地名的。"), "Pennant", 4, 5);

const QList<KlotskiBoard> GameBoards = { HrdBoard, ShogiBoard, DonaldBoard, TenBoard, BlockadoBoard, PennantBoard };

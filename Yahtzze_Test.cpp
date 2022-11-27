#include <gtest/gtest.h>
#include "Yahtzee_Unit.h"

class Yahtzee_UnitTest : public::testing::Test
{
protected:
	TYathzee_Form* yahtzee;

public:
	Yahtzee_UnitTest()
	{
		yahtzee = new TYathzee_Form;
	}

	virtual ~Yahtzee_UnitTest()
	{
		delete yahtzee;
	}
};

TEST_F(Yahtzee_UnitTest, determineTotalPointsOn1)
{
	yahtzee->sortedDie = { 1,2,3,4,5 };
	EXPECT_EQ(1, yahtzee->totalPointsOn1(yahtzee->sortedDie));

	yahtzee->sortedDie = { 1,1,3,4,5 };
	EXPECT_EQ(2, yahtzee->totalPointsOn1(yahtzee->sortedDie));

	yahtzee->sortedDie = { 1,1,1,4,5 };
	EXPECT_EQ(3, yahtzee->totalPointsOn1(yahtzee->sortedDie));

	yahtzee->sortedDie = { 1,1,1,1,5 };
	EXPECT_EQ(4, yahtzee->totalPointsOn1(yahtzee->sortedDie));

	yahtzee->sortedDie = { 1,1,1,1,1 };
	EXPECT_EQ(5, yahtzee->totalPointsOn1(yahtzee->sortedDie));

	yahtzee->sortedDie = { 2,3,4,4,6 };
	EXPECT_EQ(0, yahtzee->totalPointsOn1(yahtzee->sortedDie));
}

TEST_F(Yahtzee_UnitTest, determineTotalPointsOn2)
{
	yahtzee->sortedDie = { 1,2,3,4,5 };
	EXPECT_EQ(2, yahtzee->totalPointsOn2(yahtzee->sortedDie));

	yahtzee->sortedDie = { 2,2,3,4,5 };
	EXPECT_EQ(4, yahtzee->totalPointsOn2(yahtzee->sortedDie));

	yahtzee->sortedDie = { 2,2,2,4,5 };
	EXPECT_EQ(6, yahtzee->totalPointsOn2(yahtzee->sortedDie));

	yahtzee->sortedDie = { 2,2,2,2,5 };
	EXPECT_EQ(8, yahtzee->totalPointsOn2(yahtzee->sortedDie));

	yahtzee->sortedDie = { 2,2,2,2,2 };
	EXPECT_EQ(10, yahtzee->totalPointsOn2(yahtzee->sortedDie));

	yahtzee->sortedDie = { 1,3,4,4,6 };
	EXPECT_EQ(0, yahtzee->totalPointsOn2(yahtzee->sortedDie));
}

TEST_F(Yahtzee_UnitTest, determineTotalPointsOn3)
{
	yahtzee->sortedDie = { 1,2,3,4,5 };
	EXPECT_EQ(3, yahtzee->totalPointsOn3(yahtzee->sortedDie));

	yahtzee->sortedDie = { 3,3,4,5,6 };
	EXPECT_EQ(6, yahtzee->totalPointsOn3(yahtzee->sortedDie));

	yahtzee->sortedDie = { 3,3,3,4,5 };
	EXPECT_EQ(9, yahtzee->totalPointsOn3(yahtzee->sortedDie));

	yahtzee->sortedDie = { 3,3,3,3,5 };
	EXPECT_EQ(12, yahtzee->totalPointsOn3(yahtzee->sortedDie));

	yahtzee->sortedDie = { 3,3,3,3,3 };
	EXPECT_EQ(15, yahtzee->totalPointsOn3(yahtzee->sortedDie));

	yahtzee->sortedDie = { 1,2,4,4,6 };
	EXPECT_EQ(0, yahtzee->totalPointsOn3(yahtzee->sortedDie));
}

TEST_F(Yahtzee_UnitTest, determineTotalPointsOn4)
{
	yahtzee->sortedDie = { 1,2,3,4,5 };
	EXPECT_EQ(4, yahtzee->totalPointsOn4(yahtzee->sortedDie));

	yahtzee->sortedDie = { 3,3,4,4,6 };
	EXPECT_EQ(8, yahtzee->totalPointsOn4(yahtzee->sortedDie));

	yahtzee->sortedDie = { 2,4,4,4,5 };
	EXPECT_EQ(12, yahtzee->totalPointsOn4(yahtzee->sortedDie));

	yahtzee->sortedDie = { 4,4,4,4,5 };
	EXPECT_EQ(16, yahtzee->totalPointsOn4(yahtzee->sortedDie));

	yahtzee->sortedDie = { 4,4,4,4,4 };
	EXPECT_EQ(20, yahtzee->totalPointsOn4(yahtzee->sortedDie));

	yahtzee->sortedDie = { 1,2,3,5,6 };
	EXPECT_EQ(0, yahtzee->totalPointsOn4(yahtzee->sortedDie));
}

TEST_F(Yahtzee_UnitTest, determineTotalPointsOn5)
{
	yahtzee->sortedDie = { 1,2,3,4,5 };
	EXPECT_EQ(5, yahtzee->totalPointsOn5(yahtzee->sortedDie));

	yahtzee->sortedDie = { 3,3,5,5,6 };
	EXPECT_EQ(10, yahtzee->totalPointsOn5(yahtzee->sortedDie));

	yahtzee->sortedDie = { 2,4,5,5,5 };
	EXPECT_EQ(15, yahtzee->totalPointsOn5(yahtzee->sortedDie));

	yahtzee->sortedDie = { 4,5,5,5,5 };
	EXPECT_EQ(20, yahtzee->totalPointsOn5(yahtzee->sortedDie));

	yahtzee->sortedDie = { 5,5,5,5,5 };
	EXPECT_EQ(25, yahtzee->totalPointsOn5(yahtzee->sortedDie));

	yahtzee->sortedDie = { 1,2,3,4,6 };
	EXPECT_EQ(0, yahtzee->totalPointsOn5(yahtzee->sortedDie));
}

TEST_F(Yahtzee_UnitTest, determineTotalPointsOn6)
{
	yahtzee->sortedDie = { 1,2,3,4,6 };
	EXPECT_EQ(6, yahtzee->totalPointsOn6(yahtzee->sortedDie));

	yahtzee->sortedDie = { 3,3,5,6,6 };
	EXPECT_EQ(12, yahtzee->totalPointsOn6(yahtzee->sortedDie));

	yahtzee->sortedDie = { 2,4,6,6,6 };
	EXPECT_EQ(18, yahtzee->totalPointsOn6(yahtzee->sortedDie));

	yahtzee->sortedDie = { 4,6,6,6,6 };
	EXPECT_EQ(24, yahtzee->totalPointsOn6(yahtzee->sortedDie));

	yahtzee->sortedDie = { 6,6,6,6,6 };
	EXPECT_EQ(30, yahtzee->totalPointsOn6(yahtzee->sortedDie));

	yahtzee->sortedDie = { 1,2,3,4,5 };
	EXPECT_EQ(0, yahtzee->totalPointsOn6(yahtzee->sortedDie));
}

TEST_F(Yahtzee_UnitTest, determineTotalPoints3OfAKind)
{
	yahtzee->sortedDie = { 1,2,6,6,6 };
	EXPECT_EQ(21, yahtzee->threeOfAKind(yahtzee->sortedDie));

	yahtzee->sortedDie = { 3,3,3,6,6 };
	EXPECT_EQ(21, yahtzee->threeOfAKind(yahtzee->sortedDie));

	yahtzee->sortedDie = { 2,4,5,6,6 };
	EXPECT_EQ(0, yahtzee->threeOfAKind(yahtzee->sortedDie));
}

TEST_F(Yahtzee_UnitTest, determineTotalPoints4OfAKind)
{
	yahtzee->sortedDie = { 1,6,6,6,6 };
	EXPECT_EQ(25, yahtzee->fourOfAKind(yahtzee->sortedDie));

	yahtzee->sortedDie = { 3,3,3,3,6 };
	EXPECT_EQ(18, yahtzee->fourOfAKind(yahtzee->sortedDie));

	yahtzee->sortedDie = { 2,4,5,6,6 };
	EXPECT_EQ(0, yahtzee->fourOfAKind(yahtzee->sortedDie));
}

TEST_F(Yahtzee_UnitTest, determineTotalPointsFullHouse)
{
	yahtzee->sortedDie = { 1,1,6,6,6 };
	EXPECT_EQ(25, yahtzee->fullHouse(yahtzee->sortedDie));

	yahtzee->sortedDie = { 3,3,3,6,6 };
	EXPECT_EQ(25, yahtzee->fullHouse(yahtzee->sortedDie));

	yahtzee->sortedDie = { 2,4,5,6,6 };
	EXPECT_EQ(0, yahtzee->fullHouse(yahtzee->sortedDie));
}

TEST_F(Yahtzee_UnitTest, determineTotalPointsSmallStraight)
{
	yahtzee->sortedDie = { 1,2,3,4,6 };
	EXPECT_EQ(30, yahtzee->smallStraight(yahtzee->sortedDie));

	yahtzee->sortedDie = { 1,2,3,3,4 };
	EXPECT_EQ(30, yahtzee->smallStraight(yahtzee->sortedDie));

	yahtzee->sortedDie = { 1,2,2,3,4 };
	EXPECT_EQ(30, yahtzee->smallStraight(yahtzee->sortedDie));

	yahtzee->sortedDie = { 2,2,3,4,5 };
	EXPECT_EQ(30, yahtzee->smallStraight(yahtzee->sortedDie));

	yahtzee->sortedDie = { 3,3,3,3,3 };
	EXPECT_EQ(30, yahtzee->smallStraight(yahtzee->sortedDie));

	yahtzee->sortedDie = { 1,1,1,2,3 };
	EXPECT_EQ(0, yahtzee->smallStraight(yahtzee->sortedDie));

	yahtzee->sortedDie = { 1,2,3,3,3 };
	EXPECT_EQ(0, yahtzee->smallStraight(yahtzee->sortedDie));
}

TEST_F(Yahtzee_UnitTest, determineTotalPointsLargeStraight)
{
	yahtzee->sortedDie = { 1,2,3,4,5 };
	EXPECT_EQ(40, yahtzee->largeStraight(yahtzee->sortedDie));

	yahtzee->sortedDie = { 2,3,4,5,6 };
	EXPECT_EQ(40, yahtzee->largeStraight(yahtzee->sortedDie));

	yahtzee->sortedDie = { 3,3,3,3,3 };
	EXPECT_EQ(40, yahtzee->largeStraight(yahtzee->sortedDie));

	yahtzee->sortedDie = { 1,2,3,4,6 };
	EXPECT_EQ(0, yahtzee->largeStraight(yahtzee->sortedDie));

	yahtzee->sortedDie = { 2,2,3,4,5 };
	EXPECT_EQ(0, yahtzee->largeStraight(yahtzee->sortedDie));

	yahtzee->sortedDie = { 1,1,1,2,3 };
	EXPECT_EQ(0, yahtzee->largeStraight(yahtzee->sortedDie));

	yahtzee->sortedDie = { 1,2,3,3,3 };
	EXPECT_EQ(0, yahtzee->largeStraight(yahtzee->sortedDie));
}

TEST_F(Yahtzee_UnitTest, determineTotalPointsYahtzee)
{
	YahtzeeScoring yahtzeeScoring{};
	yahtzee->sortedDie = { 3,3,3,3,3 };

	yahtzee->scores.lowerSection.yahtzee = 0;
	yahtzeeScoring = yahtzee->yahtzee(yahtzee->sortedDie);
	EXPECT_EQ(50, yahtzeeScoring.yahtzeeScore);

	yahtzee->scores.lowerSection.yahtzee = 50;
	yahtzeeScoring = yahtzee->yahtzee(yahtzee->sortedDie);
	EXPECT_EQ(100, yahtzeeScoring.yahtzeeScore);

	EXPECT_EQ(30, yahtzeeScoring.smallStraightScore);
	EXPECT_EQ(40, yahtzeeScoring.largeStraightScore);

	yahtzee->sortedDie = { 1,3,3,3,3 };

	yahtzee->scores.lowerSection.yahtzee = 0;
	yahtzeeScoring = yahtzee->yahtzee(yahtzee->sortedDie);
	EXPECT_EQ(0, yahtzeeScoring.yahtzeeScore);

	yahtzee->scores.lowerSection.yahtzee = 50;
	yahtzeeScoring = yahtzee->yahtzee(yahtzee->sortedDie);
	EXPECT_EQ(0, yahtzeeScoring.yahtzeeScore);

	EXPECT_EQ(0, yahtzeeScoring.smallStraightScore);
	EXPECT_EQ(0, yahtzeeScoring.largeStraightScore);

	yahtzee->sortedDie = { 3,3,3,3,5 };

	yahtzee->scores.lowerSection.yahtzee = 0;
	yahtzeeScoring = yahtzee->yahtzee(yahtzee->sortedDie);
	EXPECT_EQ(0, yahtzeeScoring.yahtzeeScore);

	yahtzee->scores.lowerSection.yahtzee = 50;
	yahtzeeScoring = yahtzee->yahtzee(yahtzee->sortedDie);
	EXPECT_EQ(0, yahtzeeScoring.yahtzeeScore);

	EXPECT_EQ(0, yahtzeeScoring.smallStraightScore);
	EXPECT_EQ(0, yahtzeeScoring.largeStraightScore);
}

TEST_F(Yahtzee_UnitTest, determineTotalPointsChance)
{
	yahtzee->sortedDie = { 3,3,3,3,3 };
	EXPECT_EQ(15, yahtzee->totalPointsOnChance(yahtzee->sortedDie));

	yahtzee->sortedDie = { 3,3,4,5,6 };
	EXPECT_EQ(21, yahtzee->totalPointsOnChance(yahtzee->sortedDie));

	yahtzee->sortedDie = { 1,2,4,5,6 };
	EXPECT_NE(0, yahtzee->totalPointsOnChance(yahtzee->sortedDie));
}
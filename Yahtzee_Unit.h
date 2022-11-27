//---------------------------------------------------------------------------

#ifndef Yahtzee_UnitH
#define Yahtzee_UnitH

#define UNIT_TEST	true
#define SOUND_ON	false
//---------------------------------------------------------------------------
#include <cstdint>
#include <array>
#include "../../../Dev/Yahtzee_Data.h"
//---------------------------------------------------------------------------

#if (SOUND_ON)
enum class soundsEnum
{
	GAMEOVERSOUND,
	HOLDDIESOUND,
	ROLLDIESOUND,
	SCORESOUND,
	SELECTSCORINGSOUND,
	YAHTZEESOUND,

    TOTALOFSOUNDS // This enum MUST be the last one.
};
constexpr uint8_t NUMOFSOUNDS{static_cast<uint8_t>(soundsEnum::TOTALOFSOUNDS)};
using soundArray = std::array<String, NUMOFSOUNDS>;
#endif
//---------------------------------------------------------------------------

class TYathzee_Form
{
public:

	uint8_t totalPointsOn1(const dieArray sortedDie);
	uint8_t totalPointsOn2(const dieArray sortedDie);
	uint8_t totalPointsOn3(const dieArray sortedDie);
	uint8_t totalPointsOn4(const dieArray sortedDie);
	uint8_t totalPointsOn5(const dieArray sortedDie);
	uint8_t totalPointsOn6(const dieArray sortedDie);
	uint8_t threeOfAKind(const dieArray sortedDie);
	uint8_t fourOfAKind(const dieArray sortedDie);
	uint8_t fullHouse(const dieArray sortedDie);
	uint8_t smallStraight(const dieArray sortedDie);
	uint8_t largeStraight(const dieArray sortedDie);
	YahtzeeScoring yahtzee(const dieArray sortedDie);
	uint8_t totalPointsOnChance(const dieArray sortedDie);

#if (SOUND_ON)
	void loadSongs();
	soundArray listOfSounds{};
#endif

	dieArray sortedDie{};
	Scoring scores{};
	void set_bit(uint8_t&, uint8_t);
	uint8_t diffBetweenNum(uint8_t first, uint8_t second) const;
	bool isYahtzee(const dieArray sortedDie);

	TYathzee_Form();

};
//---------------------------------------------------------------------------

#endif // Yahtzee_UnitH
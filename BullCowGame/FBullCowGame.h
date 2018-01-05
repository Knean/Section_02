#pragma once
#include <string>
using FString = std::string;
using int32 = int;


struct FBullCowCount {
	int32 Bulls = 0;
	int32 Cows = 0;
};
enum class EWordStatus {
	ok,
	Not_Isogram,
};

class FBullCowGame {
public:
	FBullCowGame();
	void Reset(); //todo make a more rich return value.
	int GetMaxTries()const;
	int GetCurrentTry()const;
	bool IsGameWon()const;
	bool CheckGuessValidity(FString)const;
	int32 GetHiddenWordLength() const;

	EWordStatus CheckGuessValidity(FString);

	FBullCowCount SubmitGuess(FString);

	// please try and ignore this and focus on the interface above ^^
private:
	int MyCurrentTry ;
	int MyMaxTries=5;
	FString MyHiddenWord="mario";
};
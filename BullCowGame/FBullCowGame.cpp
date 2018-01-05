#include "FBullCowGame.h"
using int32 = int;
FBullCowGame::FBullCowGame()
{
	//reset();
}

void FBullCowGame::Reset()
{
		
	constexpr int32 MAX_TRIES = 8;
	MyMaxTries = MAX_TRIES;

	const FString HIDDEN_WORD = "planet";
	MyHiddenWord = HIDDEN_WORD;
	MyCurrentTry = 1;

	return;
}
//sdfdsfdsfsdf
int32 FBullCowGame::GetMaxTries()const
{
	return MyMaxTries;
}

int32 FBullCowGame::GetCurrentTry() const
{
	return MyCurrentTry;
}

bool FBullCowGame::IsGameWon()const
{
	return false;
}

int32 FBullCowGame::GetHiddenWordLength() const
{
	return MyHiddenWord.length();
}

EWordStatus FBullCowGame::CheckGuessValidity(FString)
{
	return EWordStatus::
}
//receives a VALID guess, increments turn, and returns count

FBullCowCount FBullCowGame::SubmitGuess(FString Guess)
{
	// icnrement the turn number
	MyCurrentTry++;
	// setup a return variable
	FBullCowCount BullCowCount;
	int32 HiddenWordLength = MyHiddenWord.length();
	for (int32 i = 0; i < HiddenWordLength; i++) {

		for (int32 j = 0; j < HiddenWordLength; j++) {
			if (Guess[j] == MyHiddenWord[i]) {
				if (j == i) {
					BullCowCount.Bulls++;
					continue;

				}
				BullCowCount.Cows++;
				
			}
		

			//compare letters against the hidden word
				// if they match then 
					//if they're in the same place
						//increment bulls
					// \zzelse
						//increment cows
		}
		
	}
	// loop through all letters in the guess
		// compatre letters against the hidden word
	return BullCowCount;
}

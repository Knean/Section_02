#include <iostream>
#include <string>
using int32 = int;
using FText = std::string;
void PrintIntro();
void PlayGame();
#include "FBullCowGame.h"
bool AskToPlayAgain();
FBullCowGame BCGame;

int main() { 
	bool bplayagain = false;
	//loop for the number of turns asking for guesses
	do {
		PrintIntro();
		PlayGame();
		bplayagain = AskToPlayAgain();
	}
	while(bplayagain);
	return 0;
}

void PlayGame()
{
	
	int32 MaxTries = BCGame.GetMaxTries();
	FText Guess = "";
	
	
	for (int32 i = 0; i < MaxTries; ++i) {
		std::cout << "your current try is " << BCGame.GetCurrentTry() << std::endl;
		//FText Guess = GetGuess();
		std::getline(std::cin, Guess);
		FBullCowCount BullCowCount = BCGame.SubmitGuess(Guess);
		std::cout << "Bulls = " << BullCowCount.Bulls;
		std::cout << ". Cows = " << BullCowCount.Cows<<std::endl;
		
		

		
	}
}

bool AskToPlayAgain()
{
	std::cout << "do you wanna play again";
	FText answer = "";
	std::getline(std::cin, answer);
	std::cout << "he said yes";
	return (answer[0] == 'y' || answer[0] == 'Y');
}

void PrintIntro() {
	int32 i = BCGame.GetHiddenWordLength();

	std::cout << "Welcome to Bulls and Cows\n" << std::endl;
	std::cout << "can you guess the " << BCGame.GetHiddenWordLength() << " letter isogram that I'm thinking off\n";
	

}
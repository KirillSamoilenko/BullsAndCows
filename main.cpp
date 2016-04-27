#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuess();
void PlayGame();
bool AskToPlayAgain();

// the entry point for our application
int main()
{
	PrintIntro();
	do
	{
		cout << endl;
		PlayGame();
	} while (AskToPlayAgain()==true);
	return 0; // exit the application
}

// introduce the game
void PrintIntro()
{
	constexpr int WORLD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you guess the " << WORLD_LENGTH;
	cout << " letter isogram I'm thinking of?\n";
	return;
}

// get a guess from the player
string GetGuess()
{
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);
	return Guess;
}

// loop for the number of turns asking for guesses
void PlayGame()
{
	constexpr int limit = 5;
	for (int count = 1; count <= limit; count++)
	{
		string Guess = GetGuess();
		cout << "Your guess was " << Guess << "\n";
		cout << endl;
	}
}

bool AskToPlayAgain()
{
	cout << "Do you wanna play again?\n";
	string Response = "";
	getline(cin, Response);
	return (Response[0] == 'y' || Response[0] == 'Y');
}

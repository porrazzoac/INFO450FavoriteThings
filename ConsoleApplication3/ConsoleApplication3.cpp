#include <iostream>
#include <string>
#include "Game.h"
#include "Library.h"

using namespace std;

void intro();
void input();


int main()
{
	Game myGames;

	Library myLibrary;

	intro();

	char answer{};

	string gameTitle;

	string gameDev;

	string gameGenre;

	string gameRating;

	string gamePlatform;

	double gameCost;

	do
	{
		myLibrary.addGame();

		input();

		cin >> answer;

		cout << endl;

		cin.clear();

		cin.ignore();
		
	} while (answer == 'Y');
	do
	{
		cout << "Please enter the game Title: " << endl;
		cin >> gameTitle;

		cout << "Please enter the game Developer: " << endl;
		cin >> gameDev;


		cout << "Please enter the game Genre: " << endl;
		cin >> gameGenre;


		cout << "Please enter the game Rating: " << endl;
		cin >> gameRating;


		cout << "Please enter the game Platform: " << endl;
		cin >> gamePlatform;


		cout << "Please enter the game Cost: " << endl;
		cin >> gameCost;
		
	} while (answer =='Y');

	myLibrary.displayList();
	
	system("pause");
	return 0;
}


void intro()
{
	cout << "   Track your Favorite Video Games!   " << endl;
	cout << "   Track the Title, Developer, Genre, Rating, Platform, and Cost   " << endl;
	cout << "   Build and Maintain your Library!   " << endl;
	cout << "   Compare with your Friends to see whos Library is better   " << endl;
	cout << endl;

}

void input()
{
	cout << "   Would you like to add and update your Library?   " << endl;
	cout << "   Please enter Y to continue   " << endl;
	cout << endl;
}
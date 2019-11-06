#include <iostream>
#include <string>
#include "Game.h"
using namespace std;

Game::Game()
{
	gameTitle = "";
	gameDev = "";
	gameGenre = "";
	gameRating = "";
	gamePlatform = "";
	gameCost = 0;
}

Game::~Game()
{
}


string Game::getgameTitle()
{
	return gameTitle;
}
string Game::getgameDev()
{
	return gameDev;
}
string Game::getgameGenre()
{
	return gameGenre;
}
string Game::getgameRating()
{
	return gameRating;
}
string Game::getgamePlatform()
{
	return gamePlatform;
}
double Game::getgameCost()
{
	return gameCost;
}

void Game::setgameTitle(string T)
{
	gameTitle = T;
}
void Game::setgameDev(string D)
{
	gameDev = D;
}
void Game::setgameGenre(string G)
{
	gameGenre = G;
}
void Game::setgameRating(string R)
{
	gameRating = R;
}
void Game::setgamePlatform(string P)
{
	gamePlatform = P;
}
void Game::setgameCost(double C)
{
	gameCost = C;
}

void Game::addgameLibrary()
{
	do
	{
		cout << "Please enter the game Title: " << endl;
		getline(cin, gameTitle);

		cout << "Please enter the game Developer: " << endl;
		getline(cin, gameDev);
		

		cout << "Please enter the game Genre: " << endl;
		getline(cin, gameGenre);
		

		cout << "Please enter the game Rating: " << endl;
		getline(cin, gameRating);
		

		cout << "Please enter the game Platform: " << endl;
		getline(cin, gamePlatform);
		

		cout << "Please enter the game Cost: " << endl;
		cin >> gameCost;
		cin.ignore();
	} while (gameTitle.empty());
}

ostream& operator << (ostream& os, Game& library)
{
	os << "Game: " << library.gameTitle << endl;
	os << "Developer: " << library.gameDev << endl;
	os << "Genre: " << library.gameGenre << endl;
	os << "Rating: " << library.gameRating << endl;
	os << "Platform: " << library.gamePlatform << endl;
	os << "Cost: " << library.gameCost << endl;
	return os;
}
#pragma once
#include <iostream>
#include <string>
#include "Game.h"

using namespace std;

class Library

{

	Game library[100];
	int Librarysize;

public:

	Library();

	int addGame();

	void displayList();

};


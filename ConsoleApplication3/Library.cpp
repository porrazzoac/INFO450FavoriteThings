#include <iostream>
#include <string>
#include "Game.h"
#include "Library.h"

using namespace std;

Library::Library()

{

	Librarysize = 0;

}

int Library::addGame()

{

	Game newLibrary;
	newLibrary.addgameLibrary();
	library[Librarysize] = newLibrary;
	Librarysize++;
	return 0;
}

void Library::displayList()

{

	int i;

	for (i = 0; i < Librarysize; i++)

	{

		cout << library[i];

	}


}
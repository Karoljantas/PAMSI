#pragma once
#include <iostream>
using namespace std;
struct element   //elemet listy przechowuje wskaznik na kolejny elemet i dane o danej osobie
{
	string imie;
	string nazwisko;
	element* nast; //wskaznik
};

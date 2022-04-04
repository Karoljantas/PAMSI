#pragma once
#include "element.h"


class kolejka  //klasa kolejka
{
private:  //typ prywatny
    int N; // ilosc elemetów w kolejce
    element* ostatni;  //ostatni elemet
public:  //typ publiczny
    kolejka();  //konstruktor kolejka   przypisuje null i N=0
    void rozmiar() { cout << "ilosc elementow: " << N << endl; } //wypisuje ilosc elemetow
    bool empty();  //sprawdzenie czy kolejka jest pusta
    element  front(); //zwraca 1 elemet
    void push(string imie, string nazwisko);  //funkcja dodajaca elemet 
    void pop();  //funkcja zdejmujaca elemet
    void wyswietl(); //wyswietlajaca elemet
};


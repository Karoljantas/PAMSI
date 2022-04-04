#include "kolejka.h"


kolejka::kolejka() //opis konstruktora 
{
    ostatni = NULL;
    N = 0;
}




bool kolejka::empty() // sprawdzanie czy jest pusta kolejka 
{
    return !ostatni;//zwraca informacje czy jest pusty czy nie 
}
element  kolejka::front() //opis 1 elemetu
{
    return *(ostatni->nast); //zwraca 1 elemet
}

void kolejka::wyswietl() //opis f wyswietlania 
{
    element* nowy = ostatni->nast; //przypisanie pierwszego elemetu do zmiennej
    for (int i=0; i<N;i++, nowy = nowy->nast)//petla przechodzaca przez wszystkie elemety
        cout << nowy->imie << " " << nowy->nazwisko << endl;//wyswietlenie imienia i nazwiska
}

void kolejka::push(string imie, string nazwisko)  //opis dodawania do kolejki
{
    N++; //zwiekszamy ilosc osob w kolejce 
    element* nowy = new element; //tworzymy nowy elemet
    nowy->imie = imie; //nowe imie i nazwisko
    nowy->nazwisko = nazwisko;
    if (ostatni) //jezeli kolejka nie jest pusta 
    {
        nowy->nast = ostatni->nast; //dodajemy do nowego ostatniego nowego 
        ostatni->nast = nowy;//ostatni jest nowym
    }
    else  //jesli nie ma nikogo w kolejce
    {
        nowy->nast = nowy; //osoba dodana jest nowa osoba
        ostatni = nowy; //i jednoczenie ostatnim
    }
}


void kolejka::pop()//sciaganie z kolejki
{
    if (ostatni) //jezeli pusta
    {
        N--; //odejmujemy z kolejki
        element* nowy = ostatni->nast; //tworzymy nowy elem do ktorego przypisujemy nowy elemet 
        if (nowy->nast != nowy) //jezeli ostatni nie jest pierwszym 
            ostatni->nast = nowy->nast; 
        else
            ostatni = NULL; 
        delete nowy;  
    }
}

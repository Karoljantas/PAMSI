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



void kolejka::push(string imie, string nazwisko)  //opis dodawania do kolejki
{
    N++; //zwiekszamy ilosc osob w kolejce 
    element* nowy = new element; //tworzymy nowy elemet
    nowy->imie = imie; //nowe imie i nazwisko
    nowy->nazwisko = nazwisko;
    if (ostatni) //jezeli kolejka nie jest pusta 
    {
        ostatni->nast = nowy; //dodajemy do nowego ostatniego nowego 
    }
    else  //jesli nie ma nikogo w kolejce
    {
        pierwszy = nowy; //osoba dodana jest nowa osoba
       
    }
    ostatni = nowy;
}


void kolejka::pop()//sciaganie z kolejki
{
    if (pierwszy) //jezeli pusta
    {
        N--; //odejmujemy z kolejki
        element* nowy = pierwszy; //tworzymy nowy elem do ktorego przypisujemy nowy elemet 
        pierwszy = pierwszy->nast;
           if(!pierwszy)
               ostatni = NULL; //jezeli nie ma ostatniego
        delete nowy; //usuwamy nowego 
    }
}

void kolejka::wyswietl() //opis f wyswietlania 
{
    element* nowy = pierwszy; //przypisanie pierwszego elemetu do zmiennej
    for (int i = 0; i < N; i++, nowy = nowy->nast)//petla przechodzaca przez wszystkie elemety
        cout << nowy->imie << " " << nowy->nazwisko << endl;//wyswietlenie imienia i nazwiska
}

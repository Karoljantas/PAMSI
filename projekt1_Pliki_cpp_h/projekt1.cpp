// projekt1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "kolejka.h"
int main()
{
    kolejka nowa;
    int opcja=7;
    string imiona[] = { "Arek", "Karol", "Pawel","Marcin","Darek", "Ela","Jan","Kuba","Karolina","Piotr", "Julek", "Martyna","Daria"};//baza osob do losowania
    string nazwiska[] = { "Nowak","Jantas","Konieczny","Jantas1","Konieczny2","Jantas2","Nowak2","Marcinkowski","Marcinkowski2"};//baza osob do losowania
    

    while (opcja!=0) //do czasu konca programu 
    {
        nowa.rozmiar();  
        cout << "1.dodaj" << endl;   //wyswietla dostepne opcje
        cout << "2.usun" << endl;   //wyswietla dostepne opcje
        cout << "3.wyswietl" << endl;    //wyswietla dostepne opcje
        cout << "0.koniec" << endl;     //wyswietla dostepne opcje
        cin >> opcja;    //pobiera opcje z klawiatury 
        switch (opcja)  //menu
        {
        case 1:  //gdy 1 
            nowa.push(imiona[rand() % size(imiona)], nazwiska[rand() % size(nazwiska)]);  //dodaje losowa osobe 
            break;
        case 2:  //gdy 2
            nowa.pop();  //usuwa
            break;
        case 3:  //gdy 3
            nowa.wyswietl();  //wyswietla 
            break;
        default:
            break;
        }
    }
}

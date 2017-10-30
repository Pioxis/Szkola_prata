//interfejs klasy Stock
//wersja 00
#ifndef STOCK00_H_
#define STOCK00_H_

#include <string>
using namespace std;
class Stock // Deklaracja klasy - nowy typ, cos jak definiowanie na nowo inta itp
{
private:
	string company;		//Obiekt company
	long shares;		//Obiekt shares - liczba akcji
	double share_val;	//Obiekt - wartosc akcji
	double total_val;	//³¹czna wartoœæ udzia³u
	void set_tot() { total_val = shares*share_val; } //ustawienie wartosci ³¹cznej udzia³u - metoda
public:													//metody klasy - funkcje sk³adowe
	void acquire(const string & co, long n, double pr);
	void buy(long num, double price); //num - liczba nabywanych udzialow, price - wartosc udzialu
	void sell(long num, double price);
	void update(double price);
	void show();
}; //œrednik konczy deklaracje klasy
#endif // !STOCK00_H_

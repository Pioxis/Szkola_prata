//implementacja metod klasy Stock
#include<iostream>
#include"Stock.h"
using namespace std;
void Stock::acquire(const string & co, long n, double pr)
{
	company = co;
	if(n < 0)
	{
		cout << "Ilosc udzialow nie moze byc nizsza niz 0" << '\n' << "Ustalam liczbê udzia³ów na 0" << endl;
		shares = 0;
	}
	else
	{
		shares = n;
	}
	share_val = pr;
	cout << "Podana wartosc jednej akcji: " << share_val << endl;
	set_tot();
}

void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		cout << "Wartosc nabywanych udzialow nie moze byc nizsza od 0. Transakcja zostaje przerwana" << endl;
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	if (num < 0)
	{
		cout << "Liczba sprzedawanych udzialow nie moze byc ujemna. Transakcja zostaje przerwana" << endl;
	}
	else if (num>shares)
	{
		cout << "Liczba sprzedawanych transakcji nie moze przekroczyc dostepnej ilosci. Transakcja zostaje przerwana." << endl;
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}
void Stock::update(double price)
{
	share_val = price;
	set_tot();
}
void Stock::show()
{
	cout << "Nazwa spolki: " << company
		<< " Liczba udzialow: " << shares
		<< " Cena udzialu: " << share_val <<" zl"
		<< " Laczna wartosc udzialow: " << total_val << " zl" << endl;
}
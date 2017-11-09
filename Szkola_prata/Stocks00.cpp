//implementacja metod klasy Stock
#include<iostream>
#include"Stock.h"
#include "polishstring.h"
#include "Zaokr.h"

using namespace std;

void Stock::acquire(const string & co, long n, double pr)
{
	company = co;
	if(n < 0)
	{
		cout << PL("Ilo�� udzia��w nie mo�e by� ni�sza ni� 0") << '\n' << PL("Ustalam liczb� udzia��w na 0") << endl;
		shares = 0;
	}
	else
	{
		shares = n;
	}
	share_val = pr;
	cout << PL("Podana warto�� jednej akcji: ") << share_val << endl;
	set_tot();
}
void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		cout << PL("Warto�� nabywanych udzia��w nie mo�e by� ni�sza od 0. Transakcja zostaje przerwana") << endl;
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
		cout << PL("Liczba sprzedawanych udzia��w nie mo�e by� ujemna. Transakcja zostaje przerwana") << endl;
	}
	else if (num>shares)
	{
		cout << PL("Liczba sprzedawanych transakcji nie mo�e przekroczy� dostepnej ilosci. Transakcja zostaje przerwana.") << endl;
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
	cout << PL("Nazwa sp�ki: ") << company
		<< PL(" Liczba udzia��w: ") << shares
		<< PL(" Cena udzia�u: ") << share_val<<PL(" z�")
		<< PL(" ��czna warto�� udzia��w: ")<<total_val << PL(" z�") << endl;
}
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
		cout << PL("Iloœæ udzia³ów nie mo¿e byæ ni¿sza ni¿ 0") << '\n' << PL("Ustalam liczbê udzia³ów na 0") << endl;
		shares = 0;
	}
	else
	{
		shares = n;
	}
	share_val = pr;
	cout << PL("Podana wartoœæ jednej akcji: ") << share_val << endl;
	set_tot();
}
void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		cout << PL("Wartoœæ nabywanych udzia³ów nie mo¿e byæ ni¿sza od 0. Transakcja zostaje przerwana") << endl;
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
		cout << PL("Liczba sprzedawanych udzia³ów nie mo¿e byæ ujemna. Transakcja zostaje przerwana") << endl;
	}
	else if (num>shares)
	{
		cout << PL("Liczba sprzedawanych transakcji nie mo¿e przekroczyæ dostepnej ilosci. Transakcja zostaje przerwana.") << endl;
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
	cout << PL("Nazwa spó³ki: ") << company
		<< PL(" Liczba udzia³ów: ") << shares
		<< PL(" Cena udzia³u: ") << share_val<<PL(" z³")
		<< PL(" £¹czna wartoœæ udzia³ów: ")<<total_val << PL(" z³") << endl;
}
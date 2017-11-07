#include <iostream>
#include "Stock.h"
#include <conio.h>
#include "polishstring.h"

using namespace std;



int main()
{
	Stock firma1, firma2;
	double udzial1 = 345.123;
	double udzial2 = 1530.556;
	firma1.acquire("PioxisTM", 13, udzial1);
	firma1.show();
	firma1.sell(2, udzial1);
	firma1.show();

	firma2.acquire("KamilSA", 1337, udzial2);
	firma2.show();
	system("pause");

	return 0;
}
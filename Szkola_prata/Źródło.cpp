#include <iostream>
#include "Stock.h"

using namespace std;

int main()
{
	Stock firma1, firma2;
	double udzial1 = 345.123;
	firma1.acquire("PioxisTM", 13, udzial1);
	firma1.show();
	firma1.sell(2, udzial1);
	firma1.show();
	system("pause");
	return 0;
}
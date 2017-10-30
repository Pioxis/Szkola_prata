#include <cmath>
#include <iostream>
#include "Stock.h"

using namespace std;

int main()
{
	/*int x;
	int y;
		int zesp1[2] = { 2, 5 };
		int zesp2[2] = { 6, 12 };

	cout << "Podaj pierwsza liczbe zespolona gdzie x = " << endl;
	cin >> x;
	cout << ", a iy = " << endl;
	cin >> y;
	zesp1[0] = x;
	zesp1[1] = y;

	cout << zesp1[0] << " + i" << zesp1[1] << endl;
	cout << zesp2[0] << " + i" << zesp2[1] << endl;

	double mod1 = sqrt(pow(zesp1[0], 2) + pow(zesp1[1], 2));
	double mod2 = sqrt(pow(zesp2[0], 2) + pow(zesp2[1], 2));

	cout << "Wynik modulu dla Z1 = " << mod1 << endl;
	cout << "Wynik modulu dla Z2 = " << mod2 << endl;*/

	Stock firma1, firma2;
	double udzial1 = 345.123;
	firma1.acquire("PioxisTM", 13, udzial1);
	firma1.show();
	firma1.sell(2, udzial1);
	firma1.show();
	


	system("pause");
	return 0;

}
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int wynik = 0;
	do
	{
		cin >> a;
		cin >> b;
		wynik = a + b;
		
	} while (wynik % 2 != 0);
	system("Pause");
	return 0;
}
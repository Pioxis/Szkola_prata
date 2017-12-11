#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int x = { 5 };
	double y{ 2.75 };
	short tab[5]{ 12,23,34,45,56 };
	cout << x << endl << y << endl;
	for (int i = 0; i < 5; i++)
		cout << tab[i] << endl;
	cout << endl;
	char32_t z{ 1232512 };
	cout << z << endl;

	system("pause");
	return 0;
}
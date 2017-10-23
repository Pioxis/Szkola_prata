#include <cmath>;
#include <iostream>;

using namespace std;

int main()
{
	int x = 0;
	int y = 0;
		int zesp1[2] = { 2,5 };
		int zesp2[2] = { 6,12 };

	cout << "Podaj pierwsza liczbe zespolona gdzie x = " << endl;
	cin >> x;
	cout << ", a iy = " << endl;
	cin >> y;
	zesp1[0] = x;
	zesp1[1] = y;

	cout << zesp1[0] << " + i" << zesp1[1] << endl;
	cout << zesp2[0] << " + i" << zesp2[1] << endl;

	system("pause");
	return 0;

}
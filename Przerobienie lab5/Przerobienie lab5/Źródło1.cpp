#include <iostream>
#include <string>
#include <memory>

using namespace std;

int main()
{
	//shared_ptr<string> films[5] =
	//{
	//		shared_ptr<string>(new string("Sowki, sowki")),
	//		shared_ptr<string>(new string("Gadajaca kaczka")),
	//		shared_ptr<string>(new string("Wyscig kurczakow")),
	//		shared_ptr<string>(new string("Kozi syn")),
	//		shared_ptr<string>(new string("Kukulcze jaja"))
	//};
	//shared_ptr<string> pwin;
	//pwin = films[2];//films[2] traci "posiadanie"
	//cout << "Nominowanie w kategorii najlepszego filmu przyrodniczego sa: " << endl;
	//for (int i = 0; i < 5; i++)
	//	cout << *films[i] << endl;
	//cout << "A zwyciezca jest " << *pwin << "!\n";
	//system("pause");

	//funkcja lambda
	auto test = [](int a, int b)->void {printf("Wyrazenie lambda: %d + %d = %d\n", a, b, a + b); };
	test(7, 8);
	auto test2 = [](int aa, int bb)->void {cout << "pierwiastek z sumy: " << std::sqrt(aa^2 + bb^2) << endl; };
	test2(5, 20);

	system("pause");
	return 0;
}
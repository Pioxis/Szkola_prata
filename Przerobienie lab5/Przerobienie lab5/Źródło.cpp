//#include <iostream>
//#include <string>
//#include <cmath>
//#include <memory>
//
//using namespace std;
//
//class Report
//{
//private:
//	std::string str;
//public:
//	Report(const std::string s) :str(s)
//	{
//		std::cout << "Obiekt utworzony!\n\n";
//	}
//	~Report() 
//	{
//		cout << "Obiekt usuniÍty\n\n";
//	}
//	void comment() const { cout << str << endl; }
//};
//
//int main()
//{
//	/*int x = { 5 };
//	double y{ 2.75 };
//	short tab[5]{ 12,23,34,45,56 };
//	cout << x << endl << y << endl;
//	for (int i = 0; i < 5; i++)
//		cout << tab[i] << endl;
//	cout << endl;
//	char32_t z{ 1232512 };
//	cout << z << endl;*/
//
//	{
//		std::auto_ptr<Report> ps(new Report("Ze wskaünikiem auto_ptr"));
//		ps->comment(); //s≥uøy do wywo≥ania metody obiektu przez wskaünik
//	}
//	{
//		std::shared_ptr<Report> ps(new Report("ze wskaünikiem shared_ptr"));
//		ps->comment();
//	}
//	{
//		std::unique_ptr<Report> ps(new Report("ze wskaünikiem unique_ptr"));
//		ps->comment();
//	}
//	system("pause");
//	return 0;
//
//}
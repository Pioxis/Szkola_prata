#include "klasy.h"
#include "GeometryFactory.h"
#include "UniqueGeometryList.h"
#include "GeometrySet.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	// Zadanie 1,2,3,4
	Circle kolo(5);
	Rectangle prostokat(10, 5);
	Triangle trojkat(6);
	cout << kolo.toString() << endl;
	cout << prostokat.toString() << endl;
	cout << trojkat.toString() << endl;

	// Zadanie 5
	string s = "circle 5";
	auto x = GeometryFactory::create(s);
	cout << x->toString() << endl;

	// Zadanie 6

	UniqueGeometryList Lista("Figures.txt");

	// Zadanie 7

	GeometrySet Set(std::move(Lista));

	// Zadanie 8

	//vector<std::weak_ptr<Geometry>> WeakPointerVector;
	//for (auto e = Set.SharePointerSet.begin(); e != Set.SharePointerSet.end(); ++e)
	//{
	//	auto p = *e;
	//	WeakPointerVector.push_back(std::weak_ptr<Geometry>(p));
	//}
	//Set.SharePointerSet.erase(Set.SharePointerSet.begin());
	//for (auto e = WeakPointerVector.begin(); e != WeakPointerVector.end(); ++e)
	//{
	//	cout << e.toString();
	//}

	system("pause");
	return 0;
}
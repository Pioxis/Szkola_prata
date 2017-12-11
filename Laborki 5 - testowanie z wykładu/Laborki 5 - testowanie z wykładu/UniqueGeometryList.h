#ifndef UNIQUEGEOMETRYLIST_H_
#define UNIQUEGEOMETRYLIST_H_
#include "GeometryFactory.h"
#include "klasy.h"
#include <list>
#include <memory>
#include <iostream>
#include <fstream>
using namespace std;
class UniqueGeometryList
{
public:
	list<unique_ptr<Geometry>> UniquePointerList;
	UniqueGeometryList(const string file)
	{
		ifstream myfile(file);
		if (!myfile.good())
		{
			cout << "Blad odczytu pliku" << endl;
		}

		while (myfile.good())
		{
			string x;
			getline(myfile, x);
			UniquePointerList.emplace_back(GeometryFactory::create(x));
		}
		myfile.close();
	}
};
#endif
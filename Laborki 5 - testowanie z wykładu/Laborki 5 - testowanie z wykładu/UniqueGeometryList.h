#ifndef UNIQUEGEOMETRYLIST_H_
#define UNIQUEGEOMETRYLIST_H_
#include "GeometryFactory.h"
#include "klasy.h"
#include <list>
#include <memory>
#include <iostream>
#include <fstream>

class UniqueGeometryList
{
public:
	std::list<std::unique_ptr<Geometry>> UniquePointerList;
	UniqueGeometryList(const std::string file)
	{
		std::ifstream myfile(file);
		if (!myfile.good())
		{
			std::cout << "Blad odczytu pliku" << std::endl;
		}

		while (myfile.good())
		{
			std::string x;
			std::getline(myfile, x);
			UniquePointerList.emplace_back(GeometryFactory::create(x));
		}
		myfile.close();
	}
};
#endif
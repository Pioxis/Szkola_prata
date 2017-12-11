#ifndef GEOMETRYFACTORY_H_
#define GEOMETRYFACTORY_H_
#include "klasy.h"
#include <iostream>
#include <sstream>
#include <string>

class GeometryFactory
{
public:
	static Geometry* create(const std::string& x)
	{
		std::string nazwa;
		long double wartosc;
		long double wartosc2;
		std::istringstream s(x);
		s >> nazwa;
		s >> wartosc;

		if (nazwa == "circle")
		{
			return new Circle(wartosc);
		}
		else if (nazwa == "triangle")
		{
			return new Triangle(wartosc);
		}
		else if (nazwa == "rectangle")
		{
			s >> wartosc2;
			return new Rectangle(wartosc, wartosc2);
		}
	}
};
#endif
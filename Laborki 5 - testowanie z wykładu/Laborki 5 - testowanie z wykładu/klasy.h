#ifndef KLASY_H_
#define KLASY_H_
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <string>


class Geometry
{
public:
	virtual long double perimeter() = 0;
	virtual long double area() = 0;
	virtual std::string toString() = 0;

	virtual ~Geometry() {}
};

class Triangle : public Geometry
{
private:
	long double a;
public:
	Triangle() : a(0) {}
	Triangle(long double x) : a(x) {}
	Triangle(const Triangle& ref) : a(ref.a) {}
	Triangle(Triangle&& rhs) : a(rhs.a) {}

	virtual long double perimeter()
	{
		return a + a + a;
	}
	virtual long double area()
	{
		return ((a*a*std::sqrt(3.0f)) / 4);
	}
	virtual std::string toString()
	{
		return "Trojkat: bok a = " + std::to_string(a) + ", Pole = " + std::to_string(area()) + ", Obwod = " + std::to_string(perimeter());
	}
};

class Circle : public Geometry
{
private:
	long double r;
public:
	Circle() : r(0) {}
	Circle(long double x) : r(x) {}
	Circle(const Circle& ref) : r(ref.r) {}
	Circle(Circle&& rhs) : r(rhs.r) {}
	virtual long  double perimeter()
	{
		return 2 * M_PI * r;
	}
	virtual long  double area()
	{
		return r*r*M_PI;
	}
	virtual std::string toString()
	{
		return "Kolo: promien r = " + std::to_string(r) + ", Pole = " + std::to_string(area()) + ", Obwod = " + std::to_string(perimeter());
	}
};

class Rectangle : public Geometry
{
private:
	long double a;
	long double b;
public:
	Rectangle() : a(0), b(0) {}
	Rectangle(long double x, long  double y) : a(x), b(y) {}
	Rectangle(const Rectangle& ref) : a(ref.a), b(ref.b) {}
	Rectangle(Rectangle&& rhs) : a(rhs.a), b(rhs.b) {}
	virtual long double perimeter()
	{
		return a + a + b + b;
	}
	virtual long double area()
	{
		return a*b;
	}
	virtual std::string toString()
	{
		return "Prostokat: bok a " + std::to_string(a) + ", bok b " + std::to_string(b) + ", Pole = " + std::to_string(area()) + ", Obwod = " + std::to_string(perimeter());
	}
};
#endif
#ifndef GEOMETRYSET_H_
#define GEOMETRYSET_H_
#include "klasy.h"
#include "UniqueGeometryList.h"
#include <memory>
#include <set>
#include <functional>
using namespace std;
class GeometrySet
{

public:
	set<shared_ptr<Geometry>, 
		function<bool(shared_ptr<Geometry>, 
			shared_ptr<Geometry>)>>  SharePointerSet;

	GeometrySet(UniqueGeometryList&& rhs) : SharePointerSet([](shared_ptr<Geometry> a, shared_ptr<Geometry> b)->bool 
	{
		return a->area() < b->area();
	})
	{
		for (auto e = rhs.UniquePointerList.begin(); e != rhs.UniquePointerList.end(); ++e)
		{
			SharePointerSet.insert(move(*e));
		}
	}
};
#endif
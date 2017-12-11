#ifndef GEOMETRYSET_H_
#define GEOMETRYSET_H_
#include "klasy.h"
#include "UniqueGeometryList.h"
#include <memory>
#include <set>
#include <functional>

class GeometrySet
{

public:
	std::set<std::shared_ptr<Geometry>, 
		std::function<bool(std::shared_ptr<Geometry>, 
			std::shared_ptr<Geometry>)>>  SharePointerSet;

	GeometrySet(UniqueGeometryList&& rhs) : SharePointerSet([](std::shared_ptr<Geometry> a, std::shared_ptr<Geometry> b)->bool 
	{
		return a->area() < b->area();
	})
	{
		for (auto e = rhs.UniquePointerList.begin(); e != rhs.UniquePointerList.end(); ++e)
		{
			SharePointerSet.insert(std::move(*e));
		}
	}
};
#endif
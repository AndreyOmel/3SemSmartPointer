#pragma once
#include "point.h"
#include <vector>
#include <iostream>
using namespace PointClass;

class Rectangular{
private:
		
		std::shared_ptr<Point>& leftUp;
		std::shared_ptr<Point>& rightDown;
		std::vector<std::shared_ptr<Point>> rectangular_top;
public:
	
	
	Rectangular(std::shared_ptr<Point>& leftUp, std::shared_ptr<Point>& rightDown);

	friend std::ostream& operator<< (std::ostream& out, const Rectangular& rec);
	
};


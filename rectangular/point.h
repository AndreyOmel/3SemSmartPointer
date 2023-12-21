#pragma once
#include<iostream>

namespace PointClass {
	struct Point;
	std::wstring ToString(const Point& point);
	std::wstring ToString(Point* point);
	struct Point {
		Point(const double valueX = 0, const double valueY = 0);
		double x;
		double y;
		friend std::ostream& operator<< (std::ostream& out, const Point& point);
	};
}
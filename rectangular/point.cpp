#include <sstream>
#include"point.h"

using namespace PointClass;

Point::Point(const double valueX ,const double valueY):x(valueX),y(valueY) {
	
	}
std::wstring ToString(Point* point) {
	std::wstringstream buffer;
	buffer << L"{ ";
	buffer << point->x << L" " <<point->y <<  L" }";
	return buffer.str();
	
}
std::wstring PointClass::ToString(const Point& point)
{
	return std::wstring();
}

std::ostream& PointClass::operator<<(std::ostream& out, const Point& point) {
	out << "Point(" << point.x << ", " << point.y << ")";
	return out;
}


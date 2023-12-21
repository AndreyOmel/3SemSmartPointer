#include"rectangular.h"
#include <vector>
#include<sstream>


Rectangular::Rectangular(std::shared_ptr<Point>& leftUp, std::shared_ptr<Point>& rightDown):
	leftUp(leftUp),rightDown(rightDown)
{	
	rectangular_top.push_back(leftUp);
	
	auto rightUp= std::make_shared<Point>(rightDown->x, leftUp->y);

	rectangular_top.push_back(rightUp);
	rectangular_top.push_back(rightDown);

	auto leftDown= std::make_shared<Point>(leftUp->x, rightDown->y );
	rectangular_top.push_back(leftDown);
}
std::ostream& operator<<(std::ostream& out, const Rectangular& rec)
{
	std::string f;
	for (int i = 0; i < rec.rectangular_top.size(); i++) {
		out <<*rec.rectangular_top[i]<< "\n";
	}
	return out;
};
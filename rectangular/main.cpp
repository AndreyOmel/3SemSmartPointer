#include "..\rectangular\rectangular.h"
#include<iostream>
#include<string>
using namespace std;

/*
*\brief Функция считывающая размеры 
*\param message - подсказка для пользователя
*\return Возвращает размеры 
*/
double GetSize(const string& message);


void RecTwoPoints();
enum class creatingrec {
	c_OnePoint,
	c_TwoPoints
};

int main(){
	setlocale(LC_ALL, "rus");
	int input = 0;
	RecTwoPoints();
	return 0;
}


void RecTwoPoints() {
	double PointXU;
	double PointYU;
	double PointXD;
	double PointYD;
	std::cout << "Введите х левой верхней вершины" << "\n";
	std::cin >> PointXU;
	std::cout << "Введите у левой верхней вершины" << "\n";
	std::cin >> PointYU;
	std::cout << "Введите х правой нижней вершины" << "\n";
	std::cin >> PointXD;
	std::cout << "Введите у правой нижней вершины" << "\n";
	std::cin >> PointYD;
	auto PointUp=std::make_shared<Point>(PointXU, PointYU);
	auto pointDown=std::make_shared<Point>(PointXD, PointYD);
	Rectangular rec(PointUp, pointDown);
	cout << rec;
}
double GetSize(const string& message) {
	double size = -1;
	cout << message;
	cin >> size;
	if (size < 0)
	{
		throw out_of_range("Incorrect size");
	}
	return size;
}
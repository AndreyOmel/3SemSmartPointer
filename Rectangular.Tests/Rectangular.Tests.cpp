#include "pch.h"
#include "CppUnitTest.h"
#include"..\rectangular\rectangular.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RectangularTests
{
	TEST_CLASS(RectangularTests)
	{
	public:
		
		TEST_METHOD(Point_Valid_Coordinates_Success)
		{
			// arrange
			Point p = Point(2, 3);

			// act
			double resultX = p.x;
			double resultY = p.y;

			// assert
			Assert::AreEqual(2., resultX);
			Assert::AreEqual(3.,resultY);

		}
		TEST_METHOD(Rectangular_Constructor_First_IsNotNull) {
			//arrange
			auto p = std::make_shared<Point>(2, 3);
			auto p2 = std::make_shared<Point>(4, 5);
			Rectangular rec = Rectangular(p,p2);
			std::stringstream buffer;
			std::string testString;
			//act
			buffer << rec;
			testString = buffer.str();
			//assert
			Assert::IsNotNull(testString.c_str());
		}

		TEST_METHOD(Point_Output_Operator_Overloading_Success) {
			//arrange
			auto p = std::make_shared<Point>(2, 2);
			std::stringstream buffer;
			std::string testString;
			std::string goodString;
			//act
			buffer << *p;
			testString = buffer.str();
			goodString = "Point(2, 2)";
			//assert

			Assert::AreEqual(testString, goodString);
		}
		
		
		TEST_METHOD(Rectangular_Output_Operator_Overloading_Success) {
			//arrange
			auto p = std::make_shared<Point>(2, 2);
			auto p2 = std::make_shared<Point>(3, 4);
			Rectangular rec = Rectangular(p,p2);
			std::stringstream buffer;
			std::string testString;
			std::string goodString;
			//act
			buffer << rec;
			testString = buffer.str();
			goodString = "Point(2, 2)\nPoint(3, 2)\nPoint(3, 4)\nPoint(2, 4)\n";
			//assert

			Assert::AreEqual(testString, goodString);
		}
		//ostream point, 2 конструктора (not null, неправильный ввод)
		
		
	};
}

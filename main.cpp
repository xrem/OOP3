#include <iostream>
#include "Figure.h"
#include "Circle.h"
#include "Square.h"
#include <string>

using namespace std;

// Типы отношений классов

// Композиция << имеет >>
// Агрегация 
// Ассоциация
// Зависимость

int main()
{
	Figure* figure = nullptr;
	string user_input;

	while (true) {
		cout << "Enter figure type: " << endl;
		cin >> user_input;
		if (user_input == "Circle")
		{
			cout << "Enter circle radius: " << endl;
			double radius;
			cin >> radius;
			figure = new Circle(radius);
		}
		else if (user_input == "Square")
		{
			/*
			cout << "Enter square side length: " << endl;
			double length;
			cin >> length;
			*/
			figure = new Square(Point2D(2,0), Point2D(0, 0), Point2D(2, 0), Point2D(2, 2));
		}
		else if (user_input == "exit")
		{
			break;
		}
		else
		{
			cout << "Not supported type" << endl;
		}

		if (figure != nullptr)
		{
			cout << "Perimeter: " << figure->GetP() << endl;
			cout << "   Square: " << figure->GetS() << endl;
			delete figure;
			figure = nullptr;
		}
	}

	return 0;
}
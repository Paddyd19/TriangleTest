// TriangleType.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#define equilateral 0
#define isosceles	1
#define scalene		2

int triangleType;

int side1;
int side2;
int side3;

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "enter side 1" << endl;
	cin >> side1;
	cout << "enter side 2" << endl;
	cin >> side2;
	cout << "enter side 3" << endl;
	cin >> side3;

	
	if(side1 == side2 && side2 == side3)							//check for equilateral
	{
		triangleType = equilateral;
		cout << "Triangle is equilateral" << endl;
	}
	else if (side1 == side2 || side2 == side3 || side3 == side1)	//check for isosceles
	{
		triangleType = isosceles;
		cout << "Triangle is isosceles" << endl;
	}
	else if (side1 != side2 && side2 != side3 && side3 != side1)		//otherwise scalene
	{
		triangleType = scalene;
		cout << "Triangle is scalene" << endl;
	}	

	cout << "Enter any key and press Enter to exit" << endl;
	int temp;
	cin >>temp;
	return 0;
}


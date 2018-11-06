#pragma once
#include<iostream>
#include"Lengths.h"


using namespace std;

class Area :public Lengths
{
private:
	double length;
	double width;
	double heigth;
	double radius;
	

public:
	Area();

	void setLength(double length);
	void setWidth(double width);
	void setHeight(double heigth);
	void setRadius(double radius);

	double getLength();
	double getWidth();
	double getHeight();
	double getRadius();



	const double PI=3.14;
	
	
	 void AreaOfSquare();
	 void AreaOfRectangle();
	 void AreaOfTriangle();
	 void AreaOfCircle();

};
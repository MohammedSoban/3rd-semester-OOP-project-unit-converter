#pragma once
#include<iostream>
#include"Lengths.h"
#include"Area.h"

using namespace std;

Area::Area()
{

}

void Area::setLength(double length)
{
	this->length = length;
}

void Area::setWidth(double width)
{
	this->width = width;
}

void Area::setHeight(double heigth)
{
	this->heigth = heigth;
}

void Area::setRadius(double radius)
{
	this->radius = radius;
}


void Area::AreaOfSquare()
{
	Lengths l1;

	double area;

	char choice;

	area = length*length;
	cout << "Area of Square is "<<area <<" Meters"<< endl;
	cout << endl;
	cout << "Do you want to convert your Area into any other unit? (y/n)" << endl;
	cin >> choice;
	
	if (choice == 'y')
	{
		l1.setMeter(area);
		l1.MeterToMile();
		l1.MeterToKilometer();
		l1.MeterToCentimeter();
		l1.MeterToMilimeter();
		l1.MeterToFeet();
		l1.MeterToInche();
		l1.MeterToYards();
	}
}

void Area::AreaOfRectangle()
{
	Lengths l1;
	double area;

	area = length*width;
	cout << "Area of Rectangle is " << area << " Meters" << endl;
	char choice;
	cout << endl;
	cout << "Do you want to convert your Area into any other unit? (y/n)" << endl;
	cin >> choice;

	if (choice == 'y')
	{
		l1.setMeter(area);
		l1.MeterToMile();
		l1.MeterToKilometer();
		l1.MeterToCentimeter();
		l1.MeterToMilimeter();
		l1.MeterToFeet();
		l1.MeterToInche();
		l1.MeterToYards();
	}


}

void Area::AreaOfTriangle()
{

	Lengths l1;
	double area;

	area = (width*heigth)/2;
	cout << "Area of Triangle is " << area << " Meters" << endl;
	char choice;
	cout << endl;
	cout << "Do you want to convert your Area into any other unit? (y/n)" << endl;
	cin >> choice;

	if (choice == 'y')
	{
		l1.setMeter(area);
		l1.MeterToMile();
		l1.MeterToKilometer();
		l1.MeterToCentimeter();
		l1.MeterToMilimeter();
		l1.MeterToFeet();
		l1.MeterToInche();
		l1.MeterToYards();
	}
}

void Area::AreaOfCircle()
{
	Lengths l1;
	double area;

	area = PI*radius;
	cout << "Area of circle is " << area << " Meters" << endl;
	char choice;
	cout<<endl;
	cout << "Do you want to convert your Area into any other unit? (y/n)" << endl;
	cin >> choice;

	if (choice == 'y')
	{
		l1.setMeter(area);
		l1.MeterToMile();
		l1.MeterToKilometer();
		l1.MeterToCentimeter();
		l1.MeterToMilimeter();
		l1.MeterToFeet();
		l1.MeterToInche();
		l1.MeterToYards();
	}

}
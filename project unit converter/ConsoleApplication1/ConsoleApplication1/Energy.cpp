#include<iostream>
#include"Energy.h"

using namespace std;

Energy::Energy()
{

}
                                     //setters defined
void Energy::setBtu(double Btu)
{
	this->Btu = Btu;
}
void Energy::setCalories(double Calories)
{
	this->calories = Calories;
}
void Energy::setJoule(double joule)
{
	this->joule = joule;
}
                                  //getters defined
double Energy::getBtu()
{
	return Btu;
}
double Energy::getCalories()
{
	return calories;
}
double Energy::getJoules()
{
	return joule;
}

                                 //Btu functions defined

void Energy::BtuToCalories()
{
	double result;

	result = Btu * 0.252164;

	cout << Btu << " BTU=" << result << " Calories" << endl;
}
void Energy::BtuToJoules()
{
	

	double result;

	result = Btu * 1055.05585262;

	cout << Btu << " BTU=" << result << " Joules" << endl;
}

                               //calories functions defined

void Energy::caloriesToBtu()
{

	double result;

	result = calories * 3.96567;

	cout << calories << " Calories=" << result << " BTU" << endl;
}
void Energy::caloriesToJoules()
{

	double result;

	result = calories * 4184;

	cout << calories << " Calories=" << result << " Joules" << endl;
}

                              //joule functions defined

void Energy::joulesToBtu()
{
	double result;

	result = joule * 0.000947817;

	cout << joule << " Joules=" << result << " BTU" << endl;
}
void Energy::joulesToCalories()
{
	double result;

	result = joule * 0.000239006;

	cout << joule << " Joules=" << result << " Calories" << endl;
}

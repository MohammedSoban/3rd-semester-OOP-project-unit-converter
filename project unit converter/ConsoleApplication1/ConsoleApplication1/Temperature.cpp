#include<iostream>
#include"Temperature.h"

using namespace std;

Temperature::Temperature()
{

}
        
                                                //setters defined
void Temperature::setCelsius(double celsius)
{
	this->celsius = celsius;
}
void Temperature::setKelvin(double kelvin)
{
	this->kelvin = kelvin;
}
void Temperature::setFahrenheit(double fahrenheit)
{
	this->fahrenheit = fahrenheit;
}

                                       //getters defined
double Temperature::getCelsius()
{
	return celsius;
}
double Temperature::getKelvin()
{
	return kelvin;
}
double Temperature::getFahrenheit()
{
	return fahrenheit;
}

                                     //celsius functions defined

void Temperature::celsiusTokelvin()
{
	double result;

	result = celsius + 273.15;

	cout << celsius << " Celsius=" << result << " Kelvin" << endl;
}
void Temperature::celsiusToFahrenheit()
{
	double result;

	result = celsius * 1.8 + 32;

	cout << celsius << " Celsius=" << result << " Fahrenheit" << endl;
}

                                   //kelvin functions defined

void Temperature::kelvinTocelsius()
{
	
	double result;

	result = kelvin - 273.15;

	cout << kelvin << " Kelvin=" << result << " Celsius" << endl;
}
void Temperature::kelvinToFahrenheit()
{
	double result;

	result = (kelvin * 9 / 5) - 459.67;

	cout << kelvin << " Kelvin=" << result << " Fahrenheit" << endl;
}


                                   //fahrenheit functions defined

void Temperature::fahrenheitToCelsius()
{
	
	double result;

	result = (fahrenheit - 32) * 5 / 9;

	cout << fahrenheit << " Fahrenheit=" << result << " Celsius" << endl;
}
void Temperature::fahrenheitTokelvin()
{
	double result;

	result = (fahrenheit + 459.67) * 5 / 9;

	cout << fahrenheit << " Fahrenheit=" << result << " Kelvin" << endl;
}
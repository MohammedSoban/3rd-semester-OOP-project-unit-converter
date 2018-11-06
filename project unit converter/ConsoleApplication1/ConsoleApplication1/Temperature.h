#include<iostream>

class Temperature
{
private:

	double celsius;
	double kelvin;
	double fahrenheit;

public:
	Temperature();

	//seters 
	void setCelsius(double celsius);
	void setKelvin(double kelvin);
	void setFahrenheit(double fahrenheit);

	//Getters
	double getCelsius();
	double getKelvin();
	double getFahrenheit();

	//all celsius functions
	void celsiusTokelvin();
	void celsiusToFahrenheit();

	//all kelvin functions
	void kelvinTocelsius();
	void kelvinToFahrenheit();

	//all Fahrenheit functions
	void fahrenheitToCelsius();
	void fahrenheitTokelvin();



};
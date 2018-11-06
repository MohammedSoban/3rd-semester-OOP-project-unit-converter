#pragma once
#include<iostream>
#include"Lengths.h"

using namespace std;


Lengths::Lengths()
{
	
}
/*
Lengths::Lengths(double meter, double mile, double kiloMeter, double centiMeter, double miliMeter, double feet, double inches, double yards)
{
	this->meter = meter;
	this->mile = mile;
	this->kiloMeter = kiloMeter;
	this->centiMeter = centiMeter;
	this->miliMeter = miliMeter;
	this->feet = feet;
	this->inches = inches;
	this->yards = yards;
}
*/


Lengths::Lengths(double meter, double mile)
{
	this->meter = meter;
	this->mile = mile;
}

Lengths::Lengths(double meter)
{
	this->meter = meter;
}
                                                 // all seters defined 
void Lengths::setMeter(double meter)
{
	this->meter = meter;
}
void Lengths::setMile(double mile)
{
	this->mile = mile;
}
void Lengths::setKiloMeter(double KiloMeter)
{
	this->kiloMeter = KiloMeter;
}
void Lengths::setCentiMeter(double CentiMeter)
{
	this->centiMeter = CentiMeter;
}
void Lengths::setMiliMeter(double MiliMeter)
{
	this->miliMeter = MiliMeter;
}
void Lengths::setFeet(double feet)
{
	this->feet = feet;
}
void Lengths::setInches(double inches)
{
	this->inches = inches;
}
void Lengths::setYards(double yards)
{
	this->yards = yards;
}

                                                       //ALL GETTERS DEFIEND
 
double Lengths::getMeter()
{
	return meter;
}
double Lengths::getMile()
{
	return mile;
}
double Lengths::getKiloMeter()
{
	return kiloMeter;
}
double Lengths::getCentiMeter()
{
	return centiMeter;
}
double Lengths::getMiliMeter()
{
	return miliMeter;
}
double Lengths::getFeet()
{
	return feet;
}
double Lengths::getInches()
{
	return inches;
}
double Lengths::getYards()
{
	return yards;
}

                                   //definitions of all meter convertions (1)

void Lengths::MeterToMile()
{
	double result;

	 result= meter/ 1609.344;

	 cout << meter << " Meter=" << result<<" Mile"<<endl;
}
void Lengths::MeterToKilometer()
{
	double result;

	result = meter / 1000.0;

	cout << meter << " Meter=" << result << " Kilometer" << endl;
}
void Lengths::MeterToCentimeter()
{
	double result;
	
	result = meter / 0.010000;

	cout << meter << " Meter=" << result << " CentiMeters" << endl;
}
void Lengths::MeterToMilimeter()
{
	double result;

	result = meter / 0.0010000;

	cout << meter << " Meter=" << result << " MiliMeters" << endl;
}
void Lengths::MeterToFeet()
{
	double result;

	result = meter / 0.3048;

	cout << meter << " Meter=" << result << " Foot" << endl;
}
void Lengths::MeterToInche()
{
	double result;
	 result = meter * 39.370;

	cout << meter << " Meter=" << result << " Inches" << endl;
}
void Lengths::MeterToYards()
{
	double result;

     result = meter * 1.0936;

	cout << meter << " Meter=" << result << " Yards" << endl;
}

                                     //defenition  all mile converstion (2)

void Lengths::MileToMeter()
{
	double result;

	result = mile / 0.00062137;

	cout << mile << " Mile=" << result << " Meter" << endl;
}

void Lengths::MileToKilometer()
{
	double result;

	result = mile / 0.62137;

	cout << mile << " Mile=" << result << " KiloMeter" << endl;

}

void Lengths::MileToCentimeter()
{
	double result;

	result = mile / 0.0000062137;

	cout << mile << " Mile=" << result << " Centimeter" << endl;
}

void Lengths::MileToMilimeter()
{
	double result;

	result = mile / 0.00000062137;

	cout << mile<< " Mile=" << result << " MiliMeter" << endl;
}

void Lengths::MileToFeet()
{
	double result;

	result = mile * 5280.0;

	cout << mile << " Mile=" << result << " Foot" << endl;
}

void Lengths::MileToInche()
{
	double result;

	result = mile * 63360;

	cout << mile << " Mile=" << result << " Inches" << endl;
}

void Lengths::MileToYards()
{
	double result;

	result = mile * 1760.0;

	cout << mile << " Mile=" << result << " Yards" << endl;
}

                                      //defenition  all KiloMeter converstion (3)

void Lengths::kiloMeterToMeter()
{
	double result;

	result = kiloMeter * 1000;

	cout << kiloMeter<< " kiloMeter=" << result << " Meter" << endl;
}

void Lengths::kiloMeterToMile()
{
	double result;

	result = kiloMeter * 0.62137;

	cout << kiloMeter << " kiloMeter=" << result << " Mile"<< endl;
}

void Lengths::kiloMeterToCentimeter()
{
	double result;

	result = kiloMeter * 100000;

	cout << kiloMeter << " kiloMeter=" << result << " CentiMeter" << endl;

}

void Lengths::kiloMeterToMilimeter()
{
	double result;

	result = kiloMeter * 1000000;

	cout << kiloMeter << " kiloMeter=" << result << " MiliMeter" << endl;
}

void Lengths::kiloMeterToFeet()
{
	double result;

	result = kiloMeter * 3280.8;

	cout << kiloMeter << " kiloMeter=" << result << " Foot" << endl;
}
void Lengths::kiloMeterToInche()
{
	double result;

	result = kiloMeter * 39370;

	cout << kiloMeter << " kiloMeter=" << result << " Inches" << endl;
}
void Lengths::kiloMeterToYards()
{
	double result;

	result = kiloMeter*1093.6;

	cout << kiloMeter << " kiloMeter=" << result << " Yards" << endl;
}

                                               //defenition  all CentiMeter converstion (4)

void Lengths::CentiMeterToMeter()
{
	double result;

	result = centiMeter/ 100.00;


	cout << centiMeter << " CentiMeter=" << result << " Meter" << endl;
}
void Lengths::CentiMeterToMile()
{
	double result;

	result = centiMeter * 0.0000062137;

	cout << centiMeter << " CentiMeter=" << result << " Mile" << endl;
}
void Lengths::CentiMeterToKilometer()
{
	double result;

	result = centiMeter / 100000;

	cout << centiMeter << " CentiMeter=" << result << " KiloMeter" << endl;
}
void Lengths::CentiMeterToMilimeter()
{
	double result;

	result = centiMeter / 0.10000;

	cout << centiMeter << " CentiMeter=" << result << " MiliMeter" << endl;
}
void Lengths::CentiMeterToFeet()
{
	double result;

	result = centiMeter*0.032808;

	cout << centiMeter << " CentiMeter=" << result << " Foot" << endl;
}
void Lengths::CentiMeterToInche()
{
	double result;

	result = centiMeter * 0.39370;

	cout << centiMeter << " CentiMeter=" << result << " Inches" << endl;
}
void Lengths::CentiMeterToYards()
{
	double result;

	result = centiMeter*0.010936;

	cout << centiMeter << " CentiMeter=" << result << " Yards" << endl;
}

                                          //defenition  all MiliMeter converstion (5)

void Lengths::MiliMeterToMeter()
{
	double result;

	result = miliMeter / 1000.0;

	cout << miliMeter << " MiliMeterr=" << result << " Meter" << endl;
}
void Lengths::MiliMeterToMile()
{

	double result;

	result = miliMeter *0.00000062137;

	cout << miliMeter << " MiliMeter=" << result << " Mile" << endl;
}
void Lengths::MiliMeterToKilometer()
{

	double result;

	result = miliMeter /1000000;

	cout << miliMeter << " MiliMeter=" << result << " KiloMeter" << endl;
}
void Lengths::MiliMeterToCentiMeter()
{

	double result;

	result = miliMeter / 10.000;

	cout << miliMeter << " MiliMeter=" << result << " CentiMeter" << endl;
}
void Lengths::MiliMeterToFeet()
{

	double result;

	result = miliMeter*0.0032808;

	cout << miliMeter << " MiliMeter=" << result << " Foot" << endl;
}
void Lengths::MiliMeterToInche()
{

	double result;

	result = miliMeter*0.039370;

	cout << miliMeter << " MiliMeter=" << result << " Inches" << endl;
}
void Lengths::MiliMeterToYards()
{

	double result;

	result = miliMeter*0.0010936;

	cout << miliMeter << " MiliMeter=" << result << " Yards" << endl;
}

                                      //defenition  all FOOT converstion (6)

void Lengths::FeetToMeter()
{
	double result;

	result = feet / 3.2808;

	cout << feet<< " Foot=" << result << " Meter" << endl;
}
void Lengths::FeetToMile()
{

	double result;

	result = feet * 0.00018939;

	cout << feet << " Foot=" << result << " Mile" << endl;
}
void Lengths::FeetToKilometer()
{

	double result;

	result = feet / 3280.8;

	cout << feet << " Foot=" << result << " KiloMeter" << endl;
}
void Lengths::FeetToCentiMeter()
{

	double result;

	result = feet / 0.032808;

	cout << feet << " Foot=" << result << " CentiMeter" << endl;
}
void Lengths::FeetToMiliMeter()
{

	double result;

	result = feet / 0.0032808;

	cout << feet << " Foot=" << result << " MiliMeter" << endl;
}
void Lengths::FeetToInche()
{

	double result;

	result = feet * 12.000;

	cout << feet << " Foot=" << result << " Inches" << endl;
}
void Lengths::FeetToYards()
{

	double result;

	result = feet * 0.33333;

	cout << feet << " Foot=" << result << " Yards" << endl;
}

                                              //defenition  all INCHES converstion (7)

void Lengths::InchToMeter()
{
	double result;

	result = inches / 39.370;

	cout << inches << " Inches=" << result << " Meter" << endl;
}
void Lengths::InchToMile()
{
	double result;

	result = inches * 0.000015783;

	cout << inches << " Inches=" << result << " Mile" << endl;
}
void Lengths::InchToKilometer()
{
	double result;

	result = inches / 39370;

	cout << inches << " Inches=" << result << " KiloMeter" << endl;
}
void Lengths::InchToCentiMeter()
{
	double result;

	result = inches / 0.39370;

	cout << inches << " Inches=" << result << " CentiMeter" << endl;
}
void Lengths::InchToMiliMeter()
{
	double result;

	result = inches / 0.039370;

		cout << inches << " Inches=" << result << " MiliMeter" << endl;
}
void Lengths::InchToFeet()
{
	double result;

	result = inches * 0.083333;

	cout << inches << " Inches=" << result << " Foot" << endl;
}
void Lengths::InchToYards()
{
	double result;

	result = inches * 0.027778;

	cout << inches << " Inches=" << result << " Yards" << endl;
}

                                             //defenition  all yards converstion (8)

void Lengths::YardToMeter()
{
	double result;

	result = yards/1.0936;

	cout << yards << " Yards=" << result << " Meter" << endl;
}
void Lengths::YardToMile()
{
	double result;

	result = yards * 0.00056818;

	cout << yards << " Yards=" << result << " Mile" << endl;
}
void Lengths::YardToKilometer()
{
	double result;

	result = yards / 1093.6;

	cout << yards << " Yards=" << result << " KiloMeter" << endl;
}
void Lengths::YardToCentiMeter()
{
	double result;

	result = yards / 0.010936;

	cout << yards << " Yards=" << result << " CentiMeter" << endl;
}
void Lengths::YardToMiliMeter()
{
	double result;

	result = yards / 0.0010936;

	cout << yards << " Yards=" << result << " MiliMeter" << endl;
}
void Lengths::YardToFeet()
{
	double result;

	result = yards * 3.0000;

	cout << yards << " Yards=" << result << " Foot" << endl;
}
void Lengths::YardToInch()
{
	double result;

	result = yards * 36.000;

	cout << yards << " Yards=" << result << " Inches" << endl;
}

                                               //operator overloading

Lengths Lengths::operator+(Lengths l)
{

	Lengths l1;
	Lengths l2;

	 l2.meter=l.getMeter() + l1.getMeter();

	 return l2;

	

}
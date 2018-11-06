#include<iostream>
#include"Time.h"
#include<iomanip>

using namespace std;

Time::Time()
{

}
                                 
                                          //setters defined

void Time::setSeconds(double seconds)
{
	this->seconds = seconds;
}
void Time::setMinutes(double minutes)
{
	this->minutes = minutes;
}
void Time::setHours(double hours)
{
	this->hours = hours;
}
void Time::setDays(double days)
{
	this->days = days;
}

                                         //getters defined

double Time::getSeconds()
{
	return seconds;
}
double Time::getMinutes()
{
	return minutes;
}
double Time::getHours()
{
	return hours;
}
double Time::getDays()
{
	return days;
}

                                           //seconds functions defined

void Time::secondsToMinutes()
{
	double result;

	result = seconds* 0.0166667;

	cout << seconds << " Seconds " << setprecision(2) << result << " Minutes" << endl;

}
void Time::secondsToHours()
{
	double result;

	result = seconds * 0.000277778;

	cout << seconds << " Seconds " << setprecision(2) << result << " Hours" << endl;
}
void Time::secondsToDays()
{
	double result;

	result = seconds* 1.15741e-5;

	cout << seconds << " Seconds " << setprecision(2) << result << " Days" << endl;
}

                                     //minutes functions defined

void Time::minutesToSeconds()
{
	double result;

	result = minutes*60;

	cout << minutes << " Minutes " << setprecision(1) << result << " Seconds" << endl;
}
void Time::minutesToHours()
{

	double result;

	result = minutes * 0.0166667;

	cout << minutes << " Minutes " << setprecision(2) << result << " Hours" << endl;
}
void Time::minutesToDays()
{

	double result;

	result = minutes * 0.000694444;

	cout << minutes << " Minutes " << setprecision(2) << result << " Days" << endl;
}

                                  //hours functions defined

void Time::hoursToSeconds()
{
	double result;

	result = hours * 3600;

	cout << hours << " Hours "  << result << " Seconds" << endl;
}
void Time::hoursToMinutes()
{
	double result;

	result = hours * 60;

	cout << hours << " Hours "  << result << " Minutes" << endl;
}
void Time::hoursToDays()
{
	double result;

	result = hours *0.0416667;

	cout << hours << " Hours "  << result << " Days" << endl;
}

                                     //days functions defined

void Time::daysToSeconds()
{

	double result;

	result = days * 86400;

	cout << days << " Days "  << result << " Seconds" << endl;
}
void Time::daysToMinutes()
{
	double result;

	result = days * 1440;

	cout << days << " Days "  << result << " Minutes" << endl;
}
void Time::daysTOHours()
{
	double result;

	result = days * 24;

	cout << days << " Days "  << result << " Hours" << endl;
}
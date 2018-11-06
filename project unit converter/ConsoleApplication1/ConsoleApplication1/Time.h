#include<iostream>

class Time
{
private:
	double seconds;
	double minutes;
	double hours;
	double days;
	

public:
	Time();

	//setters
	void setSeconds(double seconds);
	void setMinutes(double minutes);
	void setHours(double hours);
	void setDays(double days);

	//getters
	double getSeconds();
	double getMinutes();
	double getHours();
	double getDays();


	//seconds functions
	void secondsToMinutes();
	void secondsToHours();
	void secondsToDays();

	//minutes Functions
	void minutesToSeconds();
	void minutesToHours();
	void minutesToDays();

	//hours Functions
	void hoursToSeconds();
	void hoursToMinutes();
	void hoursToDays();

	//days functions
	void daysToSeconds();
	void daysToMinutes();
	void daysTOHours();

};
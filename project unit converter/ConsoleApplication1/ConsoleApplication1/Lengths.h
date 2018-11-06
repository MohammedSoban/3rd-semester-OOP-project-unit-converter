 #pragma once
#include<iostream>


using namespace std;

class Lengths
{
protected:
	double meter;
	double mile;
	double kiloMeter;
	double centiMeter;
	double miliMeter;
	double feet;
	double inches;
	double yards;

public:
	Lengths();
	//Lengths(double meter, double mile, double kiloMeter, double centiMeter, double miliMeter, double feet, double inches, double yards);
	Lengths(double meter);
	Lengths(double meter, double mile);

	

	//ALL SETTERS
	
	void setMeter(double meter);
	void setMile(double mile);
	void setKiloMeter(double KiloMeter);
	void setCentiMeter(double CentiMeter);
	void setMiliMeter(double MiliMeter);
	void setFeet(double feet);
	void setInches(double inches);
	void setYards(double yards);

    //ALL GETTERS

	double getMeter();
	double getMile();
	double getKiloMeter();
	double getCentiMeter();
	double getMiliMeter();
	double getFeet();
	double getInches();
	double getYards();


	//ALL CONVERTIONS OF METER

	void MeterToMile();
	void MeterToKilometer();
	void MeterToCentimeter();
	void MeterToMilimeter();
	void MeterToFeet();
	void MeterToInche();
	void MeterToYards();
	
	//ALL CONVERTIONS OF MILE

	void MileToMeter();
	void MileToKilometer();
	void MileToCentimeter();
	void MileToMilimeter();
	void MileToFeet();
	void MileToInche();
	void MileToYards();

	//ALL CONVERTIONS OF KILOMETER

	void kiloMeterToMeter();
	void kiloMeterToMile();
	void kiloMeterToCentimeter();
	void kiloMeterToMilimeter();
	void kiloMeterToFeet();
	void kiloMeterToInche();
	void kiloMeterToYards();

	//ALL CONVERTIONS OF  CENTIMETER

	void CentiMeterToMeter();
	void CentiMeterToMile();
	void CentiMeterToKilometer();
	void CentiMeterToMilimeter();
	void CentiMeterToFeet();
	void CentiMeterToInche();
	void CentiMeterToYards();

	//ALL CONVERTIONS OF MILIMETER

	void MiliMeterToMeter();
	void MiliMeterToMile();
	void MiliMeterToKilometer();
	void MiliMeterToCentiMeter();
	void MiliMeterToFeet();
	void MiliMeterToInche();
	void MiliMeterToYards();

	//ALL CONVERTONS OF FEET

	void FeetToMeter();
	void FeetToMile();
	void FeetToKilometer();
	void FeetToCentiMeter();
	void FeetToMiliMeter();
	void FeetToInche();
	void FeetToYards();

	//ALL CONVERTIONS OF INCHES

	void InchToMeter();
	void InchToMile();
	void InchToKilometer();
	void InchToCentiMeter();
	void InchToMiliMeter();
	void InchToFeet();
	void InchToYards();

	//ALL CONVERTIONS OF YARD

	void YardToMeter();
	void YardToMile();
	void YardToKilometer();
	void YardToCentiMeter();
	void YardToMiliMeter();
	void YardToFeet();
	void YardToInch();

	//Operator Overload
	Lengths operator +(Lengths l1);

	//virtual functions
	virtual void AreaOfSquare() {};
	virtual void AreaOfRectangle() {};
	virtual void AreaOfTriangle() {};
	virtual void AreaOfCircle() {};
	
};
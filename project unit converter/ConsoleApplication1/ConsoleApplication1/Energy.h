#include<iostream>

class Energy
{
private:
    double Btu;
	double calories;
	double joule;

public:
	Energy();

	//setter
	void setBtu(double Btu);
	void setCalories(double Calories);
	void setJoule(double joule);

	//getters
	double getBtu();
	double getCalories();
	double getJoules();

	//BTU functions
	void BtuToCalories();
	void BtuToJoules();

	//calories Functions
	void caloriesToBtu();
	void caloriesToJoules();

	//joules functions
	void joulesToBtu();
	void joulesToCalories();
};

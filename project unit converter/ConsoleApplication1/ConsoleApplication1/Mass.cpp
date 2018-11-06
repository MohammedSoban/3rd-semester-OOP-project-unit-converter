#include<iostream>
#include"Mass.h"

using namespace std;

Mass::Mass()
{

}
                                                   //setters
void Mass::setPound(double pound)
{
	this->pound = pound;
}
void Mass::setKiloGram(double kiloGram)
{
	this->kiloGram = kiloGram;
}
void Mass::setGram(double gram)
{
	this->gram = gram;
}
void Mass::setCarat(double carat)
{
	this->carat = carat;
}
void Mass::setTon(double ton)
{
	this->ton = ton;
}


                                        //definition of all pound functions
 
void Mass::PoundToKiloGram()
{
	double result;

	result = pound / 2.2046;

	cout << pound << " Pound=" << result << " Kilogram" << endl;
}
void Mass::PoundToGram()
{
	double result;

	result = pound / 0.0022046;

	cout << pound << " Pound=" << result << " Grams" << endl;
}
void Mass::PoundToCarat()
{
	double result;

	result = pound * 2268.0;

	cout << pound << " Pound=" << result << " Carat" << endl;
	
}
void Mass::PoundToTon()
{
	
	double result;

	result = pound *0.00045359237;

	cout << pound << " Pound=" << result << " Tons" << endl;
}

                                               //definition of all kilogram functions

void Mass::kiloGramToPound()
{
	double result;

	result = kiloGram * 2.2046;

	cout << kiloGram << " Kilogram=" << result << " Pounds" << endl;

}
void Mass::KiloGramToGram()
{
	double result;

	result = kiloGram * 1000;

	cout << kiloGram << " Kilogram=" << result << " Grams" << endl;
}
void Mass::KiloGramToCarat()
{
	double result;

	result = kiloGram * 5000.0;

	cout << kiloGram << " Kilogram=" << result << " Carats" << endl;
}
void Mass::KiloGranToTon()
{
	double result;

	result = kiloGram / 1000;

	cout << kiloGram << " Kilogram=" << result << " Tons" << endl;
}

                                               //definition of all gram functions

void Mass::gramToPound()
{
	double result;

	result = gram  * 0.0022046;

	cout << gram << " Grams=" << result << " Pounds" << endl;
}
void Mass::gramToKiloGram()
{
	double result;

	result = gram  / 1000;

	cout << gram << " Grams=" << result << " Kilograms" << endl;
}
void Mass::gramToCarat()
{
	double result;

	result = gram  * 5;

	cout << gram << " Grams=" << result << " Carats" << endl;
}
void Mass::gramToTon()
{
	double result;

	result = gram / 1000000;

	cout << gram << " Grams=" << result << " Tons" << endl;
	
} 

                                                     //definition of all carat functions

void Mass::caratToPound()
{
	
	double result;

	result = carat * 0.00044092;

	cout << carat << " Carats=" << result << " Pounds" << endl;
}
void Mass::caratToKiloGram()
{
	double result;

	result = carat / 5000.0;

	cout << carat << " Carats=" << result << " Kilogram" << endl;

}
void Mass::caratToGram()
{
	double result;

	result = carat / 5;

	cout << carat << " Carats=" << result << " Gram" << endl;
}


                                                    //definition of all ton functions

void Mass::tonToPound()
{
	double result;

	result = ton * 2000;

	cout << ton << " tons=" << result << " pound" << endl;
}
void Mass::tonToKilogram()
{
	
	double result;

	result = ton *907.185;

	cout << ton << " tons=" << result << " kilograms" << endl;
}
void Mass::tonToGram()
{
	double result;

	result = ton * 907185;

	cout << ton << " tons=" << result << " Grams" << endl;
}
void Mass::tonToCarat()
{
	double result;

	result = ton * 907185;

	cout << ton << " tons=" << result << " Grams" << endl;
}



#include<iostream>
#include"Lengths.h"
#include"Area.h"
#include"Mass.h"
#include"Temperature.h"
#include"Energy.h"
#include"Time.h"
#include"string"
#include<stdlib.h>

using namespace std;

int main()
{



	char choice;
	char outterChoice;

	do
	{

	cout << "******************************WELCOME TO UNIT CONVERTER***********************************" << endl;

	cout << "ENTER 'l' FOR LENGTH CONVERSIONS" << endl;
	cout << "ENTER 'a' FOR AREA OF DIFFERENT SHAPES" << endl;
	cout << "ENTER 'm' FOR MASS CONVESIONS" << endl;
	cout << "ENTER 't' FOR TEMPERATURE CONVERSIONS" << endl;
	cout << "ENTER 'e' FOR ENERGY CONVERSIONS" << endl;
	cout << "ENTER 's' FOR TIME CONVERSIONS" << endl;

	cout << endl;

	cout << "Enter your choice which type of conversion you want to do: " << endl;
	cin >> choice;
	system("cls");



	switch (choice)
	{


	case 'l':
	{
				char cont;

				do
				{
				cout << "Enetr 1 for Meter Conversions" << endl;
				cout << "Enter 2 for Mile Conversions" << endl;
				cout << "Enter 3 for KiloMeter Conversions" << endl;
				cout << "Enter 4 for CentiMeter Conversions" << endl;
				cout << "Enter 5 fot MiliMeter conversions" << endl;
				cout << "Enter 6 for Foot Conversions" << endl;
				cout << "Enter 7 for Inch Conversions" << endl;
				cout << "Enter 8 for Yard Conversions" << endl;
				cout << "Enter 9 for adding 2 lengths" << endl;
				Lengths l;

				int innerChoice;
				cout << endl;
				cout << "Enter your choice:" << endl;
				cin >> innerChoice;
				system("cls");

				while (innerChoice >= 10)
				{
					cout << "Enetr 1 for Meter Conversions" << endl;
					cout << "Enter 2 for Mile Conversions" << endl;
					cout << "Enter 3 for KiloMeter Conversions" << endl;
					cout << "Enter 4 for CentiMeter Conversions" << endl;
					cout << "Enter 5 fot MiliMeter conversions" << endl;
					cout << "Enter 6 for Foot Conversions" << endl;
					cout << "Enter 7 for Inch Conversions" << endl;
					cout << "Enter 8 for Yard Conversions" << endl;
					cout << "Enter 9 for adding 2 lengths" << endl;
					cout << endl;
					cout << "Invalid Choice Try again!:" << endl;
					cin >> innerChoice;
				}

				if (innerChoice == 1)
				{
					double meter;
					cout << "Enter your length to convert" << endl;
					cin >> meter;
					system("cls");
					//meter functions
					l.setMeter(meter);
					l.MeterToMile();
					l.MeterToKilometer();
					l.MeterToCentimeter();
					l.MeterToMilimeter();
					l.MeterToFeet();
					l.MeterToInche();
					l.MeterToYards();
				}



				if (innerChoice == 2)
				{
					double mile;
					cout << "Enter your length to convert" << endl;
					cin >> mile;
					system("cls");
					//mile functions
					l.setMile(mile);
					l.MileToMeter();
					l.MileToKilometer();
					l.MileToCentimeter();
					l.MileToMilimeter();
					l.MileToFeet();
					l.MileToInche();
					l.MileToYards();
				}

				if (innerChoice == 3)
				{
					double KiloMeter;
					cout << "Enter your length to convert" << endl;
					cin >> KiloMeter;
					system("cls");
					//KiloMeter Functions
					l.setKiloMeter(KiloMeter);
					l.kiloMeterToMeter();
					l.kiloMeterToMile();
					l.kiloMeterToCentimeter();
					l.kiloMeterToMilimeter();
					l.kiloMeterToFeet();
					l.kiloMeterToInche();
					l.kiloMeterToYards();
				}


				if (innerChoice == 4)
				{
					double CeintiMeter;
					cout << "Enter your length to convert" << endl;
					cin >> CeintiMeter;
					system("cls");
					//CentiMeter Functions
					l.setCentiMeter(CeintiMeter);
					l.CentiMeterToMeter();
					l.CentiMeterToMile();
					l.CentiMeterToKilometer();
					l.CentiMeterToMilimeter();
					l.CentiMeterToFeet();
					l.CentiMeterToInche();
					l.CentiMeterToYards();
				}




				if (innerChoice == 5)
				{

					double MiliMeter;
					cout << "Enter your length to convert" << endl;
					cin >> MiliMeter;
					system("cls");
					//MiliMeter Functions
					l.setMiliMeter(MiliMeter);
					l.MiliMeterToMeter();
					l.MiliMeterToMile();
					l.MiliMeterToKilometer();
					l.MiliMeterToCentiMeter();
					l.MiliMeterToFeet();
					l.MiliMeterToInche();
					l.MiliMeterToYards();
				}

				if (innerChoice == 6)
				{
					double Feet;
					cout << "Enter your length to convert" << endl;
					cin >> Feet;
					system("cls");

					//FOOT Functions
					l.setFeet(Feet);
					l.FeetToMeter();
					l.FeetToMile();
					l.FeetToKilometer();
					l.FeetToCentiMeter();
					l.FeetToMiliMeter();
					l.FeetToInche();
					l.FeetToYards();
				}
				if (innerChoice == 7)
				{
					double Inches;
					cout << "Enter your length to convert" << endl;
					cin >> Inches;
					system("cls");
					//Inches Functions
					l.setInches(Inches);
					l.InchToMeter();
					l.InchToMile();
					l.InchToKilometer();
					l.InchToCentiMeter();
					l.InchToMiliMeter();
					l.InchToFeet();
					l.InchToYards();
				}

				if (innerChoice == 8)
				{

					double yards;
					cout << "Enter your length to convert" << endl;
					cin >> yards;
					system("cls");
					//Yards Functions
					l.setYards(yards);
					l.YardToMeter();
					l.YardToMile();
					l.YardToKilometer();
					l.YardToCentiMeter();
					l.YardToMiliMeter();
					l.YardToFeet();
					l.YardToInch();
				}

				//opreator oveload
				if (innerChoice == 9)
				{




					double MeterLength1;
					double MeterLength2;

					cout << "Enter first length" << endl;
					cin >> MeterLength1;
					Lengths l(MeterLength1);

					cout << "Enter second length" << endl;
					cin >> MeterLength2;
					Lengths l1(MeterLength2,1);

					Lengths l2;

					l2 = l + l1;



					cout << "The Sum is " << l2.getMeter() << endl;


				}

				cout << endl;
				cout << "Do you want to perfrom more conversions(y/n):" << endl;
				cin >> cont;
				system("cls");
					} while (cont == 'y' || cont == 'Y');



	}

		break;

		case 'a':
		{
					char cont;

					do
					{
					 Area a;

					int innerChoice;
					cout << "Enter 1 for area of Square" << endl;
					cout << "Enter 2 for area of Rectangle" << endl;
					cout << "Enter 3 for area of Triangle" << endl;
					cout << "Enter 4 for area of Circle" << endl;
					cout << endl;

					cout << "Enter your choice" << endl;
					cin >> innerChoice;
					system("cls");

					while (innerChoice >= 5)
					{
						cout << "Enter 1 for area of Square" << endl;
						cout << "Enter 2 for area of Rectangle" << endl;
						cout << "Enter 3 for area of Triangle" << endl;
						cout << "Enter 4 for area of Circle" << endl;
						cout << endl;
						cout << "Invalid choice! try again:" << endl;
						cin >> innerChoice;
					}

					if (innerChoice==1)
					{



						double length;

						cout << "Enter the Length of square in Meters:" << endl;
						cin >> length;
						system("cls");
						a.setLength(length);
						a.AreaOfSquare();
					}
					if (innerChoice==2)
					{


						double length;
						double width;

						cout << "Enter the Length of Rectangle in Meters:" << endl;
						cin >> length;

						cout << "Enter the Width of Rectangle in Meters" << endl;
						cin >> width;
						system("cls");
						a.setLength(length);
						a.setWidth(width);
						a.AreaOfRectangle();
					}
					if (innerChoice==3)
					{




						double width;
						double heigth;


						cout << "Enter the Width of Triangle in Meters:" << endl;
						cin >> width;

						cout << "Enter the heigth of Triangle in Meters:" << endl;
						cin >> heigth;
						system("cls");

						a.setWidth(width);
						a.setHeight(heigth);

						a.AreaOfTriangle();
					}
					if (innerChoice==4)
					{
						double radius;

						cout << "Enter radius of the Circle" << endl;
						cin >> radius;
						system("cls");
						a.setRadius(radius);
						a.AreaOfCircle();

					}

					cout << endl;
					cout << "Do you want to perfrom more conversions(y/n):" << endl;
					cin >> cont;
					system("cls");
					} while (cont == 'y' || cont == 'Y');


		}
			break;

		case 'm':
		{
					char cont;

					do
					{
					 Mass m;
					int innerChoice;

					cout << "Enter 1 for Pound Conversions" << endl;
					cout << "Enter 2 for Kilogram Conversions" << endl;
					cout << "Enter 3 for Gram Conversions" << endl;
					cout << "Enter 4 for Carat Conversions" << endl;
					cout << "Enter 5 for Ton Conversions" << endl;
					cout << endl;
					cout << "Enter your choice:" << endl;
					cin >> innerChoice;
					system("cls");


					while (innerChoice >= 7)
					{
						cout << "Enter 1 for Pound Conversions" << endl;
						cout << "Enter 2 for Kilogram Conversions" << endl;
						cout << "Enter 3 for Gram Conversions" << endl;
						cout << "Enter 4 for Carat Conversions" << endl;
						cout << "Enter 5 for Ton Conversions" << endl;
						cout << endl;
						cout << "Invalid choice! try again:" << endl;
						cin >> innerChoice;
						system("cls");
					}

					if (innerChoice==1)
					{
						double pound;

						cout << "Enter the mass to convert" << endl;
						cin >> pound;
						system("cls");
						cout << endl;
							m.setPound(pound);
							m.PoundToKiloGram();
							m.PoundToGram();
							m.PoundToCarat();
							m.PoundToTon();
					}

					if (innerChoice==2)
					{
						double kilogram;
						cout << "Enter the mass to convert" << endl;
						cin >> kilogram;
						system("cls");
						m.setKiloGram(kilogram);
						m.kiloGramToPound();
						m.KiloGramToGram();
						m.KiloGramToCarat();
						m.KiloGranToTon();

					}

					if (innerChoice==3)
					{
						double gram;
						cout << "Enter the mass to convert" << endl;
						cin >> gram;
						system("cls");
						m.setGram(gram);
						m.gramToPound();
						m.gramToKiloGram();
						m.gramToCarat();
						m.gramToTon();
					}

					if (innerChoice==4)
					{
						double carat;
						cout << "Enter the mass to convert" << endl;
						cin >> carat;
						system("cls");
						m.setCarat(carat);
						m.caratToPound();
						m.caratToKiloGram();
						m.caratToGram();

					}
					if (innerChoice == 5)
					{
						double ton;
						cout << "Enter the mass to convert" << endl;
						cin >> ton;
						system("cls");
						m.setTon(ton);
						m.tonToPound();
						m.tonToKilogram();
						m.tonToGram();
						m.tonToCarat();
					}
					if (innerChoice==6)
					{

					}
					cout << endl;
					cout << "Do you want to perfrom more conversions(y/n):" << endl;
					cin >> cont;
					system("cls");
					} while (cont == 'y' || cont == 'Y');


		}
			break;

		case 't':
		{
					Temperature t;

					int innerChoice;
					char cont;

					do{
						cout << "Enter 1 for Celsius Conversions" << endl;
						cout << "Enter 2 for Kelvin Conversions" << endl;
						cout << "Enter 3 for Fahrenheit Conversions" << endl;

						cout << endl;
						cout << "Enter your choice:" << endl;
						cin >> innerChoice;
						system("cls");

						while (innerChoice >= 4)
						{
							cout << "Enter 1 for Celsius Conversions" << endl;
							cout << "Enter 2 for Kelvin Conversions" << endl;
							cout << "Enter 3 for Fahrenheit Conversions" << endl;
							cout << endl;

							cout << "Invalid choice! try again:" << endl;
							cin >> innerChoice;
						}

						if (innerChoice == 1)
						{
							double celsius;
							cout << "Enter the temperature to convert" << endl;
							cin >> celsius;
							system("cls");
							t.setCelsius(celsius);
							t.celsiusTokelvin();
							t.celsiusToFahrenheit();
						}
						if (innerChoice == 2)
						{
							double kelvin;
							cout << "Enter the temperature to convert" << endl;
							cin >> kelvin;
							system("cls");
							t.setKelvin(kelvin);
							t.kelvinTocelsius();
							t.kelvinToFahrenheit();
						}

						if (innerChoice == 3)
						{
							double fahrenhiet;
							cout << "Enter the temperature to convert" << endl;
							cin >> fahrenhiet;
							system("cls");
							t.setFahrenheit(fahrenhiet);
							t.fahrenheitToCelsius();
							t.fahrenheitTokelvin();
						}

						cout << endl;
						cout << "Do you want to perfrom more conversions(y/n):" << endl;
						cin >> cont;
						system("cls");
					} while (cont == 'y' || cont == 'Y');

		}
			break;

		case 'e':
		{
					char cont;

					do{

						Energy e;
						int innerChoice;

						cout << "Enter 1 for BTU Conversions" << endl;
						cout << "Enter 2 for Calories Conversions" << endl;
						cout << "Enter 3 for Joules Conversions" << endl;
						cout << endl;
						cout << "Enter choice for which unit you want to perform conversion:" << endl;
						cin >> innerChoice;
						system("cls");

						while (innerChoice >= 4)
						{

							cout << "Enter 1 for BTU Conversions" << endl;
							cout << "Enter 2 for Calories Conversions" << endl;
							cout << "Enter 3 for Joules Conversions" << endl;
							cout << endl;
							cout << "Invalid choice! try again:" << endl;
							cin >> innerChoice;
						}

						if (innerChoice == 1)
						{
							double Btu;

							cout << "Enter the energy to convert" << endl;
							cin >> Btu;
							system("cls");
							e.setBtu(Btu);
							e.BtuToCalories();
							e.BtuToJoules();
						}

						if (innerChoice == 2)
						{
							double calories;

							cout << "Enter the energy to convert" << endl;
							cin >> calories;
							system("cls");
							e.setCalories(calories);
							e.caloriesToBtu();
							e.caloriesToJoules();
						}

						if (innerChoice == 3)
						{
							double joule;

							cout << "Enter the energy to convert" << endl;
							cin >> joule;
							system("cls");
							e.setJoule(joule);
							e.joulesToBtu();
							e.joulesToCalories();

						}


						cout << endl;
						cout << "Do you want to perfrom more conversions(y/n):" << endl;
						cin >> cont;
						system("cls");
					} while (cont == 'y' || cont == 'Y');

		}
			break;

		case 's':
		{
					char cont;
					do
					{
						Time ti;

						int innerChoice;

						cout << "Enter 1 for Seconds Conversions" << endl;
						cout << "Enter 2 for Minutes Conversions" << endl;
						cout << "Enter 3 for Hours Conversions" << endl;
						cout << "Enter 4 for Days Conversions" << endl;
						cout << endl;
						cout << "Enter choice for which unit you want to perform conversion:" << endl;
						cin >> innerChoice;
						system("cls");

						while (innerChoice >= 5)
						{
							cout << "Enter 1 for Seconds Conversions" << endl;
							cout << "Enter 2 for Minutes Conversions" << endl;
							cout << "Enter 3 for Hours Conversions" << endl;
							cout << "Enter 4 for Days Conversions" << endl;
							cout << endl;
							cout << "Invalid choice! try again:" << endl;
							cin >> innerChoice;
						}

							if (innerChoice == 1)
							{
								double seconds;
								cout << "Enter the Seconds to convert" << endl;
								cin >> seconds;
								system("cls");
								ti.setSeconds(seconds);
								ti.secondsToMinutes();
								ti.secondsToHours();
								ti.secondsToDays();
							}

							if (innerChoice == 2)
							{
								double minutes;
								cout << "Enter the minutes to convert" << endl;
								cin >> minutes;
								system("cls");
								ti.setMinutes(minutes);
								ti.minutesToSeconds();
								ti.minutesToHours();
								ti.minutesToDays();
							}

							if (innerChoice == 3)
							{
								double hours;
								cout << "Enter the hours to convert" << endl;
								cin >> hours;
								system("cls");
								ti.setHours(hours);
								ti.hoursToSeconds();
								ti.hoursToMinutes();
								ti.hoursToDays();
							}

							if (innerChoice == 4)
							{
								double days;
								cout << "Enter the Days to convert" << endl;
								cin >> days;
								system("cls");
								ti.setDays(days);
								ti.daysToSeconds();
								ti.daysToMinutes();
								ti.daysTOHours();
							}




							cout << endl;
						cout << "Do you want to perfrom more conversions(y/n):" << endl;
						cin >> cont;

					} while (cont == 'y' || cont == 'Y');

		}
			break;

		default:
			cout << "Inavlid choice try again" << endl;
	}

	system("cls");
	cout << endl;
	cout << "Do you want to perform conversion of any other unit(y/n)" << endl;
	cin >> outterChoice;
	system("cls");

	}while (outterChoice == 'y' || outterChoice == 'Y');

	return 0;
}

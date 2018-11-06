#include<iostream>

class Mass
{
private:

 double	pound;
 double kiloGram;
 double gram;
 double carat;
 double ton;
 
 public:

	 Mass();

	 //all setters
	 void setPound(double pound);
	 void setKiloGram(double kiloGram);
	 void setGram(double gram);
	 void setCarat(double carat);
	 void setTon(double ton);

	 //all getters
	 double getPound();
	 double getKiloGram();
	 double getGram();
	 double getCarat();
	 double getTon();

	 //declearing all pound functions 
	 void PoundToKiloGram();
	 void PoundToGram();
	 void PoundToCarat();
	 void PoundToTon();

	 //declrearing all KiloGram FUnctions
	 void kiloGramToPound();
	 void KiloGramToGram();
	 void KiloGramToCarat();
	 void KiloGranToTon();

	 //declearing all gram Functions
	 void gramToPound();
	 void gramToKiloGram();
	 void gramToCarat();
	 void gramToTon();

	 //declearing all carat functions
	 void caratToPound();
	 void caratToKiloGram();
	 void caratToGram();
	

	 //declearing all ton functions
	 void tonToPound();
	 void tonToKilogram();
	 void tonToGram();
	 void tonToCarat();

	 //opreator overload

      

};

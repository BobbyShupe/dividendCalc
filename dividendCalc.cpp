#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{

	int _day, _month, _year;
	time_t now;
	time(&now);
	struct tm *local = localtime(&now);
	_day = local->tm_mday;
	_month = local->tm_mon + 1;
	_year = local->tm_year + 1900;
	printf("%02d/%02d/%d\n",_day,_month,_year);

		/*


	//SPXX
	double shares = 30;
	double cash = 0;
	double dividend = 0;
	double price = 14.58;
	double dividendRate = 0.294;
	double cashForStocksPerWeek = 0;
	unsigned short year = 0;
	unsigned short monthsPerDividend = 3;



	//PRT
	double shares = 846.6116;
	double cash = 7.6;
	double dividend = 0;
	double price = 5.38;
	double dividendRate = 0.0408;
	double cashForStocksPerWeek = 0;
	unsigned short year = 0;
	unsigned short monthsPerDividend = 1;
*/	
	

	// PVL
	printf("Symbol: PVL\n");
	printf("Price: $1.80\n");
	printf("Dividend Rate: 0.035\n");
	printf("Cash per week: $500\n");
	double shares = 10304.216;
	double cash = 0;
	double dividend = 0;
	double price = 1.8;
	double dividendRate = 0.035;
	double cashForStocksPerWeek = 500;
	unsigned short year = 0;
	unsigned short monthsPerDividend = 1;
		/*


		// IGR
	double shares = 323;
	double cash = 0;
	double dividend = 0;
	double price = 5.22;
	double dividendRate = 0.065;
	double cashForStocksPerWeek = 0;
	unsigned short year = 0;
	unsigned short monthsPerDividend = 1;
*/

/*	


     // CIF
     /*
	double shares = 18.3069;
	double cash = 0;
	double dividend = 0;
	double price = 1.71;
	double dividendRate = 0.0145;
	double cashForStocksPerWeek = 55;
	unsigned short year = 0;
	unsigned short monthsPerDividend = 1;
    */
    
     // DHF
/*
	double shares = 19.1874;
	double cash = 0;
	double dividend = 0;
	double price = 2.23;
	double dividendRate = 0.015;
	double cashForStocksPerWeek = 55;
	unsigned short year = 0;
	unsigned short monthsPerDividend = 1;
*/

     // CCIF
/*
	double shares = 20.2759;
	double cash = 0;
	double dividend = 0;
	double price = 7.92;
	double dividendRate = 0.0551;
	double cashForStocksPerWeek = 55;
	unsigned short year = 0;
	unsigned short monthsPerDividend = 1;
*/

/*
     // PFIN

	double shares = 2.0145;
	double cash = 0;
	double dividend = 0;
	double price = 6.88;
	double dividendRate = 0.05;
	double cashForStocksPerWeek = 55;
	unsigned short year = 0;
	unsigned short monthsPerDividend = 3;
*/

/*
     // GROW
	double shares = 3.0129;
	double cash = 0;
	double dividend = 0;
	double price = 3.01;
	double dividendRate = 0.0075;
	double cashForStocksPerWeek = 55;
	unsigned short year = 0;
	unsigned short monthsPerDividend = 1;
*/
    /*
     // FSCO
	double shares = 2.0442;
	double cash = 0;
	double dividend = 0;
	double price = 5.33;
	double dividendRate = 0.0570;
	double cashForStocksPerWeek = 55;
	unsigned short year = 0;
	unsigned short monthsPerDividend = 1;
*/

/*
     // CMU
	double shares = 3.0182;
	double cash = 0;
	double dividend = 0;
	double price = 3.34;
	double dividendRate = 0.0110;
	double cashForStocksPerWeek = 55;
	unsigned short year = 0;
	unsigned short monthsPerDividend = 1;
*/

/*
     // SPE
	double shares = 10.1530;
	double cash = 0;
	double dividend = 0;
	double price = 11.43;
	double dividendRate = 0.0867;
	double cashForStocksPerWeek = 55;
	unsigned short year = 0;
	unsigned short monthsPerDividend = 1;
*/


/*
     // NRT
	double shares = 3.0534;
	double cash = 0;
	double dividend = 0;
	double price = 11.35;
	double dividendRate = 0.21;
	double cashForStocksPerWeek = 55;
	unsigned short year = 0;
	unsigned short monthsPerDividend = 3;
*/

/*
     // QRTEP
	//double shares = 1.0576;
	double shares = 12.0576;
	double cash = 0;
	double dividend = 0;
	double price = 35.44;
	double dividendRate = 2;
	double cashForStocksPerWeek = 55;
    //double cashForStocksPerWeek = 0;
	unsigned short year = 0;
	unsigned short monthsPerDividend = 3;

*/

/*
    // SLYV
	//double shares = 1.0576;
	double shares = 0;
	double cash = 0;
	double dividend = 0;
	double price = 78.64;
	double dividendRate = 0.4464;
	double cashForStocksPerWeek = 55;
    //double cashForStocksPerWeek = 0;
	unsigned short year = 0;
	unsigned short monthsPerDividend = 3;




    // UWMC
	double shares = 2277.3472;
	double cash = 0;
	double dividend = 0;
	double price = 4.87;
	double dividendRate = 0.10;
	double cashForStocksPerWeek = 0;
    //double cashForStocksPerWeek = 0;
	unsigned short year = 0;
	unsigned short monthsPerDividend = 3;


*/

double stockValue = 0;

	for (int i  = 0; i < (10); i ++)
	{
    	for (int ii = 0; ii < 12 / monthsPerDividend; ii ++)
    	{
    		cash = dividend + cashForStocksPerWeek * monthsPerDividend;
	    	shares +=  cash / price;
    		dividend = shares * dividendRate;
    		stockValue = shares * price;
	    	printf("shares: %.4lf Stock Value: $%.4lf dividend: $%.4lf\n", shares, stockValue, dividend);
    	}
    	year ++;
    	printf("Year: %d\n", year);
	}
	
		for (int i  = 0; i < (10); i ++)
	{
    	for (int ii = 0; ii < 12 / monthsPerDividend; ii ++)
    	{
    		cash = dividend + cashForStocksPerWeek * 3;
	    	shares +=  cash / price;
    		dividend = shares * dividendRate;
    		stockValue = shares * price;
	    	printf("shares: %.4lf Stock Value: $%.4lf dividend: $%.4lf\n", shares, stockValue, dividend);

    	}
    	year ++;
    	printf("Year: %d\n", year);
	}
	printf("After twenty years\n");
		for (int i  = 0; i < (10); i ++)
	{
    	for (int ii = 0; ii < 12 / monthsPerDividend; ii ++)
    	{
    		cash = dividend + cashForStocksPerWeek * 3;
	    	shares +=  cash / price;
    		dividend = shares * dividendRate;
    		stockValue = shares * price;
	    	printf("shares: %.4lf Stock Value: $%.4lf dividend: $%.4lf\n", shares, stockValue, dividend);

    	}
    	year ++;
    	printf("Year: %d\n", year);
	}
	printf("After thirty years\n");
	for (int i  = 0; i < (10); i ++)
	{
    	for (int ii = 0; ii < 12 /monthsPerDividend; ii ++)
    	{
    		cash = dividend + cashForStocksPerWeek * 3;
	    	shares +=  cash / price;
    		dividend = shares * dividendRate;
    		stockValue = shares * price;
	    	printf("shares: %.4lf Stock Value: $%.4lf dividend: $%.4lf\n", shares, stockValue, dividend);

    	}
    	year ++;
    	printf("Year: %d\n", year);
	}
	printf("After fourty years\n");
	for (int i  = 0; i < (10); i ++)
	{
    	for (int ii = 0; ii <12 / monthsPerDividend; ii ++)
    	{
    		cash = dividend + cashForStocksPerWeek * 3;
	    	shares +=  cash / price;
    		dividend = shares * dividendRate;
    		stockValue = shares * price;
	    	printf("shares: %.4lf Stock Value: $%.4lf dividend: $%.4lf\n", shares, stockValue, dividend);

    	}
    	year ++;
    	printf("Year: %d\n", year);
	}
	printf("After fifty years\n");
	return 0;
}

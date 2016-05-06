//tempConversion.c

/******************************************************************************/

#include<stdio.h>

/******************************************************************************/
/* DOCUMENTATION */

/* PROGRAMMER:  Miguel Herrnsdorf  */

/* DESCRIPTION: Program that prints a Temperature conversion table.  User is 
   asked to enter a number between 1 and 9 that will be use as a increasing 
   factor for the temperature table going from -20 to +280 degrees. */

/* SPECIFICATIONS: Write an algorithm and program to generate a temperature 
   conversion chart. Table temperature (Fahrenheit and Celsius) values will 
   range from -20.0 to +280.0, floating point values with one position of 
   precision and output table entry step to be specified by user input. */

/* The program will accept and validate user int input.
   The program will format the Temperature conversion table output. */

/* COMPILATION: gcc -temConversion.c -o temConversion.out */

/* EXECUTE: ./temConversion.out */

/* 
  CERTIFICATION: I hereby certify that this collective work is my own and none 
                 of it is the work of any other person or entity.
                    Luis Herrnsdorf
*/

/* pseudo code */

/******************************************************************************/

#define NOERRORS 0  /* no errors found */

/******************************************************************************/

double fahrToCel (int);
double celToFahr (int);

/******************************************************************************/

int main()
{
    double temperature = -20; // used for minimum temperature value
    int steps = 0;            // used to hold user input

    printf("%s\n", "Temperature table in Fahrenheits and Celsius");
    printf("%s\n", "Please enter a number between 1 and 9");
    steps = getchar();
    steps = steps - '0'; // convert from ASCII to decimal value

    if (steps > 0 && steps < 10){
    	printf("\t%s \t%s \t%s \t%s\n", "Fahrenheit", "Celsius", "Celsius", 
               "Fahrenheit");
    	printf("\t%s", "---------------------------------------------------");
        printf("%s\n", "-------");

    	for( ; temperature <= 280; temperature += steps){
        	printf("\t%8.1f %13.1f %15.1f %17.1f\n", temperature, 
                   fahrToCel(temperature), temperature, celToFahr(temperature));
    	}
    } else {
    	printf("%s\n", "Your entry was not valid.");
    }
    
    return NOERRORS;
}

/******************************************************************************/

/*
* Function: celToFahr
* -------------------
* converts Celsius to Fahrenheit using: fahr = (celsius * 1.8 + 32)
*
* celsius: temperature value to be converted
*
* returns: Fahrenheit equivalent of the Celsius entered
*/
double celToFahr (int celsius)
{
	return (celsius * 1.8 + 32);
}

/******************************************************************************/

/*
* Function: fahrToCel
* -------------------
* converts Fahrenheit to Celsius using: celsius = ((fahr - 32) * (5.0 / 9.0))
*
* fahr: temperature value to be converted
*
* returns: Celsius equivalent of the Fahrenheit entered
*/
double fahrToCel (int fahr)
{
	return ((fahr - 32) * (5.0 / 9.0));	
}

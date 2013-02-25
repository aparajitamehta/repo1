UNKNOWN //************************************** 
// Name: Cubic Equation Root finder // Description:Finds the root of a standard cubic equation // By: awkwardusername // // // Inputs:None // // Returns:None // //Assumes:None // //Side Effects:None //This code is copyrighted and has limited warranties. //Please see http://www.Planet-Source-Code.com/xq/ASP/txtCodeId.13596/lngWId.3/qx/vb/scripts/ShowCode.htm //for details. //************************************** // CubicRootII.c // // Mark Jayson B. Fuentes <markjayson.fuentes@pup.edu.ph< // BSCS 2-3 // // Polytechnic University of the Philippines // College of Computer Management and Information Technology // // 02.07.2011 18:28:54 || Taipei Standard Time // // This program tries to find the root of a standard cubic equation, // Ax^3 + Bx^2 + Cx + D = 0, in an interval specified by the user. // Given a fractional coefficient, the program will not find the roots // except for special cases wherein, the resultant (expected) roots // are a half (negative or positive) of one. //
#include <stdio.h< 
#include <math.h>; 
#include <stdlib.h>
#define TOLERANCE 0.00001 
#define INV_TOLERANCE 10000.0
int rootSearch(double, double, double, double, double, double);
double tolerance(double); void runAgain(void); 
double truncate(double); 
int main() { 
	double a, b, c, d; 
	double rootfloor, rootceil;
	printf("This program will compute the roots of a cubic equation in the form:\n"); 
	puts("Ax^3 + Bx^2 + Cx + D = 0"); 
	printf("--------------------------------------------------------------------\n"); 
	printf("Input the coefficients A, B, C, and the constant D separated by a space:\n");
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d); 
	printf("rootSearch Lower limit: "); 
	scanf("%lf", &rootfloor); 
	printf("rootSearch Upper limit: "); 
	scanf("%lf", &rootceil);
	rootSearch(a, b, c, d, rootfloor, rootceil);
	runAgain();
	return 0; 
} 
int rootSearch(double a, double b, double c, double d, double rootfloor, double rootceil) 
{
	static double midpoint;
	double x; 
	double roots[3] = {0, 0, 0}; 
	int j = 0, k = 0; 
	midpoint = (rootceil + rootfloor) / 2.0;
	x = midpoint;
	if( tolerance(a * pow(x, 3) + b * pow(x, 2) + c * x + d) < TOLERANCE ) 
		roots[0] = x;
	x = rootfloor; 
	do { 
		if( tolerance(a * pow(x, 3) + b * pow(x, 2) + c * x + d) < TOLERANCE )
		{
			roots[j] = x; 
			j++;
		} 
		x += TOLERANCE; 
	}
	while(x <= midpoint);
	x = rootceil; 
	do { if( tolerance(a * pow(x, 3) + b * pow(x, 2) + c * x + d) < TOLERANCE )
		{
			roots[j] = x;
			j++;
		} 
		x -= TOLERANCE; 
	}
	while(midpoint <= x); 
	if(roots[0] == 0 && roots[1] == 0 && roots[2] == 0)
	{ printf("Roots not found between %.0f and %.0f. Please try again\n", rootfloor, rootceil); } 
	else {
		printf("The roots of the equation (%.2fx^3) + (%.2fx^2) + (%.2fx) + (%.2f) = 0 is/are \n", a, b, c, d);
		for(k = 0; k < j; k++) 
			printf("%.4f ", roots[k]); 
	} 
	return 0; 
}
double tolerance(double eqn_root) 
{
	return TOLERANCE < fabs(truncate(eqn_root));
}
double truncate(double conver)
{
	conver = conver * INV_TOLERANCE; 
	conver = (conver < (floor(conver)+0.5f)) ? ceil(conver) : floor(conver);
	conver = conver / INV_TOLERANCE; 
	return conver;
} 
void runAgain(void) 
{
	char input = 0; 
	printf("\n\nDo you want to run the program again?\n"); 
	while( (input = getchar()) )
	{ 
		switch(input) { case 'n': case 'N': printf("Good Day!"); 
			exit(0); 
			break;
			case 'y': case 'Y': main(); 
					    break; 
			default: printf("Valid input is only 'Y' or 'N'.\n");
				 break;
		}
	}
}


/* chapter 4 exercise 4 - program to convert faranheit to celcius
 * rajkumar kandasamy
 * august 25, 2014
 */
#include<stdio.h>

int main()
{
	float C;
	float F;
	
	F = 27;
	C = (F - 32) / 1.8;
	printf("%f degree faranheit = %f degree celcious", F, C);

	return 0;
}
	
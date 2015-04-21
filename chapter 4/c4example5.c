/* integer to float conversion and vice versa
 * author : rajkumar kandasamy
 * august 25, 2014
 */
 
#include<stdio.h>

int main()
{
	float f1=123.125;
	float f2;
	int i1;
	int i2 = -150;
	char c = 'a';
	
	i1 = f1;
	printf("%f assigned to an int produces %i\n", f1, i1);
	f1 = i2;
	printf("%i assigned to an int produces %f\n", i2, f1);
	f1 = i2 / 100;
	printf("%i divided by 100 produces %f\n", i2, f1);
	f2 = i2 / 100.0;
	printf("%i divided by 100.0 produces %f\n", i2, f2);
	f2 = (float) i2 / 100;
	printf("(float) %i divided by 100 produces %f\n", i2, f2);
	
	return 0;
}
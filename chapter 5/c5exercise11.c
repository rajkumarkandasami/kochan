/* chapter 5 example 11 sum of the digits of a number
 * rajkumar kandasamy
 */

#include<stdio.h>
int main()
{
	int number;
	int	digit;
	int sum = 0;
	
	printf("Enter your number.");
	scanf("%i", &number);
	do{
	digit = number % 10; 
	sum = sum + digit; 
	number = number / 10;
	}while( number != 0 );
	printf("\n the sum of their digits is : %d", sum);
	
	getch();
	return 0;
}

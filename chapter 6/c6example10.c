/* chapter 6 example 10 table of prime numbers
 * rajkumar kandasamy 15.09.14
 */
#include<stdio.h>

int main()
{
	int p;
	int d;
	_Bool isPrime;
	
	for(p = 2; p <= 50; ++p) 
	{
		isPrime = 1;
		for (d = 2; d < p; ++d)
		if (p % d == 0)
		isPrime = 0;
		if(isPrime != 0)
		printf("	%i\n ", p);
	}
	printf ("\n");
	
	getch();
	return 0;
}

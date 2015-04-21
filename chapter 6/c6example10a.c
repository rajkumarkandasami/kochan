/* chapter 6 example 10 -a another program for table of prime numbers
 * rajkumar kandasamy 15.09.14
 */
#include<stdio.h>
#include<stdbool.h>

int main()
{
	int p;
	int d;
	bool isPrime;
	
	for(p = 2; p <= 50; ++p)
	 {
		isPrime = true;
		for ( d = 2; d < p; ++d )
		if ( p % d == 0 )
		isPrime = false;	
		if ( isPrime != false )
		printf ("%i ", p);
	}
	printf ("\n");
	
	return 0;
	return 0;
}

/* chapter 7 example 3 fibonacci series
 * rajkumar kandasamy , 16.09.14 
 */

#include<stdio.h>

int main()
{
	int fib[15];
	int i;

	fib[0] = 0;
	fib[1] = 1;
	for(i=2; i<15; ++i) {
		fib[i] = fib[i-2] + fib[i-1];
	}
	printf("first fifteen Fibnacci Serious is:");
	for(i=0; i<15; ++i) {
		printf(" %i\n",fib[i]);
	}
	
	getch();
	return 0;
}



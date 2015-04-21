/* chapter 7 example 1 Array
 * rajkumar kandasamy , 16.09.14 
 */

#include<stdio.h>

int main()
{
	int  v[5];
	int  i;

	v[0] = 10;
	v[1] = 200;
	v[2] = -50;
	v[3] = v[0] + v[2]; 
	v[4] = 5.4;

	for (i = 0; i < 5;  i++) {
		printf("v[%i] = %i\n", i, v[i]); 
	}
	
	getch();
	return 0;
}


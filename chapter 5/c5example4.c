/* chapter 5 example 4 calculating triangular number
 * rajkumar kandasamy
 */

#include <stdio.h>

int main (void)
{
	int n;
	int num;
	int triangNum;
	
	printf("What triangular number do you want? ");
	scanf ("%i", &num);
	triangNum = 0;
	for (n = 1;n <= num;++n ) 
	triangNum += n;
	printf("\nTriangular number %i is %i", num, triangNum);
	
	getch();
	return 0;
}

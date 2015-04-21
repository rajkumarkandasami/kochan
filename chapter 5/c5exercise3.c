/* chapter 5 exercise 3 calculating triangular number between 5 and 50
 * rajkumar kandasamy
 */

#include <stdio.h>

int main()
{
	int i;
	int triangularNumber;
	
	for( i = 0; i <= 50; i++)
    {
         if( i % 5 == 0)
         {
             triangularNumber = i * (i + 1) / 2;
             printf(" triangular number of %d is %d\n", i, triangularNumber);
             } 
         }       
	getch();
	return 0;
}

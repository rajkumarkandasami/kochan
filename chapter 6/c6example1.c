/* chapter 6 example 1 program to calculate absolute value of an integer
 * rajkumar kandasamy 
 */

#include<stdio.h>

int main()
{
    int i;
    
    printf("Enter an integer :\n");
    scanf("%d", &i);
    if(i < 0)
    {
         i = -i;
         }
         printf("\nThe absolute value of integer is : %d", i);
    
    getch();
    return 0;
    }

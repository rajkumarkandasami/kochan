/* chapter 5 exercise 2 print table of n and n square values
 * rajkumar kandasamy
 */
 
#include<stdio.h>

int main()
{
    int i;
    
    printf(" n   n-square ");
    for(i=0; i<10; i++)
    {
             printf("\n %d    %d", i+1, (i+1)*(i+1));
             }
             
             getchar();
             return 0;
}

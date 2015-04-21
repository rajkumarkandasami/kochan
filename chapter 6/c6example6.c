/* chapter 6 example 6 pgm to determine sign of integer
 * rajkumar kandasamy 10.09.14
 */ 
 
#include<stdio.h>

int main()
{
    int n;
    int s;
    
    printf("enter number : ");
    scanf("%i", &n);
    if(n < 0)
         {
         s = -1;
    }
    else if(n == 0)
         {
         s = 0;
    }
    else
        { 
        s = 1;
    }
    printf("sign = %i\n", s);
    
    getch();
    return 0;
}

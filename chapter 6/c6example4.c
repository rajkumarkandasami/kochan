/* chapter 6v example 4 odd or even version 1.1
 * rajkumar kandasamy 10.09.14
 */ 
 
#include<stdio.h>

int main()
{
    int n;
    int r;
    printf("Enter number : ");
    scanf("%i", &n);
    r = n % 2;
    if(r == 0)
    {
    printf("even");
    }
    else
    {
    printf("odd");
    }
    
    getch();
    return 0;
}

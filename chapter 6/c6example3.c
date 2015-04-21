/* chapter 6 example 3 odd or even
 * rajkumar kandasamy 10.09.14
 */ 

#include<stdio.h>

int main()
{
    int n;
    int r;
    
    printf("Enter the number : ");
    scanf("%i", &n);
    r = n % 2;
    if(r == 0)
    printf("\n even");
    if(r != 0)
    printf ("\n odd");
    
    getch();
    return 0;
}

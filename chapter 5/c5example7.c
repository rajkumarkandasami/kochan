/* chapter 5 example 7 GCD
 * rajkumar kandasamy aug 29 2014
 */

#include<stdio.h>

int main()
{
    int u;
    int v;
    int t;
    
    printf("enter two integers :");
    scanf("%i %i", &u, &v);
    while( v != 0 )
    {
    t = u % v;
    u = v;
    v = t;
    }
    printf("\nTheir GCD is %i", u);
    
    getch();
    return 0;
}

/* chapter 5 example 2 calculating the 200th triangular number 
 * rajkumar kandasamy
 */
 
#include <stdio.h>

int main()
{
    int n;
    int t;
    
    t = 0;
    for (n = 1;n <= 200;n = n + 1) 
    t = t + n;
    printf ("The 200th triangular number is %i", t);
    
    getch();
    return 0;
}

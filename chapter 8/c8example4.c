/* chapter 8 example 4 n'th triangular number 
 *  rajkumar kandasamy 09.10.14
 */

#include<stdio.h>

int main()
{
    void calTri(int);
    
    calTri(10);
    calTri(20);
    calTri(50);

    getch();
    return 0;
}

void calTri(int n)
{
     int i;
     int tri = 0;

     for ( i = 1; i <= n; ++i )
     tri += i;
     printf ("Triangular number %i is %i\n", n, tri);
}


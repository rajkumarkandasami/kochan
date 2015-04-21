/* triangular number using nested for loops
 * rajkumar kandasamy aug 
 */
#include<stdio.h>

int main()
{
    int i;
    int j;
    int k;
    int m;
    int n;
    printf("enter number of testcases:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    k=0;
                    printf("\n\nenter triangular number you want:");
                    scanf("%d",&m);
                    for(j=1;j<=m;j++)
                    {
                                     k+=j;
                    }
                    printf("\n\ntriangular number for %d is : %d", m, k);
    }
    getchar();
    getchar();
    return 0;
}

/* chapter 6 example 5 check leap year 
 * rajkumar kandasamy 11.09.14
 */
 
#include<stdio.h>

int main()
{
    int y;
    int a;
    int b;
    int c;
    printf("Enter year : ");
    scanf("%i", &y);

    a = y % 4;
    b = y % 100;
    c = y % 400;
    if((a == 0 && b != 0) || c == 0) 
    printf("leap year\n");
    else
    printf("not leap year\n");
    
    getch();
    return 0;
}

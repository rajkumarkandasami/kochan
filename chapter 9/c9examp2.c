/* chapter 9 example 1 book pgm to display tomoro date
 * rajkumar kandasamy 21/09/14
 */
#include<stdio.h>
int main()
{
    struct date
    {
           int month;
           int day;
           int year;
    };
    
    struct date tu, tomor;
    const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    
    printf("enter today date (mm dd yyyy): ");
    scanf("%i%i%i", &tu.month, &tu.day, &tu.year);
    if(tu.day != daysPerMonth[tu.month - 1] ) {
         tomor.day = tu.day + 1;
         tomor.month = tu.month;
         tomor.year = tu.year;
         }
    else if( tu.month == 12 ) { 
         tomor.day = 1;
         tomor.month = 1;
         tomor.year = tu.year + 1;
         }
    else{ 
         tomor.day = 1;
         tomor.month = tu.month + 1;
         tomor.year = tu.year;
         }
    printf("tomoro date is %i/%i/%.2i.\n", tomor.month,
    tomor.day, tomor.year % 100);
    
    getch();
    return 0;
}


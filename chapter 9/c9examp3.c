/* chapter 9 example 3 structures
 * rajkumar kandasamy , 08.10.14 
 */

#include <stdio.h>
         
int main()
    {
    struct date{
           int date;
           int month;
           int year;
           };
    
    struct date today;
    
    today.date=8;
    today.month=10;
    today.year=2014;
    
    printf("today date is : %d-%d-%d\n", today.date, today.month, today.year);
    getch();
    return 0;
}

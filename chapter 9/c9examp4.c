/* chapter 9 example 4 date of tomoro 
 * rajkumar kandasamy 10.10.14
 */
 
#include<stdio.h>
#include<stdbool.h>

struct date
{
       int mon;
       int day;
       int yr;
};

struct date dateUpdate(struct date today)
{
       struct date tomoro;
       int noOfDays(struct date d);
       if(today.day!=numberOfDays(today)) {
       tomoro.day = today.day + 1;
       tomoro.mon = today.mon;
       tomoro.yr = today.yr;
       }
       else if(today.mon==12) { 
       tomoro.day=1;
       tomoro.mon=1;
       tomoro.yr=today.yr+1;
       }
       else {
       tomoro.day=1;
       tomoro.mon=today.mon + 1;
       tomoro.yr=today.yr;
       }
       return tomoro;
}
 
int noOfDays(struct date d)
{
    int days;
    bool isLeap(struct date d);
    const int daysPermon[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(isLeap&&d.mon==2)
    days=29;
    else
    days=daysPermon[d.mon - 1];
    return days;
}
 
bool isLeap(struct date d)
{
     bool leapyrFlag;
     if ((d.yr%4==0&&d.yr%100!=0)||d.yr%400==0)
     leapyrFlag=1;
     else
     leapyrFlag=0; 
     return leapyrFlag;
}
int main (void)
{
    struct date dateUpdate (struct date today);
    struct date thisDay,nextDay;
    printf ("enter today date (mm dd yyyy):");
    scanf ("%i%i%i", &thisDay.mon, &thisDay.day,
    &thisDay.yr);
    nextDay=dateUpdate(thisDay);
    printf("tomorrow %i/%i/%.2i.\n",nextDay.mon,
    nextDay.day,nextDay.yr%100);
    
    getch();
    return 0;
}

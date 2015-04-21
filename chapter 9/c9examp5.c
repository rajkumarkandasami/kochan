/* chapter 9 example 5 update the time by one second 
 * rajkumar kandasamy 10.10.14
 */
 
#include <stdio.h>

struct time
{
       int hr;
       int min;
       int sec;
};

int main()
{
    struct time timeUpdate(struct time now);
    struct time now,next;
    printf("Enter the time (hh:mm:ss): ");
    scanf("%i:%i:%i",&now.hr,&now.min,&now.sec);
    next=timeUpdate(now);
    printf("Updated time is %.2i:%.2i:%.2i\n",next.hr,next.min,next.sec );
    
    getch();
    return 0;
}

struct time timeUpdate(struct time now)
{
       ++now.sec;
       if(now.sec==60){ 
       now.sec=0;
       ++now.min;
       if(now.min==60){
       now.min=0;
       ++now.hr;
       if(now.hr==24)
       now.hr=0; 
       }
       }
       return now;
}

#include<stdio.h>
int main()
{
    struct name
    {
           char first_name[]="raji";
           char last_name[20];
    };
    
    struct name myname;
    myname.first_name = "rajkumar";
    myname.last_name = "kandasamy";
    
    printf("full name = : %s %s",myname.first_name,myname.last_name);
    
    getch();
    return 0;
}
    

#include<stdio.h>

int main()
{
    int gsec;
    int sec;
    int gmin;
    int min;
    int hr;
    
    printf(" enter time in seconds :");
    scanf("%d",&gsec);
    gmin = gsec / 60;
    sec = gsec % 60;
    hr = gmin / 60;
    min = gmin % 60;
    printf(" hr : mi : se");
    printf("\n %d  : %d : %d", hr,min,sec);
    getchar();
    getchar();
     
    return 0;
}


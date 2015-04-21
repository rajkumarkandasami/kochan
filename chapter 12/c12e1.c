#include<stdio.h>
int main()
{
    int a=077u,b=0150u,c=0210u;
    printf("%o",a&b);
    printf("\n%o",a&a);
    printf("\n%o",a&b&c);
    printf("\n%o",a&1);
    
    getch();
    return 0;
} 

#include<stdio.h>
int main()
{
    unsigned int a=0525u,b=0707u,c=0122u;
    printf("\n %o     %o     %o",a&b,a|b,a^b);
    printf("\n %o     %o     %o",~a,~b,~c);
    printf("\n %o     %o     %o",a^a,a&~b,a|b|c);
    printf("\n %o     %o",a|b&c,a|b&~c);
    printf("\n %o     %o",~(~a&~b),~(~a|~b));
    a^=b;
    b^=a;
    a^=b;
    printf("\n %o     %o",a,b);

    getch();
    return 0;
} 

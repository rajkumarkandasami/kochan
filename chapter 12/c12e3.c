#include<stdio.h>
int main()
{
    unsigned int a=0177777u,b=0444u;
    int shift(int,int);
    
    printf("a<<5=%o\n",shift(a,5));
    printf("a>>6=%o\n",shift(a,-6));
    printf("b<<0=%o\n",shift(b,0));
    printf("a>>3<<3=%o\n",shift(shift(a,-3),3));
    printf("a>>3<<3=%o\n",a>>3<<3);
    printf("a<<3>>3=%o\n",shift(shift(a,3),-3));
    printf("a<<3>>3=%o",a<<3>>3);
    getch();
    return 0;
}
    
int shift(int a,int b){
    if(b>=0){
             a=a<<b;
             }
    else
             {
             a=a>>-b;
             }
    return a;
}

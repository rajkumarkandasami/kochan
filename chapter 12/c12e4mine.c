#include<stdio.h>
int main()
{
    int a=0xabcdef00;
    int rotate(int,int);
    
    printf("a=%x, rotated a =%x",a,rotate(a,24));
    
    getch();
    return 0;
}

int rotate(int a,int b)
{
    int temp;
    if(b>0)
    {
           b=b%32;
           }
    else
    {
        b=-(-b%32);
        }
    
    if(b==0)
    {
            return a;
            }
    else if(b>0)
    {
         temp=a>>(32-b);
         a=a<<b|temp;
         return a;
         }
    else
    {
         b=-b;
         temp=a>>(32-b);
         a=a<<b|temp;
         return a;
         }
}

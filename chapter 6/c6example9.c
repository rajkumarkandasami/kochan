/* chapter 6 example 9 evaluating arithmetic expression
 * rajkumar kandasamy 11.09.14
 */
 
#include<stdio.h>

int main()
{
    float a;
    float b;
    char c;
    
    printf(" entr expression : ");
    scanf("%f %c %f", &a, &c, &b);
    
    switch(c)
    {
    case '+' :
         printf("a + b = %.2f", a + b);
         break;
     
    case '-' :
         printf("a - b = %.2f", a - b);
         break;
    
    case '*' :
         printf("a * b = %.2f", a * b);
         break;
    
    case '/' :
         if(b == 0)
         {
              printf("not able to divide. since b=0");
              }
         else
         printf("a / b = %.2f", a / b);
         break;
    }

    getch();
    return 0;
}

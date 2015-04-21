/* chapter 6 example 8 evaluating arithmetic expression
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
    
    if(c == '+')
    {
         printf("a + b = %.2f", a + b);
    }
    else 
    if(c == '-')
    {
         printf("a - b = %.2f", a - b);
    }
    else
    if(c == '*')
    {
         printf("a * b = %.2f", a * b);
    }
    else
    if(c == '/')
    {
         printf("a / b = %.2f", a / b);
    }
    
    
    getch();
    return 0;
}


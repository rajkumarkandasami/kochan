/* chapter 6 example 7 categorizing a charector entered at terminal
 * rajkumar kandasamy 10.09.14
 */
 
#include<stdio.h>

int main()
{
    char c;
    
    printf(" enter char : ");
    scanf("%c", &c);
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
          {
          printf("\n enterd char is alpha numeric ");
    }
    else if(c >= '0' && c <= '9')
         {
         printf("\n enterd char is number ");
    }
    else
        {
        printf("\n enterd char is special char");
    }

    getch();
    return 0;
}

          

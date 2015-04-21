/* chapter 10 example 3 char in c
 * rajkumar kandasamy 11.10.14
 */
 
#include<stdio.h>

int main()
{
     int strLen(char string[]);
     char w1[]={'r','a','j'};
     char w2[]={'k','u','m','a','r'};
     
     printf("%d    %d",strLen(w1),strLen(w2));
     
     getch();
     return 0;
}

int strLen(char string[])
{
    int i=0,count=0;
    while(string[i]!='\0'){
                           count++;
                           i++;
                           }
    return count;
}


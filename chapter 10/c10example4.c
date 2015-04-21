/* chapter 10 example 4 string comparison
 * rajkumar kandasamy 11.10.14
 */

#include<stdio.h>
#include<stdbool.h>

int main()
{
    bool strCmp(char[],char[]);
    char w1[]={'r','a','j'};
    char w2[]={"kumar"};
    
    printf("%i",strCmp(w1,w2));
    printf("\n%i",strCmp(w1,w1));
    printf("\n%i",strCmp(w1,"raj"));
    
    getch();
    return 0;
}

bool strCmp(char a[],char b[])
{
     int i;
     for(i=0;(a[i]!='\0')&&(b[i]!='\0');i++){
                             if(a[i]!=b[i])
                             return false;
                             }
     return true;
}              

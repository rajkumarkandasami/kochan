/* chapter 10 example 3
 * rajkumar kandasamy 11.10.14
 */

#include<stdio.h>

int main()
{
    void concat(char[],char[],char[]);
    char w1[]={"raj "};
    char w2[]={"kumar"};
    char w3[20];
    
    concat(w1,w2,w3);
    printf("%s",w3);
    
    getch();
    return 0;
}
    
void concat(char a[],char b[],char c[])
{
     int i=0,j=0;
     while(a[i]!='\0'){
                       c[i]=a[i];
                       i++;
                       }
     while(b[j]!='\0'){
                       c[i+j]=b[j];
                       j++;
                       }
     c[i+j]='\0';
}

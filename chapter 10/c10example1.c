/* chapter 10 example 1 concatenation of two strings 
 * rajkumar kandasamy 11.10.14
 */

#include <stdio.h>
#include<string.h>

int main()
{
    void concat (char result[],char str1[],int n1,char str2[],int n2);
    char s1[5]={'r','a','j'};
    char s2[6] = { 'k','u','m','a','r'};
    char s3[8];
    int i;
    
    concat(s3,s1,strlen(s1),s2,strlen(s2));
    for(i=0;i<8;++i)
    printf("%c",s3[i]);
    printf("\n");
    
    getch();
    return 0;
}

void concat(char result[],char str1[],int n1,char str2[],int n2)
{
     int i,j;

     for(i=0;i<n1;++i)
     result[i]=str1[i];
     for(j=0;j<n2;++j)
     result[n1+j]=str2[j];
}


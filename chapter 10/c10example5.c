/* chapter 10 example 5 scanf exmple
 * rajkumar kandasamy
 */ 
 
#include <stdio.h>

int main()
{
    char s1[81],s2[81],s3[81];
      
    printf("Enter text:  ");
    scanf("%s%s%s", s1, s2, s3);
    printf("\ns1 = %s\ns2 = %s\ns3 = %s\n", s1, s2, s3);
    
    getch();
    return 0;
}

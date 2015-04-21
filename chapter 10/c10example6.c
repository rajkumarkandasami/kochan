/* chapter 10 example 6 reading 2 lines of data
 * rajkumar kandasamy 13.10.14
 */
 
#include<stdio.h>

int main()
{
    int i;
    char line[81];
    void readLine(char buffer[]);
    
    for(i=0;i<3;++i){
    readLine(line);
    printf("%s\n\n", line);
    }
    
    getch();
    return 0;
}

void readLine(char buffer[])
{
     char c;
     int i=0;
     
     do
     {
     c=getchar();
     buffer[i]=c;
     ++i;
     }
     while(c!='\n');
     buffer[i-1]='\0';
}

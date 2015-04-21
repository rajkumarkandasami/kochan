/* chapter 6 example 2 program to calculate avg marks and number of failure
 * rajkumar kandasamy
 */

#include<stdio.h>

int main()
{
    int noOfSubject = 0;
    int mark;
    int totalMark = 0;
    int noOfFailure = 0;
    int i;
    
    printf("Enter number of subjects : ");
    scanf("%d", noOfSubject);
    for(i = 0; i < noOfSubject; i++)
    {
            printf("\nEnter mark of subject %d", i+1);
            scanf("%d", &mark);
            totalMark = totalMark + mark;
            if(mark < 65)
            {
                    ++noOfFailure;
            }
    }
            printf("\n avg marks : %d and number of failiure : %d", (float)totalMark/noOfSubject, noOfFailure);
            
            getch();
            return 0;                    
}

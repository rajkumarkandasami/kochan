/* chapter 7 example 5 initializing arrays
 * rajkumar kandasamy 23.09.14
 */
 
#include <stdio.h>

int main()
{
    int a[10] = { 0, 1, 4, 9, 16};
    int i;
    for(i = 5; i < 10; ++i) 
    a[i] = i * i;
    for(i = 0; i < 10; ++i)
    printf("a[%i] = %i\n", i, a[i]);
    
    getch();
    return 0;
}

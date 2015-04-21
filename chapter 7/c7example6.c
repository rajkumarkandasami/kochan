/* chapter 7 example 6 introducing charecter arrays
 * rajkumar kandasamy 23.09.14
 */
 
#include <stdio.h>

int main()
{
    char word[] = {'H', 'e', 'l', 'l', 'o', '!'};
    int i;
    for(i = 0; i < 6; ++i)
    printf("%c", word[i]);
    printf("\n");
    
    getch();
    return 0;
}

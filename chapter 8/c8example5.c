/* chaptr 8 examp 5 gcd
 * rajkumar kandasamy 09.10.14 
 */
 
#include <stdio.h>

int main (void)
{
    void gcd(int,int);

    gcd(15,35);
    gcd(1024,512);
    gcd(17,240);
    
    return 0;
}

void gcd(int u,int v)
{
     int temp;
     
     printf("The gcd of %i and %i is ", u, v);
     while(v!=0){
     temp=u%v;
     u=v;
     v=temp;
     }
     
     printf ("%i\n", u);
}

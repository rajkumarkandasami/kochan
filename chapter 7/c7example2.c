/* chapter 7 example 2 array counters
 * rajkumar kandasamy , 16.09.14 
 */

#include<stdio.h>

int main()
{
	int  ratingCounter[11];
	int i;
	int resp;
	
	for(i = 1;  i <= 10;  ++i)
		ratingCounter[i] = 0;

	printf("Enter the responses\n");

	for(i = 1;  i <= 10;  ++i) {
		scanf("%i", &resp);

		if (resp < 1 || resp > 10)
			printf ("bad response!!!: %i\n", resp); 
		else 
			++ratingCounter[resp];
	}
	printf ("\n\nNumber of Responses\n"); 
	printf ("*********************************\n");

	for (i = 1;  i <= 10;  ++i)
		printf ("%8i%18i\n", i, ratingCounter
		[i]);

	return 0;
}



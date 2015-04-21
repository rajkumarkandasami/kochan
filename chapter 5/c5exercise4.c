/* chapter 5 exercise 4 generating a table of factorial of numbers
 * rajkumar kandasamy
 */
 
 #include<stdio.h>
 
 int main()
 {
	int i;
	int t = 0;
	
	printf("\n n		facorial of n ");
	printf("\n---		--------------- ");
	printf("\n 1                      0");
	t = 1;
	for(i = 2;i <= 10; i++)
	{
		t = t * i;
		printf("\n %d			%d		",i , t);
	}
	
	getchar();
	return 0;
}

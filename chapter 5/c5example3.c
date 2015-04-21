/* chapter 5 example 3 generating a table of triangular number
 * rajkumar kandasamy
 */
 
 #include<stdio.h>
 
 int main()
 {
	int i;
	int t = 0;
	
	printf("\n n		Sum from 1 to n ");
	printf("\n---		--------------- ");
	for(i = 1;i <= 10; i++)
	{
		t = t + i;
		printf("\n %d			%d		",i , t);
	}
	
	getchar();
	return 0;
}

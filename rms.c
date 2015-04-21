#include<stdio.h>
#include<math.h>

int main()
{
	int avg,i,a[10], sum=0,rms;
	
	printf(" enter 10 numbers :");
	for( i=0;i<10;i++){
	
	scanf(" %d ",&a[i]);
	a[i]=a[i]*a[i];
	}
	
	for( i=0;i<10;i++){
	
	sum = sum + a[i];
	
	}
	
	avg=sum /10;
	rms= sqrt(avg);
	printf("rms = %d", rms);
	
	getch();
	return 0;
	

}

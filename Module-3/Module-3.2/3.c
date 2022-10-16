#include<stdio.h>
int main()
{
	int n;	
	printf("Enter any Number :");
	scanf("%i",&n);	

	if(n==0)
	{
		printf("The number is Zero");
	}
	
	else if(n%2==0)
	{
			printf("Even Number");
	}
	else
	{
		printf("Odd Number");
	}
	
	return 0;
}

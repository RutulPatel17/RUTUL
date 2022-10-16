#include<stdio.h>
int main()
{
	int Number,x;
	
	printf("Enter any Number: ");
	scanf("%i",&Number);
	
	for(x=2;x<Number;x++)
	{
		if(Number%x==0)
		{
			printf("%i ",x);
		}
	}
	return 0;
}

#include<stdio.h>
int main()
{

	int n1,n2,n3,range=20,i;
	
	printf("Enter value for n1 = ");
	scanf("%i", &n1);
	printf("Enter value for n2 = ");
	scanf("%i", &n2);
	
	
	
	printf("%i %i ",n1,n2);
	
	for(i=0;i<=range;i++)
	{
		n3 = n1+n2;
	
		n1=n2;
		n2=n3;
		
			printf("%i ",n3);
		
	}
	
	
	
	return 0;
}


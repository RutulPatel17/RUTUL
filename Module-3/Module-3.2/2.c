#include<stdio.h>
int main()
{
	
	int A,B,C;
	
	printf("Enter value for A = ");
	scanf("%i", &A);
	printf("Enter value for B = ");
	scanf("%i", &B);
	
	
	C=A;
	A=B;
	B=C; 	
	
	printf("A= %i\nB= %i",A,B);
	
	return 0;
}

#include<stdio.h>

int main()
{
    int Days, Years;

    
    printf("Enter number of Days: ");
    scanf("%i", &Days);

    
    Years = Days / 365;
    printf("Number of Years = " "%i", Years);
    
    printf("\nEnter number of Years: ");
    scanf("%i", &Years);
    
    Days = Years * 365;
    printf("Number of Days = " "%i", Days );

    return 0;
}

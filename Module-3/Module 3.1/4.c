#include<stdio.h>

int main()
{
    int Principle,Interest,Time, SimpleInterest;
    
    printf("Enter Principle amount :");
    scanf("%i", &Principle);
    printf("Enter Rate of Interest : ");
    scanf("%i", &Interest );
    printf("Enter total Time : ");
    scanf("%i", &Time);
    
    SimpleInterest = (Principle * Interest * Time) / 100;
    printf("Simple Interest is :%i",SimpleInterest);
    
    
    return 0;
}

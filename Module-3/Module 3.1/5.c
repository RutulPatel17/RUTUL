#include <stdio.h>

int main()
{    
    int year;      
    printf("Enter a Year = ");
    scanf("%i", &year);
          
    if ( year%400 == 0)      
    printf("%i is a Leap Year.\n", year);  
        
    else if ( year%100 == 0)      
    printf("%i is not a Leap Year.\n", year); 
         
    else if ( year%4 == 0 )      
    printf("%i is a Leap Year.\n", year);
    
    else      
    printf("%i is not a Leap Year.\n", year);      
    
    return 0;    
}



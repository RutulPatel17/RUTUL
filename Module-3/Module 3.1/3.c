#include<stdio.h>   
 int main() 
 {  
    int Radius, Area;  
    printf("Enter the Radius of Circle = ");  
    scanf("%i",&Radius);   
    Area = 3.14 * Radius * Radius;     
    printf("The Area of the Circle = %i\n",Area);  
    
    
    int Length,Breadth;
    int area;
   
    
    printf("Enter the Length of a Rectangle : ");
    scanf("%i",&Length);
    printf("Enter the Breadth of a Rectangle : ");
    scanf("%i",&Breadth);
    area = Length * Breadth;
    printf("Area of Rectangle is : %i",area);
    
    
    
    
    
    int BaseLength, Heigth;
    int AreaofTriangle;

	printf("Enter the BaseLength of Triangle = ");
	scanf("%i", &BaseLength);
	
	printf("Enter the Heigth of Triangle = ");
	scanf("%i", & Heigth);
	
    Area = BaseLength * Heigth / 2;
    printf("Area of the Traingle = " "%i", AreaofTriangle);
    
    return 0;   
}  



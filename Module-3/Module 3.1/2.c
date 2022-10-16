#include <stdio.h>
int main()
{
   char Operator;
   int num1, num2, result;
   printf("\n Enter any one function (+, -, *, /) : ");
   scanf("%c", &Operator);
   printf("Enter the values of num1 and num2 \n : ");
   scanf("%i%i", &num1, &num2);
   switch(Operator)
   {
      case '+': result = num1 + num2;
         break;
      case '-': result = num1 - num2;
         break;
      case '*': result = num1 * num2;
         break;
      case '/': result = num1 / num2;
         break;
      default: printf("\n Invalid Function ");
   }
   printf("Answer= %i", result);
   
   return 0;
}

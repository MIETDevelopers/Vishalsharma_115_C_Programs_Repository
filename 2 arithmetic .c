//Name :Vishal Sharma
//PURPOSE:ARITHMETIC OPERATIONS USING ADDITION, SUBTRACTION, MULTIPLICATION AND REMAINDER OPERATORS
#include <stdio.h>//preprocessive directive to include standard input output header file
int main() // main program starts
{
   int first, second, add, subtract, multiply ;//variable declaration using integer data type
   float divide ;//variable declration using float data type
   
 
   printf("Enter two integers\n");//printf function calling
   scanf("%d%d", &first, &second);//asking user for input
 
   add = first + second;//formula
   subtract = first - second;//formula
   multiply = first * second;//formula
   divide =   first / second;//formula
   

   printf("Sum = %d\n", add);//printing sum of two numbers
   printf("Difference = %d\n", subtract);//printing difference of two numbers
   printf("Multiplication = %d\n", multiply);//print multiplication of two numbers
   printf("Division = %f\n" , divide);//doubt
   
 
   return 0;//return statement
}

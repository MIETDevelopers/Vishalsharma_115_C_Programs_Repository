//Name:Vishal sharma
//Program: Calculate sum of digits of a number using while loops

#include <stdio.h>//preprocesssive directive to include header file
int main() //main function body
{
   int n, t, sum = 0, remainder;//variable declaration using int data type

   printf("Enter an integer\n");//print f function calling
   scanf("%d", &n);//read the number entered by user

   t = n;

   while (t != 0)//while loop to calculate sum of digits
   {
      remainder = t % 10;
      sum       = sum + remainder;
      t         = t / 10;
    }//loop ends

   printf("Sum of digits of %d = %d\n", n, sum);

   return 0;//return statement
}
#include<stdio.h>          // include stdio.h library  

int main()                 //Main function
{
int n,num,r,ans=0;    // variable declaration
printf("Enter a positive integer: ");    //Asking user to input positive number  
scanf("%d", &num);
n=num;
while(n>0)                 // Loop to calculate the sum of the cubes of its digits 
{
r=n%10;
ans=ans+r*r*r;
n=n/10;
}
 
if(ans==num)               // if else condition to print Armstrong or Not.
printf("%d is an Armstrong number.",num);
else
printf("%d is not an Armstrong number.",num);
return 0;   // return statement
}
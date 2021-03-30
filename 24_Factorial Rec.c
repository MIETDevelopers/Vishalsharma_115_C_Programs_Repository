//Vishal sharma
//Program: Print factorial using recursion.		

#include<stdio.h>  //Pre-processor directive to include standard input and output functions header file
	long int multiplyNumbers(int n);
	int main() {
    	int n;//variable declaration using int data type
        //scanf and print f function used
    	printf("Enter a positive integer: ");
    	scanf("%d",&n);
    	printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    	return 0;
	}

	long int multiplyNumbers(int n) {
    	if (n>=1) //if-else statement
        	return n*multiplyNumbers(n-1);
    	else
        	return 1;//return statement
}
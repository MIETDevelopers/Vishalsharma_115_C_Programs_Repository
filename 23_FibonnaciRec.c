//Name:Vishal Sharma
//DAte:23-03-2021
//Fibonacci sequence using recursion.
#include<stdio.h>// stdio header file
 
int fibonacci(int x); 
 
int main()//main function
{
    int limit, res, count;
    printf("\nEnter the Number :\t");
    scanf("%d", &limit);
    for(count = 0; count < limit; count++)//for loop
    {
        printf(" %d ", fibonacci(count));
    }
    printf("\n");
    return 0;
}
 
int fibonacci(int x)
{
    if(x == 0||x == 1)
        return x;
    else
        return (fibonacci(x - 1) + fibonacci(x - 2));
}
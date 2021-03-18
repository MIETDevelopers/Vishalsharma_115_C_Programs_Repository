//Name Vishal sharma
//Purpose :Find whether number is odd or even
#include <stdio.h//preprocessive directive to include stdio header file
int main() {
    int num;//variabe named num declared using int data type
    printf("Enter an integer: ");//print f function
    scanf("%d", &num);//reads value from user
    if(num % 2 == 0)//IF-statement
        printf("%d is even.", num);//If the condition  in If- statement is true then it will print this line
    else//Else-statement
        printf("%d is odd.", num);//If the condition in If-statement is false then it will print this line

    return 0;//return statement
}

//Vishal Sharma
//PURPOSE:PROGRAM TO DEMONSTRATE DO WHILE LOOP
#include<stdio.h>  //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE
int main(){		//STARTING OF MAIN PROGRAM
int i=1,number=0;	//DECLARING VARIABLES NAMED "i" AND "number" WITH "int" DATA TYPE
scanf("%d",&number);		//READ USER INPUT
printf("Enter a number: %d\n", number);		//PRINT USER INPUT
do{		//DO WHILE LOOP
printf("%d \n",(number*i));		//PRINTING INPUT OF THE PROGRAM
i++;	//INCREMENTATION
}while(i<=10);		//WHILE LOOP
return 0;		//RETURN STATEMENT
} 
//Nmae : Vishal sharma 
//Date :26-03-2021
//PURPOSE:TO STORE THE STUDENT INFORMATION USING UNION
#include <stdio.h>  //PREPROSESSIVE DIRECTIVE TO INCLUDE STDIO HEADER FILE
#include <string.h>  //PREPROSESSIVE DIRECTIVE TO INCLUDE STRING HEADER FILE
 
union student   //UNION KEYWORD WITH "student" DATA TYPE
{
            char name[20];      //"name" VARIABLE WITH "char" DATA TYPE
            char subject[20];   //"subject" VARIABLE WITH "char" DATA TYPE
            float percentage;   //"percentage" VARIABLE WITH "float" DATA TYPE
};
 
int main()    //STARTING OF MAIN PROGRAM
{
    union student record1;
    union student record2;
 
    // ASSIGNING VALUE TO  record1 UNION VARIABLE
       strcpy(record1.name, "Raju");
       strcpy(record1.subject, "Maths");
       record1.percentage = 86.50;
 
       printf("Union record1 values example\n");
       printf(" Name       : %s \n", record1.name);
       printf(" Subject    : %s \n", record1.subject);
       printf(" Percentage : %f \n\n", record1.percentage);
 
    // ASSIGNING VALUE TO record2 UNION VARIABLE
       printf("Union record2 values example\n");
       strcpy(record2.name, "Mani");
       printf(" Name       : %s \n", record2.name);
 
       strcpy(record2.subject, "Physics");
       printf(" Subject    : %s \n", record2.subject);
 
       record2.percentage = 99.50;
       printf(" Percentage : %f \n", record2.percentage);
       return 0; //RETURN STATEMENT
}
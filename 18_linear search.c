//Name:Vishal sharma
//Program name:Searching an element in an array using linear search


#include <stdio.h>//header file
int main()//main function
{  
    int num; //Variable 'num' declare using int data type
    int i,  keynum, found = 0;//Variable i,keynum,found declare and initialize
 
    printf("Enter the number of elements: \n");
    scanf("%d", &num);//This will set the maximum number (Limit) of values to be entered by user based on their choice.
    int array[num];
    printf("Enter the elements one by one: \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]); //scanning input
    }
 
    printf("Enter the element to be searched: ");
    scanf("%d", &keynum);
    // This step will determine Linear search.
    for (i = 0; i < num ; i++)//for loop
    {
        if (keynum == array[i] )
        {
            found = 1;
            break;
        }
    }
    //This will give the output based on user input.
    if (found == 1) 
        printf("Element is present in the array at position %d .",i+1);
    else
        printf("Element is not present in the array.\n");

    return 0;
}
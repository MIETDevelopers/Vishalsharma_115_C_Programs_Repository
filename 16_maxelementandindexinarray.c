//vishal sharma
//Creation: 20-03-21


#include<stdio.h> //Preprocessive directive to include stdiio header file
int main() //main body of function starts
{  
	//variable decleartions using int and float data type
	int i;    
	float arr[5];

	printf("Please enter five numbers:\n ");

	for (i = 0; i < 5; ++i) //for loop
	{
    scanf("%f", &arr[i]);
	}

		for (i = 1; i < 5; ++i) //for loop
		{
    	if (arr[0] < arr[i])
        	arr[0] = arr[i];
		}
	printf("Largest element = %.2f", arr[0]);// This will give the result

	return 0;//return statement
} 
//Creation date :16-03-2021
//Name :Vishal sharma
//purpose:To find the area and perimeter of Circle, Square and Rectangle
//Area of Circle: (22/7)*r*r: radius
//Perimeter of Circle: 2*(22/7)*r: radius
//Area of Square: side*side: side
//Perimeter of Square: 4 * side: side
//Area of Rectangle: Length * Breadth: Length, Breadth
//Perimeter of Tectagnle: 2 * (Length + Breadth): Length, Breadth
#include<stdio.h>
int main(){ //main programs starts
	float raduisOfCircle, sideOfSquare, legthOfRectangle, breadthOfRectangle;//Variable declaration is taking place
	scanf("%f %f %f %f", &raduisOfCircle, &sideOfSquare, &legthOfRectangle, &breadthOfRectangle);//expecting input form user
	printf("Area of Circle: %f",((22*raduisOfCircle*raduisOfCircle)/7));//prints area of circle
	printf("\nPerimeter of Circle: %f",((2*22*raduisOfCircle)/7));//prints perimeter of circle
	printf("\nArea of Square: %f",(sideOfSquare*sideOfSquare));//prints arwa of square
	printf("\nPerimeter of Square: %f",(4*sideOfSquare));//prints perimeter of square
	printf("\nArea of Rectangle: %f",(legthOfRectangle*breadthOfRectangle));//prints area of rectangle
	printf("\nPerimeter of Rectangle: %f",(2*(legthOfRectangle+breadthOfRectangle)));//prints perimeter of rectangle
	return 0;//return statement
}

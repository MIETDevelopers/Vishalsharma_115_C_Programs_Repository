/*NAME:VISHAL SHARMA
PURPOSE: To demonstrates array name as pointer representation and print its elements values. */
#include <stdio.h>  //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE
int main()    //STARTING OF MAIN PROGRAM
{

  /*POINTER VARIABLE*/
  int *p;
  /*ARRAY DECLARATION OF SIZE 7*/
  int val[7] = { 11, 22, 33, 44, 55, 66, 77 } ;
  /*ASSIGNING THE ADDRESS OF val[0] THE POINTER
  YOU CAN ALSO WRITE LIKE THIS:
  p = var;
  BECAUSE ARRAY NAME REPRESENTS THE ADDRESS OF THE FIRST ELEMENT
  */
  p = &val[0];
  for ( int i = 0 ; i<7 ; i++ )
  {
    printf("val[%d]: value is %d and address is %p\n", i, *p, p);
    /* INCREMENTING THE POINTER SO THAT IT POINTS TO NEXT ELEMENT
    ON EVERY INCREMENT.
    */
    p++;
  }
  return 0;   //RETURN STATEMENT
} 
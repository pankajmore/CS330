/* add.c
 *	Simple program to test whether the systemcall interface works.
 *	
 *	Just do a add syscall that adds two values and returns the result.
 *
 */

#include "syscall.h"

int main()
{
  int result,newres;
  
  result = Add(42, 23);
  Fork();
  //  Exit(24);
  newres = Add(10,20);
//  Halt();
  /* not reached */
}
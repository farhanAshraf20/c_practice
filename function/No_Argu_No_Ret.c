
/*
 No Argument Passed and No Return Value
*/

#include <stdio.h>

void fun();

int main() {
  fun();    // argument is not passed
  return 0;
}

// return type is void meaning doesn't return any value
void fun() {
  
  printf("In function \n");
  
}

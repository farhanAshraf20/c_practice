/*
Argument Passed But No Return Value
*/

#include <stdio.h>
void Display(int n);

int main() {

  int n;

  printf("Enter a positive integer: ");
  scanf("%d",&n);

  // n is passed to the function
  Display(n);

  return 0;
}

// return type is void meaning doesn't return any value
void Display(int n) 
{
  printf("passing argument Number without return type  : %d\n", n);
}

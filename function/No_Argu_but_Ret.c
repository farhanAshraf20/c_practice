/*
No Arguments Passed But Returns a Value
*/

#include <stdio.h>
int getvalue();

int main() {

  int n;

  // no argument is passed
    n = getvalue();    
    printf("The return valu is : %d\n",n);
    return 0;
}

// returns integer entered by the user
int getvalue() 
{
  int n;

  printf("Enter a positive integer: ");
  scanf("%d",&n);

  return n;
}

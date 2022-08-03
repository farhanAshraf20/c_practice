/*
Argument Passed and Returns a Value
*/

#include <stdio.h>
int fun(int n);

int main() {

  int n, flag;

  printf("Enter a integer Number : ");
  scanf("%d",&n);

  // n is passed to the checkPrimeNumber() function
  // the returned value is assigned to the flag variable
  flag = fun(n);
    if(flag == 1)
    printf("not +ve not -ve number : %d\n", n);
    else if(flag == 2)
    printf("+ve number  : %d\n",n);
    else
    {
        printf("-ve number : %d\n",n);
    }

  return 0;
}

// int is returned from the function
int fun(int n) 
{ 
  if ( n == 0 )
  {
    return 1;
  }
  else if (n >= 1)
  {
    return 2;
  }
  return 0;
}

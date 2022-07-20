#include<stdio.h>
inline static int mul(int a, int b) //inline function declaration
{
   return(a*b);
}
int main()
{
   int c;
   c=mul(2,3);
   printf("Multiplication:%d\n",c);
   printf("Multiplication_1:%d\n",mul(5,7));
   return 0;
}
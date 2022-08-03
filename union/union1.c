#include <stdio.h>
union student 
{
   float fee;
   int roll_no;
} j;

int main() 
{
   j.fee = 12000.3;
   printf("fee 1= %.1f\n", j.fee);
   
   j.roll_no = 12;  //when we start no with zero(0) (eg : 023) is that mean octal no .  
   printf("fee = %.1f\n", j.fee);
   printf("Roll No = %d\n", j.roll_no);
   
   return 0;
}
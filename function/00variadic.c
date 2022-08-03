#include <stdio.h>
#include<stdarg.h>

void print_ints(int num,...)
{
    va_list args; //pointer for varriable argument list
    va_start(args,num);
    for(int i=0;i<num;i++)
    {
        int value= va_arg(args,int);
        printf("%d: %d\n",i,value);
        }
        va_end(args);
}
int main()
{
    print_ints(3,24,25,45);
    print_ints(3,23,456);
}



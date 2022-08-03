/*
Functions Using Pointer Variables

************************************************************************************************

The compiler throws segmentation fault error because you are returning a copy of a pointer 
to a local variable. However, that local variable is de-allocated when the function increment 
finishes, so when we try to access it afterwards compiler is not able to reference the pointer.

************************************************************************************************

Safe ways to return a pointer from a function

*Return variables are either created using the keyword static or created dynamically at run time 
 because such variables exist in memory beyond the scope of the called function.

*Use arguments that are passed by their reference because such functions exist in the calling function scope.

*/

#include<stdio.h>

int* increment(int a) {
    int *b;
    *b = a;
    *b += 1; // incrementing the value
    
    return b; // returning pointer from the function
}

int main() {
    int num = 5;
    
    int *b = increment(num);
    printf("Incremented value = %d", *b);

    return 0;
}

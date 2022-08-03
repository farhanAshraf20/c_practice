/*
Function pointer passed as an argument
--------
*/


#include<stdio.h>
#include<stdlib.h>

int conditionalSum(int a, int b,int (*ptr)()) {
    // modify the arguments according to the condition 
    // of the function ptr points to
    a = (*ptr)(a);
    b = (*ptr)(b);

    return a + b;
}

int square(int a) {
    // function return square power of a number
    return a * a;
}

int cube(int a) {
    // function return cubic power of a number
    return a * a * a;
}

int main() {
    int (*fp)(int);
    // point function pointer to function square()
    fp = square;
    
    // sum = 2^2 + 3^2, as fp points to function sqaure()
    int sum = conditionalSum(2, 3, fp);
    printf("Square sum = %d", sum);
    
    // point function pointer to function cube()
    fp = cube;
    
    // sum = 2^3 + 3^3, as fp points to function cube()
    sum = conditionalSum(2, 3, fp);
    printf("Cubic sum = %d", sum);
    return 0;
}

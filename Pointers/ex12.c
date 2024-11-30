// Increment Operator with Pointer

#include <stdio.h>

int main(){

    int a = 5;
    int *b = &a;
    printf("Address of a: %p\n", &b);

    b++;
    printf("After increment , Address of a: %p\n", b);

    return 0;
}


// Unlike a normal numeric variable (where the increment operator "++" increments its value by 1), the increment operator used with a pointer increases its value by the sizeof its data type.
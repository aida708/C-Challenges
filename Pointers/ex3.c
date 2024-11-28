#include <stdio.h>

int main(){

    int x = 10;

    //Pointer DECLARATION and INITIALIZATION
    int *ptr = &x;

    //print thee current value of x
    printf("Value of x = %d\n", * ptr);

    //change the value of x
    *ptr = 30;

    //print the new updated value of x
    printf("New value of x = %d\n", *ptr);
    printf("SO the New value of x = %d\n", x);
    return 0;
}

// Value of x = 10
// Value of x = 20
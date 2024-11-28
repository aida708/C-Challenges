#include <stdio.h>

int main() {
     int x = 10;
     float y = 1.3f;
     char z = 'p';

    //Pointer DECLARATION and INITIALIZATION
     int *ptr_x = &x;
     float *ptr_y = &y;
     char *ptr_z = &z;

     printf("Value of x is %d\n", *ptr_x);
     printf("Value of y is %f\n", *ptr_y);
     printf("Value of z is %c\n", *ptr_z);


     return 0;
}

// Value of x = 10
// Value of y = 1.300000
// Value of z = p
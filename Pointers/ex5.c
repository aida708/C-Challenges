//Size of a Pointer Variable

#include <stdio.h>

int main() {
    int x = 10;
    float y = 1.3f;
    char z = 'p';

    //Pointer declaration and initialization
    int *ptr_x = &x;
    float *ptr_y = &y;
    char *ptr_z = &z;

    //print the size of each pointer variable
    printf("Size of ptr_x = %zu\n", sizeof(ptr_x));
    printf("Size of float pointer: %zu\n", sizeof(ptr_y));
      printf("Size of char pointer : %zu\n", sizeof(ptr_z));


}

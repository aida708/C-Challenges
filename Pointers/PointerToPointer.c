#include <stdio.h>

int main(){

    int var = 10;
    int *intptr = &var;
    int **ptrptr = &intptr;

    printf("var: %d \nAddress of Variable: %p \n\n", var, (void *)&var);
    printf("intptr: %p\nAddress of intptr: %p \n\n", (void *)intptr, (void *)&intptr);
    printf("Value at intptr: %d \n\n", *intptr);
    printf("ptrptr: %p \nAddress of ptrptr: %p \n\n", (void *)ptrptr, (void *)&ptrptr);
    printf("Value at ptrptr: %p \nValue at **ptrptr: %d \n\n", (void *)*ptrptr, **ptrptr);

    return 0;
}

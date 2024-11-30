// Example: Integer Pointer
//the address of var is stored in the intptr variable with & operator

#include <stdio.h>
int main(){

    int var = 100;
    int *intptr = &var;

    printf("Variable: %d \n Address of Variable: %p \n\n", var, &var);
    printf("intptr: %p \nAddress of intptr: %p\n", intptr, &intptr);
    return 0;
}


 /*Variable: 100 
Address of Variable: 0x7ffdcc25860c 

intptr: 0x7ffdcc25860c 
Address of intptr: 0x7ffdcc258610 

i see the address of variable  ===  add of the pointer ref that variavble 
*/
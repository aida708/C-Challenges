// let's take an example of a float variable and find its address 

#include <stdio.h>
int main(){

    float myVar = 3434.643;

    printf("Variable is: %f\n Address of float variable : %p\n", myVar, &myVar);
}
//mycodeschool: https://www.youtube.com/watch?v=ASVB8KAFypk&list=RDQMvkDT5C3m77g&start_radio=1&ab_channel=mycodeschool

#include <stdio.h>

int main() {
    int A[] = {2, 4, 5, 8, 1};

    printf("%p\n", A);         //address of the array in memory
    printf("%d\n", A[0]);      //address represented by A[0] : 2

    printf("%d\n", &A[0]);     //address of the array in memory 
    printf("%d\n", *A);        //address represented by A[0] : 2

    return 0;
}


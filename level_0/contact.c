#include <stdio.h>


int main(void)
{
    char first_name = get_string('Whats ur name?');
    char last = get_string('Whats ur last name?');
   int phone_num = get_int('Whats ur phone num?');


    printf("my name is %s and my last name is %s. \n And my phone number is %i.\n" ,first_name,last, phone_num );
    return 0; 
}
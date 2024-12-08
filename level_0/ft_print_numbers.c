// Write a function that displays all digits in ascending order.

#include <unistd.h>

void ft_print_numbers(void)
{
    char digit = '0';

    while( digit <= '9')
    {
     write(1, &digit, 1);
    digit++;   
    }
    write(1, "\n", 1);
    
}

// #include <unistd.h>
// void	ft_print_numbers(void)
// {
// 	write(1, "0123456789", 10);
// }
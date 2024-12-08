// Write a program that displays all digits in descending order, followed by a
// newline.

#include <unistd.h>

int main()
{
  write(1, "9876543210\n", 11);
  //10 digits + 1 newline) = 11

    return (0);
}


// #include <unistd.h>

// int main(void)
// {
//     char digit = '9';
//     while(digit >= '0')
//     {
//         write(1, &digit, 1);
//         digit--;
//     }
//     write(1, "\n", 1);
//     return (0);
// }
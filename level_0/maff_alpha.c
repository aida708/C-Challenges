// Write a program that displays the alphabet, with even letters in uppercase, and
// odd letters in lowercase, followed by a newline.

// #include <unistd.h>

// int	main(void)
// {
// 	write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
// 	return (0);
// }

#include <unistd.h>

int	main(void)
{
    char letter = 'a';
    while(letter <= 'z')
    {
        if((letter - 'a' + 1) % 2 == 0)
    }
}
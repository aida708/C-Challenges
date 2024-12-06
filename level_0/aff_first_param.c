// Write a program that takes strings as arguments, and displays its first argument followed by a \n.

// If the number of arguments is less than 1, the program displays \n.


#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc > 1) // Check if there is at least one argument
    {
        int i = 0;
        while (argv[1][i]) // Loop through the first argument
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1); // Always write a newline character
    return (0);
}

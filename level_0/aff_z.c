// Write a program that takes a string, and displays the first 'z'
// character it encounters in it, followed by a newline. If there are no
// 'z' characters in the string, the program writes 'z' followed
// by a newline. If the number of parameters is not 1, the program displays
// 'z' followed by a newline.

#include <unistd.h>

void aff_z(char *str)
{
    int i;
    i = 0;


    // while(str[i])
    // {
    //     if(str[i] == 'z' || str[i] = 'Z'){
    //         write(1, "Z\n", 1);
    //     }
    // }
}



int main(int argc, char **argv)
{
    if(argc != 2)
    {
        write(1, "z\n", 2);
    } else{
        aff_z(argv[1]);
    }
    return 0;
}


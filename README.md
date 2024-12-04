# C-Challenges

# Functions in C

type name_of_function (parameters, parameters...){
statements
}

int squareNumbers(int x){ // Declares function "squareNumbers" thattakes in parameter of x.
y=x\*x; //creates int variable equating to x squared
return y; //returns the value of y when the functiois called
}

//void means this function doesn't return anything

void helloThere(string name){ //void means this function doesn't return anything
cout << "Hello, " << name;
}

int main(){
helloThere("Celina"); //prints out "Hello, Celina"
}

# Pointers

int => 4 bytes
printf("%p\n", A);This prints the address of the array in memory. Arrays decay into pointers when passed to functions, so A represents the pointer to the first element of the array (&A[0]).

printf("%d\n", A[0]);
This prints the value of the first element of the array (2), which is stored at the address represented by A.

# Level 0

# EX 1

Write a program that takes a string, and displays the first 'a' character it
encounters in it, followed by a newline. If there are no 'a' characters in the
string, the program just writes a newline. If the number of parameters is not
1, the program displays 'a' followed by a newline.

PROBLEM:

1. Take 1 string as input
2. search for occurrence of 'a' character
3. if found:
   ---print 'A' \n
   if not:
   -- print newline

4. if the prg receives anything other than exactly 1 arg , ---print 'A' \n;

# Step 3: Write the Logic

Implement the required logic step by step.

1. Handle multiple arguments or no arguments
   If the number of arguments is not equal to one, we output: write(1, "A\n", 2);
2. Loop through the string and find the first 'a' or 'A'
   We use a loop to check each character of the string. If we find 'a' or 'A', we: Write 'A\n' to standard output.
   Immediately stop searching (using return).
3. Print only a newline if no 'a' or 'A' is found
   If we finish the loop without finding 'a' or 'A', we simply: write(1, "\n", 1);

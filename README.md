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

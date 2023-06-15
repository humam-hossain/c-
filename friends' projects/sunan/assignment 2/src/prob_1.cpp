#include <iostream>

// this is the declaration of the special "main" function, which serves as the entry point of the program and returns an integer value, taking no arguments
int main(void)
{
    int a = 40;         // declare and initialize variable 'a' with the value 40
    int b = 25;         // declare and initialize variable 'b' with the value 25
    int *ptr = &a;      // declare pointer 'ptr' and assign the address of 'a' to it
    
    proc1(&a);          // call proc1 and pass the address of 'a'
    proc2(b);           // call proc2 and pass 'b' by reference
    
    *ptr = 67;          // assign the value 67 to the variable pointed to by 'ptr' (i.e., 'a')
    
    std::cout << a << '\n';      // print the value of 'a'
    std::cout << &a << '\n';     // print the address of 'a'
    std::cout << b << '\n';      // print the value of 'b'
    std::cout << &b << '\n';     // print the address of 'b'
    std::cout << ptr << '\n';    // print the value stored in 'ptr' (i.e., the address of 'a')
    std::cout << *ptr << '\n';   // print the value pointed to by 'ptr' (i.e., the value of 'a')
    std::cout << &ptr << '\n';   // print the address of 'ptr'
    
    return 0;
}

// definition of function proc1
void proc1(int *i)
{
    *i = 15;    // Assign the value 15 to the variable pointed to by 'i' (i.e., 'a')
}

// Definition of function proc2
void proc2(int &i)
{
    i = 15;     // Assign the value 15 to the reference variable 'i' (i.e., 'b')
}




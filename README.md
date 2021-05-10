# Notes on c++

---

## Visual Studio Settings

### Keyboard Shortcuts

* ctrl f7 -> Individual file compilation
* f5 -> Build and run Project
* f9 -> creates a breakpoint on the line(cursor's line)

### Configuration settings

* All configurations <-> All platforms
  * Output directory : $(SolutionDir)bin\$(Platform)\$(Configuration)\
    * Intermediate directory: $(SolutionDir)bin\intermediates\$(Platform)\$(Configuration)\
* C++ -> Optimization -> maximize speed //not necessary

*

## Compilation Process

every translation unit gets compiled into an object file.

## Linking Process

## Debugging

* Breakpoints
  * f9 puts a breakpoint in the cursor's line in VS.
    * Step over button(f10) lets go over another line.
    * step into button lets lookup into function code upon call
    * continue button runs the program until it hits the next break point

* Memory Lookup
  * Debug > Windows > Memory for memory view ```&variablename``` shows the variable in the memory 

## Important Commands for linux

```bash
g++ file.cpp #compiles the file.cpp and creates a *.out file -> executable
g++ file1.cpp file2.cpp #compiles the files to a single *.out file
g++ -c file1.cpp file2.cpp #creates  object files file1.o file2.o
g++ file1.o file2.o #compiles the object files
g++ -std=c++11 -02 -Wall test.cpp -o test #follows c++ 11 standards -02 optimizes the code -Wall shows the errors

```

## GDB commands

```bash
g++ -g file_mame.cpp # must compile with -g for debugging
gdb executable_file #starts a debugger session
b function_name #setting a breaking point on a function
b line_number #setting a breakpoint on line
n #goes to next line -> next
s #goes inside the function call -> step
f # where the fuck am I?
backtrace #on which function you are now and the pathway to this function
info b #shows the numbers of breakpoints in your code
info locals #shows the state of all local variables
delete 1 #delets the breakpoint 1
f frame_number #frame number is the function number from backtrace
```

## Makefiles

```makefile
file_to_be_made: from_which_file1 from_which_file2
    command to create file_to_be_made
```

## Pointers

* pointers are actually integers storing memory addresses

## Referencing

* disguised pointers

## Enums

enumeratin -> Practically it is just is an integer
by default, But type could be cast.

```C++
enum Enumeration : unsigned int{
    var1 = 1, var2 ,var3, var4
};
```

## Arrays and Multi Dimensional Arrays

An array is really just a pointer to a memory address\
Can create some serius problem if tried to access index out of the scope of the array length
Array indexing in memory -> 0 index: don't add anything with the memory address\
                         -> n index: add (n * size_of_variable_type) with the memory address
Multi dimensional arrays are arrays of arrays\
Basic syntax:\

```c++

int arr[n]; //stack array -> gets destroyed with the scope(when hits the curly brace)
int* arr = new int[n]; //heap array -> have to destroy with delete[] arr keyword
#include <array> //for c++ 11 arrays
std::array<int, 5> array_name; //array.size() makes life good :)
//two dimentional arrays
int arr[m][n]; //creating m 1 dimentional arrays having n elements
               // arr returns a pointer for 1 dimentional array having n elements 
int arr[0];    // is an array having n elements
int *(ptr)[3] = arr; //ptr points to a one dimentional array of three elements
                    // pointer type is array of three elements 
```

array element retreival technique ``` sizeof(array) / sizeof(data_type) ``` sizeof() returns memory allocation of the variable\
but can only be retreived from stack arrays. not heap arrays are available in this method

## Strings

string declaration returns a char pointer.

```c++
const char* string_name = "staring";
char* srting_name = "string"; //doesn't work in my pc :| -> gets stored as constant cannot change any character
char string_name[] = "string"; 
#include <string> //for c++ standard library -> will be using this one
std::string string_name = "string value "; //creates a const char pointer. can change elements
```

const is used because strings are basically fixed allocated memory like arrays 
Null Termination character : determines where the string ends 0x00 for 1 or multiple bytes (ascii value 0)

### About std::string s

by calling std::string string_name I might be calling instanciating an object from a string class\
iostream header file does have a definition for strings though it can no cout strings if string header is not included(reason not clear yet)\
using string class -> some methods can be accessed as well\
Appending strings: ```std::string string = "nazib" + "abrar";``` doesn't work cz can not add const char arrays. cannot glue two pointers together\
not sure what is happening here(class overloading) 

```c++
 std::string string_name;
 string_name += "string_extension";
 std::string string_name = std::string("prefix") + "const char";
 ```

copying an array means dynamically allocating memory to heap to store that same string
passing strings in functions:

```c++
void function(const std::string& string){
  //did this because don't want to copy the string in the memory again cz string copy is quite slow
  // the & represents that got referenced (we are sending the reference of that string)
}
```

## String Literals

Bug of strlen() function: it counts till the \0(null termination character)
String literals are stored in read only areas of memory

```c++
const char* name = u8"Abrar";
const wchar_t* name = L"Abrar";
const char16_t name = u"Abrar";
const char32_t name = U"Abrar";

```

## Const keyword

```c++
const int* a = 00; //or
int const* a = 00; //here the contents of the variable can not be changed but could be referenced to some other pointer
          //like int* aa = 22;
          //     a = (int*) &aa; is a valid operation
          // but *a = 22; is not a valid operation
int* const a = 00; //here the pointer cannot be reassigned
const int* const a = 11; //none of them can be modified

```

* Const keyword in Class methods

```c++

int GetX() const
{
  //this class method can not modify any class variables
  //getter methods should be implemented with such syntaxes
}
//something interesting here
const int* const function() const{
  //if the varialbles were pointers -> safety measures
}

```

## Dynamic memory allocations

These functions allocate memory in heap
c functions : malloc, calloc, realloc, free

```c++
void* malloc(size_t size); //definition of malloc -> size_t is byte size and takes unsigned integer
//returns a void pointer -> address of the first byte of the memory block allocated
//need to typecast a void pointer to store data
int* p = (int*) malloc(3 * sizeof(int));

void* calloc(size_t num, size_t size); // eases the use of malloc -> do not need to multiply
//malloc does not assign any value to the memory blocks but calloc fills all the blocks with 0;
int* p = (int*) calloc(3, sizeof(int));

void* realloc(void* ptr, size_t size); //reallocates the memory previously allocated by malloc

free(memory_address); // fills the memory block with garbage values

int* b = (int*) realloc(memory_address, new_size); //extends the memory block with new_size -> if available, extends
//if not available, copies all the values in new address and removes the previous block

```

## Function Pointers

General pointers that can store address of functions. Could be used to dereference and execute a function\
Instructions are stored in code section of the memory allocated to the program\
Function pointers point to the memory address of the first instruction of the function. Assembly jump equivalent thing\

```c++
int Add(int a, int b){}

int (*p)(int, int); //declaration of a function pointer having two parameters
p = &Add; // or p = Add would also be fine
int c = (*p)(1,2); //function pointers need to have (parentheses) around them (*p) like this
                   // could use p(1,2) like this as well
//----------------------------------------------------------------------//

int *p(int, int) // this syntax means that it will return an int*

```

## Function callbacks

When address of a function is passed to another function, that task is called callback function\

## Competitive notes

```c
ios::sync_with_stdio(0);
cin.tie(0);
```

newline "\n" works faster than std::endl cz endl causes a flush operation

```getline(cin, s);``` takes a full line inside the string s

If the amount of data is unknown, the following loop is useful:

```c
while (cin >> x) {
// code
}
```
# Object Oriented Programming with c++

---

## Basics

writing classess is like writing a new data type\

## Classes VS Structs

Property visibility is set to private in classes\
Classes are private by default where Structs are public by default\
But both are like new data types

## Static keyword

Static means the variable or method will be available for only this translation unit

## Extern keyword

Extern keyword will look for the variable or method in other translation units\
Will look for static variables or methods actually

## Static in classes and structs

static variable inside a class: there will be only one instance of that variable accross all the instances of the classs\
it's a little bit messy idea. Suppose I have some objects derived from a certain class. and they all have a static variable\
named __bal. If you change this variable in any of the objects, it will be changed in all other objects(instances) as well\
static means that there is only one instance of that variable\
Static method can not access a non-static variable

### Local Statics

variable will be local -> could be accessed from that perticular scope only but the lifetime of the variable \
will be the lifetime of the program\
Handy when you don't want to make a global variable but don't want the local variable be re-initialized again and again.
difference with global -> globals are accessible in global scope, local statics are not.

## Struct

```C++
struct Name{
    //properties
    int x, y;
};
```

struct initializer syntax

```C++
Name variable;
Name variable2 = {4, 5}
```

## Constructors

Basically a method which is called whenever an instance is made from a class
constructor method has to have the name of the class
could have multiple constructor functions
if constructor function is kept inside private it means you can not instantiate the class
you have to access the properties with ```class_name::function_name()``` type of syntax
```class_name::function_name()``syntax could be used for accessing the class constructor from outside the class\
initiatialization\

```c++
class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z) { // Constructor with parameters
      brand = x;
      model = y;
      year = z;
    }
};
```

Deleting the default constructor: ```class_name() = delete``` inside the class

```C++
class Entity{
public:
    Entity(){
    // code here
    }

};
```

## Destructors

Function to run when you destroy an instance of that class\
general syntax is: ```~class_name(){}```\
Stack allocated ( will discuss about it later)\
Important: If some memory is allocated in heap manually, you have to clean it manually. It is where destructor comes\

## Inheritance

hierarchy of classes: Main class(parent) and subclass(branch classes) idea.\
important for avoiding code duplication\

```c++
class class1{
    //some code
    };
class class2 : public class1{
    //class2 extends class1
    //class2 has all the properties that class1 has
};
```

## Virtual functions

Allows to override methods in subclasses\
```virtual vfunction(){//function_definetion}``` creates a vTable for this specific function\
Which allows to overide the methods of parent class
```function_type function_name(parameters) override {function definition}```
override keyword is optional. but a good practice\
need extra memory for vtables

## Interfaces

Specific type of virtual function(pure virtual function)*Abstract method may b*\
No implementation in the base class. Subclasses are forced to implement this virtual function\
```virtual function_type function_name() = 0``` says you have to implement this this function in all the subclasses

## Visibility  

3 types of visibility are there -> Private, Protected, Public
visibility of Properties in classes are set to private\
Private properties in classes can be accessed only from within that class and 'friends'. Not even subclasses of that class can access these properties.\
Protected -> Less visible than Public but more visible than Private.\
Protected properties could be accessed by main class and all the sub classes in the heirarchy\
Can not accessed from outside of the class heirarchy\
Protected properties could be accessed from constructors may b? otherwise shows errors

## Error Handling

```c++
try
    {
        cout << Server::compute(A, B) << "\n";
    }
    catch(std::bad_alloc &memory)
    {
        cout << "Not enough memory\n";
    }
    catch (const std::exception &message)
    {
        cout << "Exception: " << message.what() << "\n";
    }
    catch (...)
    {
        cout << "Other Exception\n";
    }
```

## friend Declaration
The friend declaration appears in a class body and grants a function or another class access to private and protected members of the class where the friend declaration appears.

## Overloading Operator & functions
C++ allows you to specify more than one definition for a function name or an operator in the same scope, which is called function overloading and operator overloading respectively. When you call an overloaded function or operator, the compiler determines the most appropriate definition to use, by comparing the argument types you have used to call the function or operator with the parameter types specified in the definitions. The process of selecting the most appropriate overloaded function or operator is called overload resolution.

### Function Overloading in C++
You can have multiple definitions for the same function name in the same scope. The definition of the function must differ from each other by the types and/or the number of arguments in the argument list. You cannot overload function declarations that differ only by return type.
```c++
#include <iostream>
using namespace std;
 
class printData {
   public:
      void print(int i) {
        cout << "Printing int: " << i << endl;
      }
      void print(double  f) {
        cout << "Printing float: " << f << endl;
      }
      void print(char* c) {
        cout << "Printing character: " << c << endl;
      }
};

int main(void) {
   printData pd;
 
   // Call print to print integer
   pd.print(5);
   
   // Call print to print float
   pd.print(500.263);
   
   // Call print to print character
   pd.print("Hello C++");
 
   return 0;
}
```

### Operators Overloading in C++
You can redefine or overload most of the built-in operators available in C++. Thus, a programmer can use operators with user-defined types as well.
Overloaded operators are functions with special names: the keyword "operator" followed by the symbol for the operator being defined. Like any other function, an overloaded operator has a return type and a parameter list.

```c++
[returntype] operator[symbol](arguments)
```
```c++
//"<<" operator overloading
friend ostream& operator<<(ostream& out, Class& C){
    out << C.prop1 << " " << C.prop2 << " " << C.prop3;        
    return out; 
}
```
> Following is the list of operators, which can not be overloaded − "::" , ".*" , "." , "?:"

// First you will research on how to create a .h file and how to use it in C++ program. Then create 
// a  .h  file  named  as  arrayImplement.h  which  will  be  used  as  the  library  and  will  have  these 
// following functions. Demonstrate the use of that library in a test.cpp file.  
// (Student must follow the exact name of functions and files. The syntax alignment has to be as it 
// should be) 

#pragma once

//Functions for 1D array 
void input1DArray(int*, int);
void print1DArray(int*, int);
void reversePrint1DArray(int*, int);
int searchIn1DArray(int*, int, int); 
int findMax1DArray(int*, int); 
int findMin1DArray(int*, int);
void copy1DArray(int*, int*, int); 
 
 
// //Functions for 1D array 
void input2DArray(int**, int); 
void print2DArray(int**, int); 
// reversePrint2DArray(int **array, int size) 
// searchIn2DArray(int **array, int size, int searchKey) 
// findMax2DArray(int **array, int size) 
// findMin2DArray(int **array, int size) 
// copy2DArray(int **sourceArray, int **destinationArray, int size)
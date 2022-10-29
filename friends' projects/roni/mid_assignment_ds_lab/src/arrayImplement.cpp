#include<iostream>
#include "arrayImplement.h"

//Functions for 1D array 
void input1DArray(int *array, int size)
{
    for(int i=0; i<size; i++){
        std::cin >> array[i];
    }
}

void print1DArray(int *array, int size)
{
    for(int i=0; i<size; i++){
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void reversePrint1DArray(int *array, int size)
{
    int temp_arr[size];

    for(int i=0; i<size; i++){
        temp_arr[size-1-i] = array[i];
    }

    for(int i=0; i<size; i++){
        array[i] = temp_arr[i];
    }
}

int searchIn1DArray(int *array, int size, int searchKey)
{
    for(int i=0; i<size; i++){
        if(array[i] == searchKey){
            return i;
        }
    }

    return -1;
}

int findMax1DArray(int *array, int size)
{
    int max = array[0];

    for(int i=1; i<size; i++){
        if(array[i] > max){
            max = array[i];
        }
    }

    return max;
}

int findMin1DArray(int *array, int size)
{
    int min = array[0];

    for(int i=1; i<size; i++){
        if(array[i] < min){
            min = array[i];
        }
    }

    return min;
}

void copy1DArray(int *sourceArray, int *destinationArray, int size)
{
    for(int i=0; i<size; i++){
        destinationArray[i] = sourceArray[i];
    }
} 

//Functions for 2D array 
void input2DArray(int **array, int size)
{
    for(int i=0; i<size; i++){
        input1DArray(array[i], size);
    }
} 
void print2DArray(int **array, int size)
{
    for(int i=0; i<size; i++){
        print1DArray(array[i], size);
    }
}
// reversePrint2DArray(int **array, int size)
// {

// } 
// searchIn2DArray(int **array, int size, int searchKey)
// {

// }
// findMax2DArray(int **array, int size)
// {

// }
// findMin2DArray(int **array, int size)
// {

// }
// copy2DArray(int **sourceArray, int **destinationArray, int size)
// {

// }
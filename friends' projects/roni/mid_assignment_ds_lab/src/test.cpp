#include<iostream>
#include "arrayImplement.h"

#define MAX_SIZE 1000

int main()
{
    int array[MAX_SIZE], array2[MAX_SIZE];
    int size;

    // test for 1d arrays ...
    std::cout << "test for 1D array ....\n\n";

    std::cout << "size = ";
    std::cin >> size;

    std::cout << "input array elements: ";
    input1DArray(array, size);

    std::cout << "print array ...\n";
    print1DArray(array, size);

    int searchKey;
    std::cout << "Search Key = ";
    std::cin >> searchKey;
    std::cout << searchIn1DArray(array, size, searchKey) << std::endl;

    std::cout << findMax1DArray(array, size) << std::endl;

    std::cout << findMin1DArray(array, size) << std::endl;

    std::cout << "copying array to array2...\n";
    copy1DArray(array, array2, size);
    print1DArray(array2, size);

    std::cout << "reversing array .....\n";
    reversePrint1DArray(array, size);
    print1DArray(array, size);

    // test for 2d arrays ...
    int **array2d;

    std::cout << "test for 2D array ....\n\n";
    
    std::cout << "size = ";
    std::cin >> size;

    input2DArray(array2d, size);

    return 0;
}
/**
 * 2. Write a C++ program to create an integer array of size 7. Then take an
number from the user and print how many times that number occurs in
that array. You must take the elements of the array from the user.
For example,
Array_1 = {9,1,5,9,2,5,6}
Output:
Input a number to search: 9
The number occurs 2 times in the array
 */

#include<iostream>

int main()
{
	int size = 7;
	int array[size];
	int search_num, count=0;

	for(int i=0; i<size; i++){
		std::cin >> array[i];
	}

	std::cout << "Input a number to search: ";
	std::cin >> search_num;

	for(int i=0; i<size; i++){
		if(array[i] == search_num){
			count++;
		}
	}

	std::cout << "The number occurs "<< count << " times in the array";

	return 0;
}
/**
 * 1. Write a C++ program to create an integer array where size should be more
than five. Then make a new array from it without the prime elements and
print the new array. You must take the elements of the array from the user.
For example,
Array = {4,8,11,14,16,19}
Output: 4 8 14 16
**/

#include<iostream>

bool is_prime(int num){
	if(num <= 1){
		return false;
	}

	if(num <= 3){
		return true;
	}

	if(num%2==0 || num%3==0){
		return false;
	}

	for(int i=5; i*i <= num; i=i+6){
		if (num % i == 0 || num % (i + 2) == 0){
			return false;
		}
	}

	return true;
}

int main()
{
	int array[6], result_array[6];
	int count = 0;

	for(int i=0; i<6; i++){
		int temp;
		std::cin >> temp;
		array[i] = temp;

		if(!is_prime(temp)){
			result_array[count] = temp;
			count++;
		}
	}

	for(int i=0; i<count; i++){
		std::cout << result_array[i] << " ";
	}

	return 0;
}
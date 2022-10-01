/**
 * 3. Write a C++ program to create an integer array of size 12. Print the number
of time each element occurs in that array. You must take the elements of
the array from the user.
For example,
Array_1 = {4,2,9,1,5,2,9,1,4,1,5,9}
Output:
4 occurs = 2 times
2 occurs = 2 times
9 occurs = 3 times
1 occurs = 3 times
5 occurs = 2 times

 */

#include<iostream>

int main()
{
	int size = 12;
	int array[size];
	int max_num;

	std::cin >> array[0];
	max_num = array[0];

	for(int i=1; i<size; i++){
		std::cin >> array[i];

		if(array[i] > max_num){
			max_num = array[i];
		}
	}

	int count[max_num+1];

	for(int i=0; i<=max_num; i++){
		count[i] = 0;
	}

	for(int i=0; i<size; i++){
		count[array[i]]++;
	}

	for(int i=0; i<=max_num; i++){
		if(count[i] > 0){
			std::cout << i << " occurs = " << count[i] << " times\n";
		}
	}

	return 0;
}
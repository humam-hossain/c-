/**
 * 4. Write a C++ program of two integer arrays where size should be more than
five. Merge them and create a new array. Then print the new array in
descending order.
For example,
Array_1 = {11,3,6,8,1,5}
Array_2 = {12,9,4,2,10,7}
Output: 12 11 10 9 8 7 6 5 4 3 2 1
 */

#include<iostream>


int main()
{
	int size = 6;
	// std::cin >> size;

	int count = 0;
	int array_1[size], array_2[size], result_array[size*2];

	for(int i=0; i<size; i++){
		bool doesExists = false;

		std::cin >> array_1[i];

		for(int j=0; j<count; j++){
			if(result_array[j] == array_1[i]){
				doesExists = true;
			}
		}

		if(!doesExists){
			result_array[count] = array_1[i];
			count++;
		}
	}

	for(int i=0; i<size; i++){
		bool doesExists = false;

		std::cin >> array_2[i];

		for(int j=0; j<count; j++){
			if(result_array[j] == array_2[i]){
				doesExists = true;
			}
		}

		if(!doesExists){
			result_array[count] = array_2[i];
			count++;
		}
	}

	for(int i=0; i<count; i++)
	{		
		for(int j=i+1;j<count;j++)
		{
			if(result_array[i]>result_array[j])
			{
				int temp  =result_array[i];
				result_array[i]=result_array[j];
				result_array[j]=temp;
			}
		}
	}

	for(int i=count-1; i>=0; i--){
		std::cout << result_array[i] << " ";
	}

	return 0;
}
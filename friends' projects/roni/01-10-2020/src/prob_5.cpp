/**
 * 5. Write a C++ program of two integer arrays where size should be more than
five. Then make a new array with the even elements between them and
print the new array.
For example,
Array_1 = {4,1,8,5,2,11}
Array_2 = {3,6,9,10,7,4}
Output: 2 4 4 6 8 10
 */
#include<iostream>

int main()
{
	int size = 6;
	// std::cin >> size;

	int count = 0;
	int array_1[size], array_2[size], result_array[size*2];

	for(int i=0; i<size; i++){
		std::cin >> array_1[i];

		if(array_1[i] % 2 == 0){
			result_array[count] = array_1[i];
			count++;
		}
	}

	for(int i=0; i<size; i++){
		std::cin >> array_2[i];

		if(array_2[i] % 2 == 0){
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

	for(int i=0; i<count; i++){
		std::cout << result_array[i] << " ";
	}

	return 0;
}
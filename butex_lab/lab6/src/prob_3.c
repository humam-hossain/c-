// 3. write a c program to search a number in an array. It will print the index of the element if it is found.
// Otherwise, it will print "Not Found".
#include<stdio.h>

int main()
{
	int size;
	scanf("%d", &size);

	int i, key;
	double arr[size], num;
	
	for(i=0; i<size; i++){
		scanf("%lf", &arr[i]);
	}

	printf("\nSearch = ");
	scanf("%lf", &num);

	key = -1;
	for(i=0; i<size; i++){
		if(num == arr[i]){
			key = i;
			break;
		}
	}

	if(key == -1){
		printf("Not Found");
	}else{
		printf("Found in index = %d", key);
	}

	return 0;
}
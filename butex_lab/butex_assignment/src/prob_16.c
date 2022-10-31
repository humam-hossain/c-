//  Write a program in C to display the cube of the number upto given an integer.

#include<stdio.h>
#include<math.h>

int main()
{
	int i, j, num, cube;

	scanf("%d", &num);

	for(i=1; i<=num; i++){
		cube = 1;
		printf("%d^3 = ", i);

		for(j=0; j<3; j++){
			cube *= i;
		}

		printf("%d\n", cube);
	}

	return 0;
}
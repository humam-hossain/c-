// 14. a c program to print the Armstrong numbers within a range.
#include <stdio.h>
#include <math.h>

int main()
{
	int start, end, temp, num, check_num, digits;

	scanf("%d %d", &start, &end);

	for (num = start; num <= end; num++){
		check_num = 0;
		digits = 0;

		temp = num;
		while(temp!=0){
			temp = temp / 10;
			digits++;
    	}

		temp = num;
		while (temp != 0){
			check_num += pow((temp % 10), digits);
			temp /= 10;
		}

		if (num == check_num){
			printf("%d\t", num);
		}
	}

	return 0;
}

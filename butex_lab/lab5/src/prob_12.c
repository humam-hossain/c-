// 11. write a c program to print the palindrome numbers within a range

#include<stdio.h>

int main()
{
	int start, end, num, temp, reverse, rem;

	scanf("%d %d", &start, &end);

	for(num=start; num<=end; num++){
		reverse = 0;
		temp = num;
		
		while(temp != 0){
			rem = temp % 10;
			reverse = reverse * 10 + rem;
			temp /= 10;
		}

		if(reverse == num){
			printf("%d\t", num);
		}
	}

	return 0;
}
// 11. write a c program to check whether a number is palindrome or not

#include<stdio.h>

int main()
{
	int num, temp, reverse=0, rem;

	scanf("%d", &num);

	temp = num;
	while(temp != 0){
		rem = temp % 10;
		reverse = reverse * 10 + rem;
		temp /= 10;
	}

	if(reverse == num){
		printf("Palindrome");
	}else{
		printf("Not Palindrome");
	}

	return 0;
}
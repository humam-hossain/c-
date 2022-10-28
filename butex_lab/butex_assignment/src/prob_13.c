//  Write a C program to enter a number and print it in words.

#include<stdio.h>

int main()
{
	int num, temp, temp2=0;

	scanf("%d", &num);
	temp = num;

	// reverse the number
	while(temp != 0){
		temp2 = temp2*10 + temp%10;
		temp /= 10;
	}

	temp = temp2;
	while(temp != 0){
		switch (temp % 10)
		{
		case 1:
			printf("One ");
			break;
		
		case 2:
			printf("Two ");
			break;
		
		case 3:
			printf("Three ");
			break;
		
		case 4:
			printf("Four ");
			break;
		
		case 5:
			printf("Five ");
			break;
		
		case 6:
			printf("Six ");
			break;
		
		case 7:
			printf("Seven ");
			break;
		
		case 8:
			printf("Eight ");
			break;
		
		case 9:
			printf("Nine ");
			break;
		
		default:
			break;
		}

		temp /= 10;
	}

	return 0;
}
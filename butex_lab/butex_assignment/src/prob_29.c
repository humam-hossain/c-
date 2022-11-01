//  Write a program in C to Check Whether a Number can be Express as Sum of Two Prime Numbers.

#include<stdio.h>

int main()
{
	int number, num1, num2, count, flag, i;

	scanf("%d", &number);

	for(num1=2; num1<number; num1++){
		count = 0;
		flag = 0;
		for(i=1; i<=num1; i++){
			if(num1%i == 0){
				count++;
			}
		}

		if(count == 2){
			flag = 1;
		}

		if(flag == 1){
			for(num2=number-1; num1+num2>=number; num2--){
				count = 0;
				flag = 0;
				for(i=1; i<=num2; i++){
					if(num2%i == 0){
						count++;
					}
				}

				if(count == 2){
					flag = 1;
				}
				if(flag == 1 && num1+num2 == number){
					printf("%d + %d = %d\n", num1, num2, number);
				}
			}
		}
	}

	return 0;
}
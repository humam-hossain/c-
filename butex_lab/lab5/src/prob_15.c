// 15. write a c program to check whether a number is a strong number or not

#include<stdio.h>

int main()
{
	int i, num, temp, result, sum=0;

	scanf("%d", &num);

	temp = num;
	while (temp!=0)
	{
		result=1;
		for(i=1; i<=temp%10; i++){
			result *= i;
		}
		sum += result;
		temp /= 10;
	}

	if(sum == num){
		printf("Strong Number");
	}else{
		printf("not Strong Number");
	}
	
	return 0;
}
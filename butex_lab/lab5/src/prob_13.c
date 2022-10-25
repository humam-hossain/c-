// 13. a c program to check whether a number is an Armstrong number or not. 
#include<stdio.h>
#include<math.h>

int main()
{
	int temp, num, check_num=0;

	scanf("%d", &num);
	temp = num;

	while(temp != 0){
		check_num += pow((temp%10),3);
		temp /= 10;
	}

	if(num == check_num){
		printf("armstrong number");
	}else{
		printf("not armstrong number");
	}
	return 0;
}
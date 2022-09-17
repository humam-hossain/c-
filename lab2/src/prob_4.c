#include<stdio.h>

int main()
{
	int a, b;

	scanf("%d %d", &a, &b);

	printf("largest number = ");
	if(a > b){
		printf("%d", a);
	}else{
		printf("%d", b);
	}

	return 0;
}

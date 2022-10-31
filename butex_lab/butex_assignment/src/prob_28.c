//  Write a program in c to find the Sum of GP series.

#include<stdio.h>

int main()
{
	int a, r, n, sum, i, t;

	printf("a = ");
	scanf("%d", &a);
	printf("r = ");
	scanf("%d", &r);
	printf("n = ");
	scanf("%d", &n);

	sum=0;
	t=a;
	for(i=1; i<=n; i++){
		printf("%d ", t);

		if(i != n){
			printf("+ ");
		}

		sum += t;
		t *= r;
	}

	printf("= %d", sum);

	return 0;
}
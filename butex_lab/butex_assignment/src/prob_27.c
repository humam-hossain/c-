//  Write a c program to find out the sum of an A.P. series.
// Sn = n/2 * {2a + (n-1)*d}

#include<stdio.h>

int main()
{
	int a, d, n, sum, i, t;

	printf("a = ");
	scanf("%d", &a);
	printf("d = ");
	scanf("%d", &d);
	printf("n = ");
	scanf("%d", &n);

	sum = 0;
	t = a;
	for(i=1; i<=n; i++){
		printf("%d ", t);
		sum += t;

		if(i!=n){
			printf("+ ");
		}
		t += d;
	}

	// sum = (int)(n/2.0 * (2*a + (n-1) * d));
	printf(" = %d", sum);

	return 0;
}
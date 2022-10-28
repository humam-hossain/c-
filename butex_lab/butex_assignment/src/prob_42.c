/*
n=5
*
**
* *
*  *
*****

*/

#include<stdio.h>

int main()
{
	int i, j, n;

	scanf("%d", &n);

	for(i=0; i<n; i++){
		for(j=0; j<=i; j++){
			if(i==0 || i==n-1){
				printf("*");
			}else{
				if(j==0 || j==i){
					printf("*");
				}else{
					printf(" ");
				}
			}
		}

		printf("\n");
	}

	return 0;
}
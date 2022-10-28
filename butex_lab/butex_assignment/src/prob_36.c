/*
5
*****
** **
* * *
** **
*****

*/

#include<stdio.h>

int main()
{
	int row, col, n;

	scanf("%d", &n);

	for(row=1; row<=n; row++){
		for(col=1; col<=n; col++){
			if(row == 1 || row == n){
				printf("*");
			}else{
				if(col==1 || col == n){
					printf("*");
				}else if(row == col){
					printf("*");
				}else if((n+1)-row == col){
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
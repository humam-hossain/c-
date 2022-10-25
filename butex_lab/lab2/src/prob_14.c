#include<stdio.h>
int main()
{
	double a, b;
	char op;

	printf("======= Calculator =======\n");
	scanf("%lf %c %lf", &a, &op, &b);

	switch (op)
	{
	case '+':
		printf("= %lf", a + b); break;
	case '-':
		printf("= %lf", a - b); break;
	case '*':
		printf("= %lf", a * b); break;
	case '/':
	    if(b != 0){
            printf("= %lf", a/b);
	    }else{
            printf("Invalid input");
	    }
		break;
	case '%':
	    if(b != 0){
            printf("= %lf", (int)a%(int)b);
	    }else{
            printf("Invalid input");
	    }
	    break;
	default:
		printf("Invalid input"); break;
	}

	return 0;
}

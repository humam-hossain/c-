#include<stdio.h>

int main()
{
	char ch;

	printf("character = ");
	scanf("%c", &ch);

	if(ch >= 'A' && ch <= 'Z'){
		printf("Result: capital letter");
	}else if(ch >= 'a' && ch <= 'z'){
		printf("Result: small letter");
	}else{
		printf("Result: others");
	}

	return 0;
}

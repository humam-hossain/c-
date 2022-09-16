// 9. write a c program to check whether a character is a captital letter or a small letter or others.

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
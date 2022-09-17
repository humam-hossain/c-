#include <stdio.h>

int main()
{
	char ch;

	printf("character = ");
	scanf("%c", &ch);

	printf("Result: ");
	if (ch == ' '){
		printf("white space");
	}else if (ch >= '0' && ch <= '9')
	{
		printf("digit");
	}else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'
           || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
		printf("vowel");
	}else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
	{
		printf("consonant");
	}else{
		printf("special character");
	}

	return 0;
}

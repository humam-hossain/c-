#include <stdio.h>

int main()
{
	char ch;

	printf("character = ");
	scanf("%c", &ch);

	printf("Result: ");
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
	{
		switch (ch)
		{
			case 'A': case 'E': case 'I': case 'O': case 'U':
            case 'a': case 'e': case 'i': case 'o': case 'u':
				printf("vowel");

				break;
			default:
				printf("consonant");
				break;
		}
	}

	return 0;
}

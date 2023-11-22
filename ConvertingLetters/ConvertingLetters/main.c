#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct TreeNode
{
	char* str;
	struct TreeNode* left;
	struct TreeNode* right;
};

void changeStringToSmall(char* str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
}

int main(int argc, char* argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%d : %s\n", i, *(argv + i));
	}

	char string[] = "aAbBcCdD";

	if (strcmp(argv[1], "Small") == 0)
	{
		printf("To jest male\n");
		changeStringToSmall(argv[1]);
		printf("%s\n", argv[1]);
	}
	else if (strcmp(argv[1], "Big") == 0)
	{
		printf("To jest duze\n");
	}
	else
	{
		printf("Brak odpowiedniej instrukcji\n");
	}

	return 0;
}
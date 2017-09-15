#include <stdio.h>

int my_strcmp(char *a, char *b)
{
	while (*a && *b && *a == *b) { ++a; ++b; }
	return (unsigned char)(*a) - (unsigned char)(*b);
}

int main(int argc, char **argv)
{
	char key[32];
	printf("Enter a key:");
	scanf("%31s", key);
	if (my_strcmp(key, "S3cr3tKeY") ==0)
	{
		printf("Correct!\n");
	}

	return 0;
}
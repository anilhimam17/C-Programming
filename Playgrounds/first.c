#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	printf("Hello There\n");

	// Taking user input
	char *name = calloc(50, sizeof(char));
	printf("Enter your name: ");
	gets(name);

	// Length of the string
	int length = strlen(name);
	printf("%i\n", length);

	// Pointer Arithmetic
	for (int i = 0; i < length; i++)
	{
		printf("%p \t %i \t %c\n", (name + i), *(name + i), *(name + i));
	}

	free(name);
	return 0;
}
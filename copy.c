#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	printf("Hello There\n");

	// Memory for the string
	char *name = calloc(50, sizeof(char));
	puts("Enter Name: ");
	gets(name);

	// Memory for the copy string
	int length = strlen(name);
	char *copy = calloc(50, sizeof(char));

	/*
	Using loops to copy the string
	for (int i = 0; i < length; i++)
	{
		*(copy + i) = *(name + i);
	}
	*/

	// Using string function to copy
	strcpy(copy, name);

	// Result copy
	for (int i = 0; i < length; i++)
	{
		printf("%c\n", *(copy + i));
	}

	free(name);
	free(copy);
	return 0;
}
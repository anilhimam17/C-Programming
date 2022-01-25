#include <stdio.h>

int main(int argc, char const *argv[])
{
	// Testing pointer comparison of string
	char *name1 = "Anil Himam";
	char *name2 = "Anil Himam";

	// Testing array comparison of string
	char name3[20] = "Anil Himam";
	char name4[20] = "Anil Himam";

	if (name1 == name2)
	{
		printf("Woah C you gotta be kidding you are smart\n");
	}

	/*else if (name3 == name4)
	{
		printf("Woah C you gotta be kidding you are smart\n");
	}*/

	else
	{
		printf("I know you are dumb C I know, what was I thinking\n");
	}

	return 0;
}
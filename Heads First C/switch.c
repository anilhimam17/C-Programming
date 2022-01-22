#include <stdio.h>

int main(int argc, char const *argv[])
{
	int val;
	puts("Enter integer value between 1 - 5: ");
	scanf("%i", &val);

	// Switch Case
	switch (val)
	{
		case 1:
			puts("The entered value was 1");

		case 2:
			puts("The entered value was 2");

		case 3:
			puts("The entered value was 3");

		case 4:
			puts("The entered value was 4");

		case 5:
			puts("The entered value was 5");

		default:
			puts("The entered value was out of the box !!!");
	}
	return 0;
}
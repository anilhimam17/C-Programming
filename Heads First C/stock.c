#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("Welcome to the bar\n");

	// Loop for service
	int stock = 180;
	int order;
	while (stock > 0)
	{
		printf("The current stock available is: %i\n", stock);
		printf("Enter order: ");
		scanf("%i", &order);

		if (order <= stock)
		{
			printf("Here's your order of %i glasses\n", order);
			stock -= order;
		}

		else
		{
			break;
		}
	}
	printf("We're out of stock, baby!\n");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char cardName[3];
	puts("Enter the name of the card: ");
	gets(cardName);

	// Value of the card
	int val;
	if (cardName[0] == 'K' || cardName[0] == 'Q' || cardName[0] == 'J')
		val = 10;
	else if (cardName[0] == 'A')
		val = 11;
	else
		val = atoi(cardName);

	// Card Count
	if (val >= 3 && val <= 6)
		puts("The card count has gone up\n");
	else
		puts("The card count has gone down\n");
	return 0;
}
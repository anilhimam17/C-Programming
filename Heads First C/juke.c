#include <stdio.h>

int main(int argc, char const *argv[])
{
	int len;
	puts("Enter the number of tracks in the jukebox: ");
	scanf("%i", &len);

	// Populating the array
	// Len for no of strings to be entered and 100 for length of each string entered
	char tracks[len][100];
	for (int i = 0; i < len; i++)
	{
		puts("Enter the name of the track: ");
		gets(tracks[i]);
	}

	// All the tracks entered
	for (int i = 0; i < len; i++)
	{
		printf("%s\n", tracks[i]);
	}
	return 0;
}
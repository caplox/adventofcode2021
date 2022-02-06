#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int partOne()
{
	FILE * fPointer = fopen("input.txt", "r");
	char command[50];
	int num = 0;
	int x = 0;
	int y = 0;
	
	for ( int i = 0; i < 1000; i++ )
	{
		fscanf(fPointer, "%s", &command);
		fscanf(fPointer, "%d", &num);
		
		switch (strlen(command))
		{
			case 7:
				x = x+num;
				break;
			case 2:
				y = y-num;
				break;
			case 4:
				y = y+num;
				break;
		}
	}
	return x*y;
}

int partTwo()
{
	FILE * fPointer = fopen("input.txt", "r");
	char command[50];
	int num = 0;
	int x = 0;
	int y = 0;
	int aim = 0;
	
	for ( int i = 0; i < 1000; i++ )
	{
		fscanf(fPointer, "%s", &command);
		fscanf(fPointer, "%d", &num);
	
		switch (strlen(command))
		{
			case 7:
				x = x+num;
				y += aim*num;
				break;
			case 2:
				aim = aim-num;
				break;
			case 4:
				aim = aim+num;
				break;
		}
	}
	return x*y;
}

int main()
{
	printf("%d\n", partOne());
	printf("%d\n", partTwo());
}

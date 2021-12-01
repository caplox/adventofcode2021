#include <stdio.h>
#include <stdlib.h>

int calcDistance()
{
    FILE * fPointer = fopen("input.txt", "r");
    int line;
    int numList[2000];
    int larger = 0;

    for (int i = 0; i < 2000; i++ )
	{
		fscanf(fPointer, "%d", &line);
        numList[i] = line;
	}
    for ( int j = 0; j < 2000; j++ )
    {
        if ( numList[j] < numList[j+1] )
        {
            larger++;
        }
    }
    return larger;
    fclose(fPointer);
}

int main()
{
    printf("%d\n", calcDistance());
}

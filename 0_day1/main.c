#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fPointer = fopen("input.txt", "r");
    int line;
    int partOne = 0;
    int partTwo = 0;
    int numList[2000];

    for (int i = 0; i < 2000; i++ )
    {
        fscanf(fPointer, "%d", &line);
        numList[i] = line;
    }

    for ( int j = 0; j < 2000; j++ )
    {
        partOne = partOne + (numList[j] < numList[j+1]);
    }

    for ( int k = 0; k < 2000; k++ )
    {
        partTwo = partTwo + (numList[k-2] < numList[k+1]);
    }

    printf("%d\n", partOne);
    printf("%d\n", partTwo);
}

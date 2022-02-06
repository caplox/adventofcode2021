// Run by typing: "./a.out < input.txt"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define BINLENGTH 12
#define BINAMOUNT 1000

int partOne()
{
    int counter;
    char c;
    char bin_nums[BINAMOUNT][BINLENGTH];
    int gamma = 0, epsilon = 0;
    // loop to put the binary numbers in a 2d array
    for (int i = 0; i < BINAMOUNT*BINLENGTH; i++)
    {
        for (int j = 0; (c = getchar()) != EOF && (c != '\n'); j++)
        {
            bin_nums[i][j] = c;
        }
    }

    for (int k = 0; k < BINLENGTH; k++)
    {
        counter = 0;
        for (int l = 0; l < BINAMOUNT; l++)
        {
            //check if 1 or 0 is more common
            switch (bin_nums[l][k])
            {
                case '1':
                    counter++;
                    break;
                case '0':
                    counter--;
                    break;
            }
        }
        // if 1 is more common (counter > 0), add the 2^position-1 (-1 because you start counting at 0 instead of 1) to gamma, otherwise add that amount to epsilon
        if (counter > 0)
            gamma = gamma + pow(2, (BINLENGTH-1-k));
        else
            epsilon = epsilon + pow(2, (BINLENGTH-1-k));
    }
    return gamma * epsilon;
}

int partTwo()
{
    //still need to add code
}

int main()
{
    printf("%d\n", partOne());
    //printf("%d\n", partTwo());
    return 0;
}

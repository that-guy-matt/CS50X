#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // initialize variables
    int height = 0;
    // prompt user for height input
    do
    {
        height = get_int("Height: ");
    }
    // make sure input is greater than 1 and less than 8, inclusive
    while ((height < 1) || (height > 8));

    // generate row with for loop
    for (int i = 0; i < height; i++)
    {
        // for loop to generate space or hash
        for (int j = 0; j < height; j++)
        {
            // this calculates whether the current character should be a hash
            // plus 1 to j ensures that there will be at least 1 hash
            // height - i puts the first hash on the first line... honestly not sure why
            // I will need to come back to this when my understanding of programming is better
            if (j + 1 >= height - i)
            {
                printf("#");
            }
            // else print space
            else
            {
                printf(" ");
            }
        }
        // print 2 spaces
        printf("  ");
        // for loop to print last hashes
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
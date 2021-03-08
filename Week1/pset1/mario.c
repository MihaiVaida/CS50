#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Get a number from the user that represents the height of the pyramid
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    // Draws the pyramid n times tall, n times wide
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // This will add n-1 spaces from the top to the bottom. Ex: for n=8, 7 spaces on the first row followed by #, 6 spaces on the second row, two #, etc.
            if (i + j < n - 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
    
}

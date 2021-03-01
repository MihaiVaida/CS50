#include <cs50.h>
#include <stdio.h>

const int N = 3;

float avg(int length, int array[]);

int main(void)
{
    
    int n = get_int("Nr. of scores: ");

    int scores[n];

    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score %i: ", i + 1);
    }

    printf("Average: %.2f\n", avg(n, scores));
}

float avg(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return (float) sum / (float) length;
}

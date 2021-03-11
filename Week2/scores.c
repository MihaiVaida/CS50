#include <cs50.h>
#include <stdio.h>

const int TOTAL = 3;

float average(int x, int y[]);

int main(void)
{
    // int score1 = 72;
    // int score2 = 73;
    // int score3 = 33;

    // int scores[3];
    // scores[0] = get_int("Scores: ");
    // scores[1] = get_int("Scores: ");
    // scores[2] = get_int("Scores: ");

    int scores[TOTAL];
    for (int i = 0; i < TOTAL; i++)
    {
        scores[i] = get_int("Score: ");
    }

    // printf("Average: %f\n", (score1 + score2 + score3) / (float) 3 or 3.0);

    printf("Average: %.2f\n", average(TOTAL, scores));
}

float average(int x, int y[])
// x = length, TOTAL. y = the array, scores[]
{
    int sum = 0;
    for (int i = 0; i < x; i++)
    {
        sum += y[i];
    }
    return sum / (float) x;
}

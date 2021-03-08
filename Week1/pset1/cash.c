#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float n;
    do
    {
        n = get_float("Change owed: ");
        // Example: user inputs 1.19
    }
    while (n <= 0);

    int cents = round(n * 100);
    // Result: 119 cents

    int a = cents / 25;
    // 119/25 = 4

    int amod = cents % 25;
    // 119%25=19

    int b = amod / 10;
    // 19/10=1
    int bmod = amod % 10;
    // 19%10=9

    int c = bmod / 5;
    // 9/5=1
    int cmod = bmod % 5;
    // 9%5=4

    int d = cmod / 1;
    // 4/1=4

    int total = a + b + c + d;
    // 4 + 1 + 1 + 4

    // Less lines of code:
    // int count25 = (cents / 25);
    // int count10 = (cents % 25) / 10;
    // int count5  = ((cents % 25) % 10) / 5;
    // int count1 = (((cents % 25) % 10) % 5) / 1;

    printf("%i\n", total);

    // printf("25 cents coins: %i\n", a);
    // printf("10 cents coins: %i\n", b);
    // printf("5 cent coins: %i\n", c);
    // printf("1 cent coins: %i\n", d);
}

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input: ");
    printf("Output: ");
    // int n = strlen(s); - this can be included in the for loop
    // for (int i = 0; s[i] != '\0'; i++)
    // for (int i = 0; i < strlen(s); i++) - this better written
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}

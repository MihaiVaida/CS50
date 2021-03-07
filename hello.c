#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Ask for the user's name
    string name = get_string("What is your name?\n");
    
    // Print Hello, [username]!
    printf("Hello, %s!\n", name);
}
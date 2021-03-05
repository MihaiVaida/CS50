#include <stdio.h>

void meow(void);

int main(void)
{
    // Bad style
    // printf("meow\n");
    // printf("meow\n");
    // printf("meow\n");
    
    for (int i = 0; i < 3; i++)
    {
        // printf("meow\n"); ---> I can create a function
        
        meow();
    }
}

void meow(void)
{
    printf("meow\n");
}

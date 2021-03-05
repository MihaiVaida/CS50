#include <stdio.h>

void meow(int n);

int main(void)
{
    // Bad style
    // printf("meow\n");
    // printf("meow\n");
    // printf("meow\n");
    
    // for (int i = 0; i < 3; i++)
    // {
        // printf("meow\n"); ---> I can create a function
        
        meow(5);
    // }
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
    printf("meow\n");
    }
}

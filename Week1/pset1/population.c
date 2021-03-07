#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    
    int start;
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);
    
    // TODO: Prompt for end size
    
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);
    
    // TODO: Calculate number of years until we reach threshold
    
    int f;
    for (f = 0; start < end; f++)
    {  
        int born = start / 3;
        int dead = start / 4;
        start = start + born - dead;
    }
    
    // TODO: Print number of years
    
    printf("Years: %i\n", f);
}

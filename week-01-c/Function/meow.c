//print meow 3 times
#include <stdio.h>

void meow(void);
int main(void)
{
    int i;
    for(i=1;i<=3;i++)
    {
        meow();
    }
}

void meow(void)
{
    printf("Meow\n");
}
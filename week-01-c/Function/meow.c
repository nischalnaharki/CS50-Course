//print meow 3 times
#include <stdio.h>

void meow(int n);
int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    meow(n);
}

void meow(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("Meow\n");
    }
    
}
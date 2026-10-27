#include<stdio.h>
#include <stdbool.h> 

int main(void)
{
    int i,n;
    do
    {
        printf("Enter a number: ");
        scanf("%d",&n);
        
    }while(n<=0);
    

    for(i=1;i<=n;i++)
    {
        printf("Meow\n");
    }
}
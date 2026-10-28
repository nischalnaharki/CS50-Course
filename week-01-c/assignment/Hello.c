#include <stdio.h>
int main()
{
    char name[50];

    //input name
    printf("What's your name? ");
    scanf("%49s", name);

    //display name
    printf("Hello, %s\n", name);
    return 0;
}

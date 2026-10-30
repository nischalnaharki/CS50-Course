#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int i=0, n= strlen(argv[1]); i < n; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    int key = atoi(argv[1]);

    while (key > 26)
    {
        key = key - 26;
    }

    char text[1000];
    printf("plaintext: ");
    scanf("%999[^\n]", text);

    printf("ciphertext: ");
    for (int i = 0; text[i] != '\0'; i++)
    {
        char c = text[i];
        if (c >= 'a' && c <= 'z')
        {
            c = (c - 'a' + key) % 26 + 'a';
        }
        else if (c >= 'A' && c <= 'Z')
        {
            c = (c - 'A' + key) % 26 + 'A';
        }
        printf("%c", c);
    }
    printf("\n");
}

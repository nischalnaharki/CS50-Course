#include <stdio.h>
#include <string.h>

int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int CalPoints(char word[]);
int main()
{
    char word1[100];
    char word2[100];

    printf("Enter first word: ");
    scanf("%99s", word1);

    printf("Enter second word: ");
    scanf("%99s", word2);

    int score1 = CalPoints(word1);
    int score2 = CalPoints(word2);

    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

}

int CalPoints(char word[])
{
    int point = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        char letter = word[i];
        if (letter >= 'A' && letter <= 'Z')
        {
            letter += 32; // Convert to lowercase
        }
        
        if (letter >= 'a' && letter <= 'z')
        {
            point += points[letter - 'a'];
        } 
    }
    return point;
}
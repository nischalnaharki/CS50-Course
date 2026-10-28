#include <stdio.h>

void PrintPyramid(int height);
int InputHeight();
int main()
{
    int height;

    height = InputHeight();

    PrintPyramid(height);
    return 0;
}

int InputHeight()
{
    int height;
    do
    {
        printf("Enter height: ");
        scanf("%d", &height);
        if (height <= 0)
        {
            printf("Try Again!\n");
        }
    }
    while (height <= 0);

    return height;
}

void PrintPyramid(int height)
{

    for (int i = 1; i <= height; i++)
    {
        // space before left pyramid
        for (int k = height - i; k > 0; k--)
        {
            printf("  ");
        }

        // Left pyramid
        for (int j = 0; j < i; j++)
        {

            printf("#");
        }

        // gap between pyramid
        printf(" ");

        // Right Pyramid
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}

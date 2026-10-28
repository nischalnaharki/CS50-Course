//Number of coins to give back as change
#include <stdio.h>

int main()
{
    int change;

    do
    {
        printf("Enter change: ");
        if(scanf("%d",&change) != 1)
        {
            printf("Invalid input. Please enter a valid integer.\n");
            change= -1; // Set change to -1 to continue the loop
            continue;
        }

        if (change < 0)
        {
            printf("Try Again!\n");
        }
        
    }while (change < 0);

    int Quarters = change / 25;
    change = change % 25;

    int Dimes = change / 10;
    change = change % 10;

    int Nickels = change / 5;
    change = change % 5;

    int Pennies = change / 1;
    
    int coins= Quarters + Dimes + Nickels + Pennies;
    printf("Number of Coins: %d\n", coins);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int GenerateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int main()
{
    int Pscore = 0, Cscore = 0, choice;
    printf("\t----------WELCOME----------\t\n");
    printf("Use 1 for ROCK,2 for PAPER and 3 for SCISSORS:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Enter your Choice:");
        scanf("%d", &choice);
        int computer = GenerateRandomNumber(2) + 1;
        printf("Computer Choice is %d\n", GenerateRandomNumber(2) + 1);
        if (choice == 1)
        {
            if (computer == 1)
            {
                printf("DRAW\n");
            }
            if (computer == 2)
            {
                printf("COMPUTER WINS\n");
                Cscore++;
            }
            if (computer == 3)
            {
                printf("PLAYER WINS\n");
                Pscore++;
            }
        }
        else if (choice == 2)
        {
            if (computer == 2)
            {
                printf("DRAW\n");
            }
            if (computer == 1)
            {
                printf("COMPUTER WINS\n");
                Cscore++;
            }
            if (computer == 3)
            {
                printf("PLAYER WINS\n");
                Pscore++;
            }
        }
        else if (choice == 3)
        {
            if (computer == 3)
            {
                printf("DRAW\n");
            }
            if (computer == 2)
            {
                printf("COMPUTER WINS\n");
                Cscore++;
            }
            if (computer == 1)
            {
                printf("PLAYER WINS\n");
                Pscore++;
            }
        }
        else
        {
            printf("Invalid Input!!!\n");
        }
    }
    if (Pscore > Cscore)
    {
        printf("PLAYER Wins by %d scores\n", Pscore);
    }
    else if (Pscore < Cscore)
    {
        printf("COMPUTER Wins by %d scores\n", Cscore);
    }
    else if (Pscore = Cscore)
    {
        printf("DRAW\n");
    }
    return 0;
}
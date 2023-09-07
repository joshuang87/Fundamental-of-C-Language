#include <stdio.h>
#include <string.h>

struct Player
{
    /* data */
    char name[15];
    int score;
};


int main()
{
    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Joshua");
    player1.score = 10;

    strcpy(player2.name, "Joel");
    player1.score = 2;

    printf("Player 1 Name : %s\n", player1.name);
    printf("Player 1 Score : %d\n", player1.score);

    printf("Player 2 Name : %s\n", player2.name);
    printf("Player 2 Score : %d\n", player2.score);

    return 0;
}
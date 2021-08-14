#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "Game.h"

#define NAME_SIZE 16
struct Player
{
    char * Name;
    int Hp;

};

void Init(struct Player *player);

int main(void)
{
    // Gameover flag
    bool gameOver =false;
    // Create struct in main void    
    struct Player player;
    // Assign player's address to struct to allow for changes in variables 
    Init(&player);

    // test print
    printf("%s\n",player.Name);
    printf("%d\n",player.Hp);

    // Gameover flag
    while(!gameOver)
    {
    }

    // Return with exit code of 0
    return 0;
}
// Init sets up the struct player's variables
void Init(struct Player *player)
{
    printf("Name: ");   
    player->Name = malloc(NAME_SIZE*sizeof(char));
    scanf("%[^\n]%*c", player->Name);
    player->Hp = 10;
}

void GameLoop()
{
}


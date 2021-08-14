#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "Game.h"
#include "Player.h"

int main(void)
{
    struct Player player;
    Init(&player);
    PrintPlayerInfo(player);

    return 0;
}
// Init sets up the struct player's variables
void Init(struct Player *player)
{
    printf("Name: ");
    player->Name = malloc(NAME_SIZE * sizeof(char));
    scanf("%[^\n]%*c", player->Name);
    player->Hp = 10;
}
void PrintPlayerInfo(const struct Player player)
{
    printf("%s\n", player.Name);
    printf("%d\n", player.Hp);
}

void GameLoop()
{
}

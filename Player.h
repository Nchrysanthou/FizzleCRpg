#ifndef PLAYER_H
#define PLAYER_H

#define NAME_SIZE 16

struct Player
{
    char *Name;
    int Hp;
};
void Init(struct Player *player);

void PrintPlayerInfo(const struct Player player);

#endif
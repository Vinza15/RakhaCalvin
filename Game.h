#ifndef GAME_H
#define GAME_H

#include "Player.h"

class Game {
    Table* tables[4];
    Player player;
    Customer* queue[2];
    int currentQueueIndex;

public:
    Game();
    void placeNextCustomerAtTable(int tableNumber);
    void gameMenu();
};

#endif

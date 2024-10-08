#ifndef PLAYER_H
#define PLAYER_H

#include "Table.h"

class Player {
public:
    void takeOrder(Table* table);
    void deliverOrder(Table* table, int orderTableNumber);
    void cleanTable(Table* table);
};

#endif

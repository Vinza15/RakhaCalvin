#ifndef PLAYER_H
#define PLAYER_H

#include "Table.h"

// Kelas Player merepresentasikan pemain yang mengelola pesanan dan meja
class Player {
public:
    // Fungsi untuk mengambil pesanan dari meja
    void takeOrder(Table* table);

    // Fungsi untuk mengantar pesanan ke meja
    void deliverOrder(Table* table, int orderTableNumber);

    // Fungsi untuk membersihkan meja
    void cleanTable(Table* table);
};

#endif
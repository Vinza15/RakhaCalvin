#ifndef GAME_H
#define GAME_H

#include "Player.h"

// Kelas Game merepresentasikan permainan utama
class Game {
    Table* tables[4];         // Array pointer ke objek Table, merepresentasikan 4 meja
    Player player;            // Objek Player, merepresentasikan pemain
    Customer* queue[2];       // Array pointer ke objek Customer, merepresentasikan antrian pelanggan
    int currentQueueIndex;    // Indeks saat ini dalam antrian pelanggan

public:
    // Konstruktor untuk menginisialisasi game
    Game();

    // Fungsi untuk menempatkan pelanggan berikutnya di meja tertentu
    void placeNextCustomerAtTable(int tableNumber);

    // Fungsi untuk menampilkan menu permainan
    void gameMenu();
};

#endif
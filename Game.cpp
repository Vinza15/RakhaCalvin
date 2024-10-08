#include "Game.h"

Game::Game() : currentQueueIndex(0) {
    for (int i = 0; i < 4; i++) {
        tables[i] = new Table(i + 1);
    }
    queue[0] = new Customer(1);
    queue[1] = new Customer(2);
}

void Game::placeNextCustomerAtTable(int tableNumber) {
    if (tableNumber >= 1 && tableNumber <= 4 && currentQueueIndex < 2) {
        tables[tableNumber - 1]->seatCustomer(queue[currentQueueIndex]);
        currentQueueIndex++;
    } else {
        std::cout << "Nomor meja tidak valid atau antrian kosong." << std::endl;
    }
}

void Game::gameMenu() {
    int choice;
    while (true) {
        std::cout << "\n1. Tempatkan pelanggan di meja" << std::endl;
        std::cout << "2. Ambil pesanan" << std::endl;
        std::cout << "3. Antar pesanan" << std::endl;
        std::cout << "4. Bersihkan meja" << std::endl;
        std::cout << "5. Keluar" << std::endl;
        std::cout << "Masukkan pilihan Anda: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                int table;
                std::cout << "Masukkan nomor meja (1-4): ";
                std::cin >> table;
                placeNextCustomerAtTable(table);
                break;
            }
            case 2: {
                int table;
                std::cout << "Masukkan nomor meja untuk mengambil pesanan (1-4): ";
                std::cin >> table;
                player.takeOrder(tables[table - 1]);
                break;
            }
            case 3: {
                int orderTable;
                std::cout << "Masukkan nomor meja untuk mengantar pesanan: ";
                std::cin >> orderTable;
                std::cout << "Mengantar pesanan ke meja " << orderTable << std::endl;
                player.deliverOrder(tables[orderTable - 1], orderTable);
                break;
            }
            case 4: {
                int table;
                std::cout << "Masukkan nomor meja untuk dibersihkan (1-4): ";
                std::cin >> table;
                player.cleanTable(tables[table - 1]);
                break;
            }
            case 5: {
                std::cout << "Keluar dari permainan." << std::endl;
                return;
            }
            default: {
                std::cout << "Pilihan tidak valid!" << std::endl;
            }
        }
    }
}

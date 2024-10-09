#include "Game.h"

// Konstruktor untuk menginisialisasi game
Game::Game() : currentQueueIndex(0) {
    // Inisialisasi 4 meja dengan nomor 1 hingga 4
    for (int i = 0; i < 4; i++) {
        tables[i] = new Table(i + 1);
    }
    // Inisialisasi antrian pelanggan dengan 2 pelanggan
    queue[0] = new Customer(1);
    queue[1] = new Customer(2);
}

// Fungsi untuk menempatkan pelanggan berikutnya di meja tertentu
void Game::placeNextCustomerAtTable(int tableNumber) {
    // Cek apakah nomor meja valid dan masih ada pelanggan dalam antrian
    if (tableNumber >= 1 && tableNumber <= 4 && currentQueueIndex < 2) {
        // Tempatkan pelanggan dari antrian ke meja yang ditentukan
        tables[tableNumber - 1]->seatCustomer(queue[currentQueueIndex]);
        currentQueueIndex++;  // Naikkan indeks antrian
    } else {
        std::cout << "Nomor meja tidak valid atau antrian kosong." << std::endl;
    }
}

// Fungsi untuk menampilkan menu permainan
void Game::gameMenu() {
    int choice;
    while (true) {
        // Tampilkan pilihan menu
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
                // Panggil fungsi untuk menempatkan pelanggan di meja yang dipilih
                placeNextCustomerAtTable(table);
                break;
            }
            case 2: {
                int table;
                std::cout << "Masukkan nomor meja untuk mengambil pesanan (1-4): ";
                std::cin >> table;
                // Panggil fungsi untuk mengambil pesanan dari meja yang dipilih
                player.takeOrder(tables[table - 1]);
                break;
            }
            case 3: {
                int orderTable;
                std::cout << "Masukkan nomor meja untuk mengantar pesanan: ";
                std::cin >> orderTable;
                std::cout << "Mengantar pesanan ke meja " << orderTable << std::endl;
                // Panggil fungsi untuk mengantar pesanan ke meja yang dipilih
                player.deliverOrder(tables[orderTable - 1], orderTable);
                break;
            }
            case 4: {
                int table;
                std::cout << "Masukkan nomor meja untuk dibersihkan (1-4): ";
                std::cin >> table;
                // Panggil fungsi untuk membersihkan meja yang dipilih
                player.cleanTable(tables[table - 1]);
                break;
            }
            case 5:
                // Keluar dari menu permainan
                return;
            default:
                std::cout << "Pilihan tidak valid. Silakan coba lagi." << std::endl;
                break;
        }
    }
}
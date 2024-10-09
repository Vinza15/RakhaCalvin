#include "Player.h"

// Fungsi untuk mengambil pesanan dari meja
void Player::takeOrder(Table* table) {
    if (table->isOccupied && !table->orderTaken) {
        table->customer->placeOrder();  // Pelanggan di meja melakukan pemesanan
        table->orderTaken = true;       // Tandai bahwa pesanan telah diambil
        std::cout << "Pesanan diambil dari meja " << table->tableNumber << "." << std::endl;
        std::cout << "Pesanan di antar ke dapur" << std::endl;
    } else {
        std::cout << "Tidak ada pesanan di meja " << table->tableNumber << "." << std::endl;
    }
}

// Fungsi untuk mengantar pesanan ke meja
void Player::deliverOrder(Table* table, int orderTableNumber) {
    if (table->isOccupied && table->orderTaken && table->tableNumber == orderTableNumber) {
        std::cout << "Pesanan diantar ke meja " << table->tableNumber << "." << std::endl;
        table->customer->pay();  // Pelanggan di meja melakukan pembayaran
        table->orderTaken = false;  // Reset status pesanan
    } else {
        std::cout << "Gagal mengantar pesanan. Nomor meja tidak sesuai." << std::endl;
    }
}

// Fungsi untuk membersihkan meja
void Player::cleanTable(Table* table) {
    table->clearTable();  // Panggil fungsi untuk membersihkan meja
}
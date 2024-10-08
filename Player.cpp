#include "Player.h"

void Player::takeOrder(Table* table) {
    if (table->isOccupied && !table->orderTaken) {
        table->customer->placeOrder();
        table->orderTaken = true;
        std::cout << "Pesanan diambil dari meja " << table->tableNumber << "." << std::endl;
        std::cout << "Pesanan di antar ke dapur" << std::endl;
    } else {
        std::cout << "Tidak ada pesanan di meja " << table->tableNumber << "." << std::endl;
    }
}

void Player::deliverOrder(Table* table, int orderTableNumber) {
    if (table->isOccupied && table->orderTaken && table->tableNumber == orderTableNumber) {
        std::cout << "Pesanan diantar ke meja " << table->tableNumber << "." << std::endl;
        table->customer->pay();  // Pelanggan otomatis membayar setelah pesanan diantar
        table->orderTaken = false;  // Pesanan dianggap selesai, tapi meja belum dibersihkan
    } else {
        std::cout << "Gagal mengantar pesanan. Nomor meja tidak sesuai." << std::endl;
    }
}

void Player::cleanTable(Table* table) {
    table->clearTable();
}

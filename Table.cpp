#include "Table.h"

// Konstruktor untuk menginisialisasi nomor meja dan status awal
Table::Table(int number) : tableNumber(number), isOccupied(false), customer(nullptr), orderTaken(false) {}

// Fungsi untuk mendudukkan pelanggan di meja
void Table::seatCustomer(Customer* c) {
    if (!isOccupied) {
        customer = c;  // Set pelanggan yang duduk di meja
        isOccupied = true;  // Tandai meja sebagai ditempati
        std::cout << "Pelanggan " << customer->id << " duduk di meja " << tableNumber << "." << std::endl;
    } else {
        std::cout << "Meja " << tableNumber << " sudah ditempati." << std::endl;
    }
}

// Fungsi untuk membersihkan meja setelah pelanggan membayar
void Table::clearTable() {
    if (isOccupied && customer->hasPaid) {
        isOccupied = false;  // Tandai meja sebagai tidak ditempati
        orderTaken = false;  // Reset status pesanan
        std::cout << "Meja " << tableNumber << " telah dibersihkan." << std::endl;
        customer = nullptr;  // Hapus referensi pelanggan
    } else {
        std::cout << "Meja belum bisa dibersihkan. Pelanggan belum membayar." << std::endl;
    }
}
#ifndef TABLE_H
#define TABLE_H

#include "Customer.h"

// Kelas Table merepresentasikan sebuah meja di restoran
class Table {
public:
    int tableNumber;      // Nomor meja
    bool isOccupied;      // Status apakah meja sedang ditempati
    Customer* customer;   // Pointer ke pelanggan yang duduk di meja
    bool orderTaken;      // Status apakah pesanan telah diambil

    // Konstruktor untuk menginisialisasi nomor meja
    Table(int number);

    // Fungsi untuk mendudukkan pelanggan di meja
    void seatCustomer(Customer* c);

    // Fungsi untuk membersihkan meja setelah pelanggan membayar
    void clearTable();
};

#endif
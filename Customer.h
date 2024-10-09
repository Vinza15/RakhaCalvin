#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>

// Kelas Customer merepresentasikan seorang pelanggan
class Customer {
public:
    int id;             // ID pelanggan
    bool hasOrdered;    // Status apakah pelanggan telah memesan
    bool hasPaid;       // Status apakah pelanggan telah membayar

    // Konstruktor untuk menginisialisasi ID pelanggan
    Customer(int id);

    // Fungsi untuk melakukan pemesanan oleh pelanggan
    void placeOrder();

    // Fungsi untuk melakukan pembayaran oleh pelanggan
    void pay();
};

#endif
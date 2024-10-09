#include "Customer.h"

// Konstruktor untuk menginisialisasi ID pelanggan dan status awal
Customer::Customer(int id) : id(id), hasOrdered(false), hasPaid(false) {}

// Fungsi untuk melakukan pemesanan oleh pelanggan
void Customer::placeOrder() {
    if (!hasOrdered) {
        hasOrdered = true;  // Tandai bahwa pelanggan telah memesan
        std::cout << "Pelanggan " << id << " telah memesan." << std::endl;
    } else {
        std::cout << "Pelanggan " << id << " sudah memesan sebelumnya." << std::endl;
    }
}

// Fungsi untuk melakukan pembayaran oleh pelanggan
void Customer::pay() {
    if (!hasPaid) {
        hasPaid = true;  // Tandai bahwa pelanggan telah membayar
        std::cout << "Pelanggan " << id << " telah membayar." << std::endl;
    }
}
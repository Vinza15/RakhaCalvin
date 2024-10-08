#include "Customer.h"

Customer::Customer(int id) : id(id), hasOrdered(false), hasPaid(false) {}

void Customer::placeOrder() {
    if (!hasOrdered) {
        hasOrdered = true;
        std::cout << "Pelanggan " << id << " telah memesan." << std::endl;
    } else {
        std::cout << "Pelanggan " << id << " sudah memesan sebelumnya." << std::endl;
    }
}

void Customer::pay() {
    if (!hasPaid) {
        hasPaid = true;
        std::cout << "Pelanggan " << id << " telah membayar." << std::endl;
    }
}

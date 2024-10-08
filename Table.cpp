#include "Table.h"

Table::Table(int number) : tableNumber(number), isOccupied(false), customer(nullptr), orderTaken(false) {}

void Table::seatCustomer(Customer* c) {
    if (!isOccupied) {
        customer = c;
        isOccupied = true;
        std::cout << "Pelanggan " << customer->id << " duduk di meja " << tableNumber << "." << std::endl;
    } else {
        std::cout << "Meja " << tableNumber << " sudah ditempati." << std::endl;
    }
}

void Table::clearTable() {
    if (isOccupied && customer->hasPaid) {
        isOccupied = false;
        orderTaken = false;
        std::cout << "Meja " << tableNumber << " telah dibersihkan." << std::endl;
        customer = nullptr;
    } else {
        std::cout << "Meja belum bisa dibersihkan. Pelanggan belum membayar." << std::endl;
    }
}

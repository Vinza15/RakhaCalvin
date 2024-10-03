#include <iostream>
#include <vector>
#include <chrono>
#include <thread>
#include "Table.h"

int main()
{
    // Membuat 4 meja dengan status pesanan yang berbeda
    std::vector<Table> tables = {
        Table(1, OrderStatus::NotTaken),
        Table(2, OrderStatus::InKitchen),
        Table(3, OrderStatus::Served),
        Table(4, OrderStatus::NotTaken)};

    // Menampilkan status awal
    for (auto &table : tables)
    {
        table.displayStatus();
    }

    // Simulasi proses waktu
    for (int i = 0; i < 60; ++i)
    { // Simulasi selama 60 detik
        std::this_thread::sleep_for(std::chrono::seconds(1));
        for (auto &table : tables)
        {
            table.updateCustomerEmotion();
            if (i == 10)
                table.setOrderStatus(OrderStatus::InKitchen); // Mengubah status pesanan
            if (i == 20)
                table.setOrderStatus(OrderStatus::Served); // Mengubah status pesanan
            table.serveOrder();                            // Mengatur emosi pelanggan jika pesanan diantarkan
            table.displayStatus();
        }
    }

    return 0;
}

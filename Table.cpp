#include "Table.h"

Table::Table(int number, OrderStatus initialStatus) : tableNumber(number)
{
    order.setStatus(initialStatus);
}

void Table::setOrderStatus(OrderStatus status)
{
    order.setStatus(status);
    notifyWaiter();
}

void Table::updateCustomerEmotion()
{
    emotion.updateEmotion();
}

void Table::serveOrder()
{
    if (order.getStatus() == OrderStatus::Served)
    {
        emotion.setEmotionToMax();
        std::cout << "Pesanan telah diantarkan ke meja " << tableNumber << ". Emosi pelanggan diatur ke 5." << std::endl;
    }
}

void Table::displayStatus() const
{
    std::cout << "Meja: " << tableNumber << std::endl;
    std::cout << "Emosi Pelanggan: " << emotion.getEmotionValue() << std::endl;
    std::cout << "Pesanan: " << order.getItem()
              << " - Status: " << orderStatusToString(order.getStatus()) << std::endl;
    std::cout << std::endl;
}

void Table::notifyWaiter() const
{
    if (order.getStatus() == OrderStatus::InKitchen)
    {
        std::cout << "Notifikasi: Pesanan di meja " << tableNumber << " siap untuk diantar." << std::endl;
    }
}

std::string Table::orderStatusToString(OrderStatus status) const
{
    switch (status)
    {
    case OrderStatus::NotTaken:
        return "Belum Diambil";
    case OrderStatus::InKitchen:
        return "Di Dapur";
    case OrderStatus::Served:
        return "Telah Disajikan";
    default:
        return "Tidak Diketahui";
    }
}

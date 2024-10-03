#ifndef ORDER_H
#define ORDER_H

#include <string>

// Status Pesanan
enum class OrderStatus
{
    NotTaken,  // Pesanan belum diambil
    InKitchen, // Pesanan sedang diproses di dapur
    Served     // Pesanan telah disajikan
};

// Kelas Order
class Order
{
public:
    Order();
    void setStatus(OrderStatus newStatus);
    OrderStatus getStatus() const;
    std::string getItem() const;

private:
    OrderStatus status;
};

#endif

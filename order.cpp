#include "Order.h"

// Konstruktor
Order::Order() : status(OrderStatus::NotTaken) {}

void Order::setStatus(OrderStatus newStatus)
{
    status = newStatus;
}

OrderStatus Order::getStatus() const
{
    return status;
}

std::string Order::getItem() const
{
    return "Makanan";
}

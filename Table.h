#ifndef TABLE_H
#define TABLE_H

#include "Order.h"
#include "CustomerEmotion.h"
#include <iostream>

class Table
{
public:
    Table(int number, OrderStatus initialStatus);
    void setOrderStatus(OrderStatus status);
    void updateCustomerEmotion();
    void serveOrder();
    void displayStatus() const;

private:
    void notifyWaiter() const;
    std::string orderStatusToString(OrderStatus status) const;

    Order order;
    CustomerEmotion emotion;
    int tableNumber;
};

#endif

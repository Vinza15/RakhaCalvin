#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>

class Customer {
public:
    int id;
    bool hasOrdered;
    bool hasPaid;

    Customer(int id);

    void placeOrder();
    void pay();
};

#endif

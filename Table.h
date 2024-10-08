#ifndef TABLE_H
#define TABLE_H

#include "Customer.h"

class Table {
public:
    int tableNumber;
    bool isOccupied;
    Customer* customer;
    bool orderTaken;

    Table(int number);
    void seatCustomer(Customer* c);
    void clearTable();
};

#endif

#include <iostream>
#include "Sales_item.h"

using namespace std;


int main(int argc, char const *argv[])
{
    Sales_item total; // variable to hold data for the next transaction

    // read the first transaction and ensure that there are data to process
    if (cin >> total) {
        Sales_item trans;
        while (cin >> trans) {
            if (total.isbn() == trans.isbn()) {
                total += trans;
            } else {
                cout << total << endl;
                total = trans;
            }
        }
        cout << total << endl;
    } else {

    }

    return 0;
}
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string name;
    int itemspurch = 0;
    double priceperitem = 0.0;
    char memberstatus = ' ';

    cout << "****** Welcome to Gage's Tech Store ******" << endl;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter number of items purchased: ";
    cin >> itemspurch;
    cout << "Enter price per item: ";
    cin >> priceperitem;
    cout << "Are you a store member (Y/N): ";
    cin >> memberstatus;

    double subtotal = priceperitem * itemspurch;
    double discountfive = 0.10 * subtotal;
    double discountthree = 0.05 * subtotal;
    double memberdiscount = 0.05 * subtotal;

    cout << "\n========================= INVOICE =========================" << endl;

    cout << left << setw(30) << setfill('.') << "Items Purchased:"
        << right << itemspurch << endl;
    cout << left << setw(30) << setfill('.') << "Price per item:"
        << right << "$" << fixed << setprecision(2) << priceperitem << endl;
    cout << left << setw(30) << setfill('.') << "Store Member:"
        << right << memberstatus << endl;

    cout << "------------------------------------------------------------" << endl;
    cout << left << setw(30) << setfill('.') << "Subtotal:"
        << right << "$" << fixed << setprecision(2) << subtotal << endl;

    if (subtotal >= 500) {
        cout << left << setw(30) << "Discount (10%):"
            << right << "-$" << discountfive << endl;
        subtotal -= discountfive;
    }
    else if (subtotal >= 300) {
        cout << left << setw(30) << "Discount (5%):"
            << right << "-$" << discountthree << endl;
        subtotal -= discountthree;
    }

    if (memberstatus == 'Y' || memberstatus == 'y') {
        cout << left << setw(30) << "Member Discount (5%):"
            << right << "-$" << memberdiscount << endl;
        subtotal -= memberdiscount;
    }

    cout << "------------------------------------------------------------" << endl;
    cout << left << setw(30) << "Final Total:"
        << right << "$" << subtotal << endl;

    cout << "============================================================" << endl;
    cout << "Thank you for supporting us, " << name << "!" << endl;

    return 0;
}

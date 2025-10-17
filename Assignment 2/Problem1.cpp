#include <iostream>
#include <string>
using namespace std;

int main() {
    // Display welcome message
    cout << "****** Welcome to the Tech Store Purchase Invoice Generator ******\n";

    // Declare variables for item names and prices
    string item1, item2, accessory;
    double price1, price2, price3;

    // Ask user for first tech item details
    cout << "Enter name of Tech Item #1: ";
    getline(cin, item1);
    cout << "Enter price: ";
    cin >> price1;
    cin.ignore(); // Clear leftover newline

    // Ask user for second tech item details
    cout << "Enter name of Tech Item #2: ";
    getline(cin, item2);
    cout << "Enter price: ";
    cin >> price2;
    cin.ignore();

    // Ask user for accessory details
    cout << "Enter name of Accessory: ";
    getline(cin, accessory);
    cout << "Enter price: ";
    cin >> price3;

    // Perform calculations for subtotal, tax, and total
    double subtotal = price1 + price2 + price3;
    double tax = subtotal * 0.095;  // 9.5% tax
    double total = subtotal + tax;

    // Display formatted invoice
    cout << "=========== TECH STORE INVOICE ===========\n";
    cout << item1 << " $" << price1 << endl;
    cout << item2 << " $" << price2 << endl;
    cout << accessory << " $" << price3 << endl;
    cout << "------------------------------------------\n";
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Sales Tax (9.5%): $" << tax << endl;
    cout << "Total: $" << total << endl;
    cout << "==========================================\n";
    cout << "Thank you for shopping with us!\n";

    return 0;
}

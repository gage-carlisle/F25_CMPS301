#include <iostream>
#include <string>
using namespace std;

int main() {
    // Display welcome message
    cout << "****** Welcome to the Freelance Invoice Generator ******\n";

    // Declare variables for client names, hours, and rates
    string client1, client2, client3;
    double hours1, rate1, hours2, rate2, hours3, rate3;

    // Collect data for Client 1
    cout << "Client 1 Name: ";
    getline(cin, client1);
    cout << "Hours Worked: ";
    cin >> hours1;
    cout << "Hourly Rate: ";
    cin >> rate1;
    cin.ignore();

    // Collect data for Client 2
    cout << "Client 2 Name: ";
    getline(cin, client2);
    cout << "Hours Worked: ";
    cin >> hours2;
    cout << "Hourly Rate: ";
    cin >> rate2;
    cin.ignore();

    // Collect data for Client 3
    cout << "Client 3 Name: ";
    getline(cin, client3);
    cout << "Hours Worked: ";
    cin >> hours3;
    cout << "Hourly Rate: ";
    cin >> rate3;

    // Calculate total earnings for each client
    double earn1 = hours1 * rate1;
    double earn2 = hours2 * rate2;
    double earn3 = hours3 * rate3;
    double total = earn1 + earn2 + earn3; // Sum of all earnings

    // Display formatted invoice
    cout << "============== FREELANCER INVOICE ==============\n";
    cout << client1 << " " << hours1 << " hrs @ $" << rate1 << "/hr = $" << earn1 << endl;
    cout << client2 << " " << hours2 << " hrs @ $" << rate2 << "/hr = $" << earn2 << endl;
    cout << client3 << " " << hours3 << " hrs @ $" << rate3 << "/hr = $" << earn3 << endl;
    cout << "------------------------------------------------\n";
    cout << "Total Income: = $" << total << endl;
    cout << "===============================================\n";
    cout << "Keep Grinding!\n";

    return 0;
}

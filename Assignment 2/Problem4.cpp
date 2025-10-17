#include <iostream>
#include <string>
using namespace std;

int main() {
    // Display welcome message
    cout << "****** Welcome to the Guest Profile Generator ******\n";

    // Declare variables to store guest information
    string fullName, prefName, email, phone, location;
    string occupation, company, hobby, color, quote;

    // Collect guest details using getline (to allow spaces)
    cout << "Enter your full name: ";
    getline(cin, fullName);
    cout << "Enter your preferred name: ";
    getline(cin, prefName);
    cout << "Enter your email address: ";
    getline(cin, email);
    cout << "Enter your phone number: ";
    getline(cin, phone);
    cout << "Enter your city and state: ";
    getline(cin, location);
    cout << "Enter your occupation: ";
    getline(cin, occupation);
    cout << "Enter your company or school: ";
    getline(cin, company);
    cout << "Enter your favorite hobby: ";
    getline(cin, hobby);
    cout << "Enter your favorite color: ";
    getline(cin, color);
    cout << "Enter a short quote or motto: ";
    getline(cin, quote);

    // Display guest profile in formatted layout
    cout << "=========== GUEST PROFILE SHEET ===========\n";
    cout << "Name: " << fullName << endl;
    cout << "Preferred Name: " << prefName << endl;
    cout << "Email: " << email << endl;
    cout << "Phone: " << phone << endl;
    cout << "Location: " << location << endl;
    cout << "Occupation: " << occupation << endl;
    cout << "Company/School: " << company << endl;
    cout << "Hobby: " << hobby << endl;
    cout << "Favorite Color: " << color << endl;
    cout << "Quote:\n" << quote << endl;
    cout << "===========================================\n";
    cout << "Thank you for sharing!\n";

    return 0;
}

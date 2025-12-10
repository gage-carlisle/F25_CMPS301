#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

struct Permit {
    string name;
    string plate;
};

// Loads all permits from file
vector<Permit> loadPermits() {
    vector<Permit> permits;
    ifstream file("permits.txt");
    Permit p;

    while (getline(file, p.name) && getline(file, p.plate)) {
        permits.push_back(p);
    }
    return permits;
}

// Saves all permits back to file
void savePermits(const vector<Permit>& permits) {
    ofstream file("permits.txt");
    for (auto& p : permits) {
        file << p.name << endl;
        file << p.plate << endl;
    }
}

// Register a new permit
void registerPermit(vector<Permit>& permits) {
    cin.ignore();
    Permit p;

    cout << "Enter student name: ";
    getline(cin, p.name);

    cout << "Enter license plate: ";
    getline(cin, p.plate);

    permits.push_back(p);
    savePermits(permits);

    cout << "\nPermit created!\n";

    // Print a simple permit file
    string filename = p.plate + "_permit.txt";
    ofstream permitFile(filename);

    permitFile << "---- PARKING PERMIT ----\n";
    permitFile << "Student: " << p.name << "\n";
    permitFile << "Plate:   " << p.plate << "\n";
    permitFile << "-------------------------\n";

    cout << "Permit saved as: " << filename << endl;
}

// Lookup by license plate
void lookupPermit(const vector<Permit>& permits) {
    cin.ignore();
    string plate;
    cout << "Enter plate to look up: ";
    getline(cin, plate);

    for (auto& p : permits) {
        if (p.plate == plate) {
            cout << "\nPermit found:\n";
            cout << "Name:  " << p.name << endl;
            cout << "Plate: " << p.plate << endl;
            return;
        }
    }

    cout << "\nNo permit found for that plate.\n";
}

// Show all permits
void showAll(const vector<Permit>& permits) {
    cout << "\n--- All Permits ---\n";
    for (auto& p : permits) {
        cout << "Name:  " << p.name << "\n";
        cout << "Plate: " << p.plate << "\n\n";
    }
}

int main() {
    vector<Permit> permits = loadPermits();
    int choice;

    while (true) {
        cout << "\n--- Parking Permit System ---\n";
        cout << "1. Register Permit\n";
        cout << "2. Lookup Plate\n";
        cout << "3. Show All Permits\n";
        cout << "4. Quit\n";
        cout << "Choose an option: ";
        cin >> choice;

        if (choice == 1) registerPermit(permits);
        else if (choice == 2) lookupPermit(permits);
        else if (choice == 3) showAll(permits);
        else if (choice == 4) break;
        else cout << "Invalid choice.\n";
    }

    return 0;
}

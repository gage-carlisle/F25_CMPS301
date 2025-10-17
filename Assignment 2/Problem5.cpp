#include <iostream>
#include <string>
using namespace std;

int main() {
    // Display welcome message
    cout << "****** Welcome to Cinemagic Booking System ******\n";

    // Declare variables for ticket and customer information
    string customerName, movieTitle, showtime, seatNumber, location;
    int theaterNumber, numTickets;
    double ticketPrice;

    // Collect booking details from user
    cout << "Enter customer name: ";
    getline(cin, customerName);
    cout << "Enter movie title: ";
    getline(cin, movieTitle);
    cout << "Enter showtime: ";
    getline(cin, showtime);
    cout << "Enter theater number: ";
    cin >> theaterNumber;
    cout << "Enter seat number: ";
    cin.ignore(); // Clear input buffer before getline
    getline(cin, seatNumber);
    cout << "Enter number of tickets: ";
    cin >> numTickets;
    cout << "Enter ticket price per person: ";
    cin >> ticketPrice;
    cin.ignore();
    cout << "Enter theater location: ";
    getline(cin, location);

    // Calculate total ticket cost
    double total = ticketPrice * numTickets;

    // Display formatted confirmation
    cout << "=========== MOVIE TICKET CONFIRMATION ===========\n";
    cout << "Customer: " << customerName << endl;
    cout << "Movie: " << movieTitle << endl;
    cout << "Showtime: " << showtime << endl;
    cout << "Theater #: " << theaterNumber << endl;
    cout << "Seat: " << seatNumber << endl;
    cout << "Tickets: " << numTickets << " @ $" << ticketPrice << endl;
    cout << "-----------------------------------------------\n";
    cout << "Total Price: $" << total << endl;
    cout << "Location: " << location << endl;
    cout << "===============================================\n";
    cout << "Enjoy the movie!\n";

    return 0;
}

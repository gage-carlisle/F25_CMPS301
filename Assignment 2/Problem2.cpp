#include <iostream>
using namespace std;

int main() {
    // Display welcome message
    cout << "****** Welcome to the Photography Trip Planner ******\n";

    // Declare variables for distances, vehicle info, and gear
    double distA, distB, distC, mpg, gasPrice, weight;

    // Gather user inputs
    cout << "Miles to Location A: ";
    cin >> distA;
    cout << "Miles to Location B: ";
    cin >> distB;
    cout << "Miles to Location C: ";
    cin >> distC;
    cout << "Fuel efficiency (MPG): ";
    cin >> mpg;
    cout << "Gas price per gallon: ";
    cin >> gasPrice;
    cout << "Camera gear weight (lbs): ";
    cin >> weight;

    // Perform calculations
    double totalDistance = distA + distB + distC;
    double fuelCost = (totalDistance / mpg) * gasPrice;   // Cost of fuel
    double weightFee = 0.15 * weight * totalDistance;     // Weight cost
    double totalCost = fuelCost + weightFee;              // Combined cost

    // Display formatted trip summary
    cout << "=========== PHOTOGRAPHY TRIP PLANNER ===========\n";
    cout << "Total Distance: " << totalDistance << " miles\n";
    cout << "Fuel Efficiency: " << mpg << " MPG\n";
    cout << "Gas Price: $" << gasPrice << endl;
    cout << "Camera Gear Weight: " << weight << " lbs\n";
    cout << "-----------------------------------------------\n";
    cout << "Estimated Fuel Cost: $" << fuelCost << endl;
    cout << "Weight Fee Estimate: $" << weightFee << endl;
    cout << "-----------------------------------------------\n";
    cout << "Estimated Total Cost: $" << totalCost << endl;
    cout << "===============================================\n";
    cout << "Travel safe!\n";

    return 0;
}

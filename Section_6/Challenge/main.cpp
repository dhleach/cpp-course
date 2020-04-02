#include <iostream>

using namespace std;

int main() {
    
    const double smallRoomPrice {25};
    const double largeRoomPrice {35};
    const double taxRate {0.06};
    const int goodFor {30}; //days
    int smallRooms {0};
    int largeRooms {0};
    
    cout << "Enter the number of small rooms: ";
    cin >> smallRooms;
    cout << "Enter the number of large rooms: ";
    cin >> largeRooms;
    double basePrice = (smallRooms * smallRoomPrice) + (largeRooms * largeRoomPrice);
    double tax = basePrice * taxRate;
    
    cout << "Estimate for carpet cleaning service: " << endl;
    cout << "Price per small room: $" << smallRoomPrice << endl;
    cout << "Price per large room: $" << largeRoomPrice << endl;
    cout << "Number of small rooms: " << smallRooms << endl;
    cout << "Number of large rooms: " << largeRooms << endl;
    cout << "Price: $" << basePrice << endl;
    cout << "Tax: $" << tax << endl;
    cout << "------------------------------------" << endl;
    cout << "Total Price: $" << basePrice + tax << endl;
    cout << "This estimate is good for " << goodFor << " days." << endl;
    
    return 0;
}
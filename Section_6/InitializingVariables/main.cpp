#include <iostream>

using namespace std;

int main() {
    int length;
    int width;
    cout << "Enter the length and width separated by a space: " << endl;
    cin >> length >> width;
    int area;
    area = length * width;
    cout << "The area is " << area << " square feet." << endl;
    
    
    return 0;
}
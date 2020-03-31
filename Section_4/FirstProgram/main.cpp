#include <iostream>

int main() {
    
    int favorite_number;
    
    std::cout << "Enter your favorite number between 1 - 100: ";
    
    std::cin >> favorite_number;

    std::cout << "Your favorite number is " << favorite_number << ", that's my favorite number too!" << std::endl; 
    
    return 0;
}
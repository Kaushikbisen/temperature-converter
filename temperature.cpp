//Task 2 Temperature App Converter

#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;
    
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    
    // Convert Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32
    fahrenheit = (celsius * 9/5) + 32;
    
    cout << "Temperature in Fahrenheit: " << fahrenheit << "°F" << endl;
    
    return 0;
}

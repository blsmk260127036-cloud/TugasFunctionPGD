#include <iostream>

/**
 * Converts temperature from Celsius to Fahrenheit.
 * Formula: F = C * 1.8 + 32
 */
double konversiSuhu(double celcius) {
    double fahrenheit = (celcius * 1.8) + 32.0;
    return fahrenheit;
}

int main() {
    double celsius_val = 25.0;
    double fahrenheit_val = konversiSuhu(celsius_val);
    
    std::cout << celsius_val << "°C is equal to " << fahrenheit_val << "°F" << std::endl;
    // Output: 25°C is equal to 77°F
    
    return 0;
}
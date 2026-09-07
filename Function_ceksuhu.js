/**
 * Converts temperature from Celsius to Fahrenheit.
 * Formula: F = C * 1.8 + 32
 * 
 * @param {number} celcius - Temperature in Celsius
 * @returns {number} Temperature in Fahrenheit
 */
function konversiSuhu(celcius) {
    return (celcius * 1.8) + 32;
}

// Arrow function variant (modern ES6 syntax):
const konversiSuhuArrow = (celcius) => (celcius * 1.8) + 32;

// Example Usage:
const celsiusVal = 25;
const fahrenheitVal = konversiSuhu(celsiusVal);
console.log(`${celsiusVal}°C is equal to ${fahrenheitVal}°F`);
// Output: 25°C is equal to 77°F
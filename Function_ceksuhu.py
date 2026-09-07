def konversiSuhu(celcius):
    """
    Converts temperature from Celsius to Fahrenheit.
    Formula: F = C * 1.8 + 32
    """
    fahrenheit = (celcius * 1.8) + 32
    return fahrenheit

celsius_val = 25
fahrenheit_val = konversiSuhu(celsius_val)
print(f"{celsius_val}°C is equal to {fahrenheit_val}°F")

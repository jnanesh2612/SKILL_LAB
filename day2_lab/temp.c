#include <stdio.h>

// Function prototype
float convertTemperature(float temp, int choice);

// Function to convert temperatures
float convertTemperature(float temp, int choice) {
    switch (choice) {
        case 1: // Celsius to Fahrenheit
            return (temp * 9.0 / 5.0) + 32.0;
        case 2: // Fahrenheit to Celsius
            return (temp - 32.0) * 5.0 / 9.0;
        case 3: // Celsius to Kelvin
            return temp + 273.15;
        default:
            printf("Invalid choice.\n");
            return 0.0; // Return 0 for invalid choice
    }
}

int main() {
    float temperature;
    int choice;

    // Input temperature from the user
    printf("Enter Temperature: ");
    scanf("%f", &temperature);

    // Display conversion options
    printf("Choose Conversion:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);

    // Call the conversion function and display the result
    float convertedTemperature = convertTemperature(temperature, choice);
    
    // Output the result based on the choice
    switch (choice) {
        case 1:
            printf("Temperature in Fahrenheit: %.2f\n", convertedTemperature);
            break;
        case 2:
            printf("Temperature in Celsius: %.2f\n", convertedTemperature);
            break;
        case 3:
            printf("Temperature in Kelvin: %.2f\n", convertedTemperature);
            break;
        default:
            // No output needed for invalid choice as it's handled in the function
            break;
    }

    return 0;
}

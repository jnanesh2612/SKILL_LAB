#include <stdio.h>

// Function prototype
void swap(int *a, int *b);

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp = *a; // Store the value at address a in temp
    *a = *b;       // Assign the value at address b to address a
    *b = temp;     // Assign the value in temp to address b
}

int main() {
    int num1, num2;

    // Input from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Display numbers before swapping
    printf("Before Swapping:\n");
    printf("First Number: %d\n", num1);
    printf("Second Number: %d\n", num2);

    // Call the swap function
    swap(&num1, &num2);

    // Display numbers after swapping
    printf("After Swapping:\n");
    printf("First Number: %d\n", num1);
    printf("Second Number: %d\n", num2);

    return 0;
}

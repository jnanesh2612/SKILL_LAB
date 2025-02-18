#include <stdio.h>
#include <string.h>

float calculateBill(char wardType, int days) {
    float chargePerDay;
    
 
    switch (wardType) {
        case 'G': // General Ward
            chargePerDay = 1000.0;
            break;
        case 'S': // Semi-Private
            chargePerDay = 2000.0;
            break;
        case 'P': // Private
            chargePerDay = 5000.0;
            break;
        default:
            printf("Invalid ward type.\n");
            return 0.0; // Return 0 for invalid ward type
    }
    
   
    float totalBill = chargePerDay * days;
    
    
    if (days > 7) {
        float discount = totalBill * 0.05; // 5% discount
        totalBill -= discount;
    }
    
    return totalBill;
}

int main() {
    char patientName[100];
    char wardType;
    int days;
    
   
    printf("Enter Patient Name: ");
    fgets(patientName, sizeof(patientName), stdin);
    patientName[strcspn(patientName, "\n")] = 0; // Remove newline character
    
    printf("Enter Ward Type (G/S/P): ");
    scanf(" %c", &wardType);
    
    printf("Enter Number of Days: ");
    scanf("%d", &days);
    
    
    float totalBill = calculateBill(wardType, days);
    
    
    float originalBill = (wardType == 'G' ? 1000 : (wardType == 'S' ? 2000 : 5000)) * days;
    float discount = (days > 7) ? originalBill * 0.05 : 0.0;
    
    
    printf("\nPatient Name: %s\n", patientName);
    printf("Total Bill Before Discount: ₹%.2f\n", originalBill);
    if (discount > 0) {
        printf("Discount Applied: ₹%.2f\n", discount);
    } else {
        printf("No Discount Applied.\n");
    }
    printf("Final Bill Amount: ₹%.2f\n", totalBill);
    
    return 0;
}

#include <stdio.h>


long factorial(int n);

long factorial(int n) 
    if (n == 0 || n == 1) {
        return 1; /
    } else {
        return n * factorial(n - 1); 
    }
}

int main() {
    int number;
    

    printf("Enter a number: ");
    scanf("%d", &number);
    
  
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        
        long result = factorial(number);
        
        printf("Factorial of %d is %ld\n", number, result);
    }
    
    return 0;
}

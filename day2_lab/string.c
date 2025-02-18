#include <stdio.h>


void reverseString(char *str);


void reverseString(char *str) {
    char *start = str;
    char *end = str;   

   
    while (*end != '\0') {
        end++;
    }
    end--;
   
        char temp = *start; 
        *start = *end;      
        *end = temp;       
        start++;            
        end--;            
    }
}

int main() {
    char str[100]; 
   
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

   
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

   
    reverseString(str);

   
    printf("Reversed String: %s\n", str);

    return 0;
}

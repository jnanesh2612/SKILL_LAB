#include <stdio.h>
#include <string.h>

#define MAX_PASSENGERS 100

typedef struct {
    char name[50];
    int age;
    char destination[50];
} Passenger;

Passenger passengers[MAX_PASSENGERS];
int n = 0; // 'n' is the passenger count

void add_passenger(char name[], int age, char destination[]) {
    strcpy(passengers[n].name, name);
    passengers[n].age = age;
    strcpy(passengers[n].destination, destination);
    n++;
}

void sort_passengers_by_destination() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(passengers[i].destination, passengers[j].destination) > 0) {
                Passenger temp = passengers[i];
                passengers[i] = passengers[j];
                passengers[j] = temp;
            }
        }
    }
}

void search_by_destination(char destination[]) {
    printf("Passengers traveling to %s:\n", destination);
    for (int i = 0; i < n; i++) {
        if (strcmp(passengers[i].destination, destination) == 0) {
            printf("%s\n", passengers[i].name);
        }
    }
}

int main() {
    int n;
    printf("Enter number of passengers: ");
    scanf("%d", &n);
    getchar(); // to consume the newline character left by scanf

    for (int i = 0; i < n; i++) {
        char name[50];
        int age;
        char destination[50];

        printf("Passenger %d:\n", i + 1);
        printf("Name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = 0; // remove the newline character

        printf("Age: ");
        scanf("%d", &age);
        getchar(); // to consume the newline character left by scanf

        printf("Destination: ");
        fgets(destination, sizeof(destination), stdin);
        destination[strcspn(destination, "\n")] = 0; // remove the newline character

        add_passenger(name, age, destination);
    }

    sort_passengers_by_destination();

    printf("\nSorted List (by destination):\n");
    for (int i = 0; i < n; i++) {
        printf("%s - %s\n", passengers[i].name, passengers[i].destination);
    }

    char search_destination[50];
    printf("\nEnter destination to search: ");
    fgets(search_destination, sizeof(search_destination), stdin);
    search_destination[strcspn(search_destination, "\n")] = 0; // remove the newline character
    search_by_destination(search_destination);

    return 0;
}

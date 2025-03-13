
#include <stdio.h>

typedef struct Vehicles {
    char number[20];
    char name[20];
    int price;
} Vehicles;

int enterVehicleDetails(Vehicles *v, int *n);
int displayVehicleDetails(Vehicles *v, int *n);

int main() {
    int n;
    
    printf("\nEnter the number of vehicles: ");
    scanf("%d", &n);
    
    Vehicles v[n];

    enterVehicleDetails(v, &n);
    displayVehicleDetails(v, &n);

    return 0;
}

int enterVehicleDetails(Vehicles *v, int *n) {
    for (int i = 0; i < *n; i++) {
        printf("\nInformation of Vehicle No: %d\n", i + 1);

        printf("Enter vehicle number: ");
        scanf("%s", (v+i)->number);

        printf("Enter vehicle name: ");
        scanf("%s", (v+i)->name);

        printf("Enter vehicle price: ");
        scanf("%d", &(v+i)->price);
    }
}

int displayVehicleDetails(Vehicles *v, int *n) {
    printf("\n----Vehicle Details----\n");
    for (int i = 0; i < *n; i++) {
        printf("\nVehicle No: %d\n", i + 1);
        printf("Number: %s\n", (v + i)->number);
        printf("Name: %s\n", (v + i)->name);
        printf("Price: %d\n", (v + i)->price);
    }
    return 0;
}

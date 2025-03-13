#include <stdio.h>

void insert(int [], int *, int, int);
void delete(int [], int *, int);

int main() {
    int size, choice;
    int element_to_add, position;
    int delete_index;
    printf("Enter the initial size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Add the values in the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    do {
        printf("\nMenu:\n");
        printf("1. Insert an element into the array\n");
        printf("2. Delete an element from the array\n");
        printf("3. Display the array\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
         
        switch (choice) {
            case 1: 

                printf("Enter the element to add: ");
                scanf("%d", &element_to_add);
                printf("Enter the position to add the element (0 to %d): ", size);
                scanf("%d", &position);
                insert(arr, &size, element_to_add, position);
                break;
            
            case 2: 

                printf("Enter the index of the element you want to delete (0 to %d): ", size - 1);
                scanf("%d", &delete_index);
                delete(arr, &size, delete_index);
                break;
            
            case 3:

                printf("\nThe current array:\n");
                for (int i = 0; i < size; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 4:
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    while (choice!=4);
    {
    }
    return 0;
}

void insert(int arr[], int *size, int element_to_add, int position) {
    for (int i = *size ; i > position ; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element_to_add;
    (*size)++;

    printf("\nThe array after insertion:\n");
    for (int i = 0; i < *size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void delete(int arr[], int *size, int position) {
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;

    printf("\nThe array after deletion:\n");
    for (int i = 0; i < *size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

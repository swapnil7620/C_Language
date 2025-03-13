// 1. Sum of Elements in an Array
/*
#include <stdio.h>


int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int sum = 0;
    int n = sizeof(numbers) / sizeof(numbers[0]);


    for (int i = 0; i < n; i++) {
        sum += numbers[i];
    }

    printf("Sum of elements: %d\n", sum);
    return 0;
}

*/

// 2. Finding the Largest Element and smallest element in an Array

/*
#include <stdio.h>

int main() {
    int numbers[] = {23, 45, 12, 67, 34};
    int largest = numbers[0];
    int smallest = numbers[0];
    int n = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 1; i < n; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    printf("Largest element: %d\n", largest);


    for (int i = 1; i < n; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    printf("samllest element: %d\n", smallest);

    return 0;
}

*/
//  3) Reverse Array
/*
#include <stdio.h>

int main()
{
    int size;
    printf("Enter the array size :\n");
    scanf("%d", &size);

    int arr[size];

    printf("\nAdd the values in arrays\n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Reverse the array itself by swapping elements
    int start = 0;
    int end = size - 1;
    int temp;

    while (start > end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    printf("\nThe reversed values of arrays : \n");

    for (int i = 0; i < size; i++)
    {
        printf(" %d", arr[i]);
    }

    return 0;
}


*/

// 4. Count Even and Odd Numbers in an Array

/*
#include <stdio.h>
int main() {
    int numbers[] = {5, 12, 3, 7, 18, 20,10,13};
    int even_count = 0, odd_count = 0;
    int n = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < n; i++) {
        if (numbers[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("Even count: %d\n", even_count);
    printf("Odd count: %d\n", odd_count);
    return 0;
}

*/

// 5. Array Elements at Odd Indexes
/*
#include <stdio.h>

int main()
{
    int numbers[] = {11, 22, 33, 44, 55, 66};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    printf("Elements at odd indexes: ");
    for (int i = 1; i < n; i = i + 2)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}
*/

// 6. Array Element Frequency
/*
#include <stdio.h>

int main() {
    int numbers[] = {1, 2, 2, 3, 4, 4, 4, 5};
    int frequency[100] = {0};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < n; i++) {
        frequency[numbers[i]]++;
    }

    printf("Frequency of elements:\n");
    for (int i = 0; i < 100; i++) {
        if (frequency[i] != 0) {
            printf("%d: %d time(s)\n", i, frequency[i]);
        }
    }
    
    return 0;
}
*/



// 7. Sorting an Array in Ascending Order and Descending order

/*
#include <stdio.h>

void sortAscending(int arr[], int n) {
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void sortDescending(int arr[], int n) {
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int numbers[] = {34, 12, 24, 9, 5};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    sortAscending(numbers, n);

    printf("Sorted array in ascending order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    sortDescending(numbers, n);

    printf("Sorted array in descending order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    
    return 0;
}

*/

// 9. Find All Prime Numbers in an Array
/*
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int numbers[] = {10, 15, 3, 7, 9, 19};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    printf("Prime numbers: ");
    for (int i = 0; i < n; i++) {
        if (isPrime(numbers[i])) {
            printf("%d ", numbers[i]);
        }
    }
    printf("\n");

    return 0;
}
*/

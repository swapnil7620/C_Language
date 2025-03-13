//  1)  print SwApNiL (Alternative charecter)

/*
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[] = "swapnil";
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        if (i % 2 == 0) {
            printf("%c", toupper(str[i]));
        } else {
            printf("%c", tolower(str[i]));
        }
    }
    printf("\n");

    return 0;
}
*/

    

    // 1)
/*
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "SWAPNIL";
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        if (i % 2 == 0) {
            // Convert to uppercase using ASCII values
            if (str[i] >= 'a' && str[i] <= 'z') {
                printf("%c", str[i] - 32);
            } else {
                printf("%c", str[i]);
            }
        } else {
            // Convert to lowercase using ASCII values
            if (str[i] >= 'A' && str[i] <= 'Z') {
                printf("%c", str[i] + 32);
            } else {
                printf("%c", str[i]);
            }
        }
    }
    printf("\n");
    
    return 0;
}
*/


 //2)
// Count Uppercase , lowercase, Special Symol, Digit
// eg -: SwapnilMahajan7620

/*
#include <stdio.h>
int main() {
    const char input[] = "SwapnilMahajan@7620";
    int counts[4] = {0}; // counts[0]: Uppercase, counts[1]: Lowercase, counts[2]: Digits, counts[3]: Special
    
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] >= 'A' && input[i] <= 'Z') {
            counts[0]++;
        } else if (input[i] >= 'a' && input[i] <= 'z') {
            counts[1]++;
        } else if (input[i] >= '0' && input[i] <= '9') {
            counts[2]++;
        } else {
            counts[3]++;
        }
    }

    printf("Uppercase Letters: %d\n", counts[0]);
    printf("Lowercase Letters: %d\n", counts[1]);
    printf("Digits: %d\n", counts[2]);
    printf("Special Symbols: %d\n", counts[3]);
    
    return 0;
}

*/

//  3) linear search
/*
#include <stdio.h>

int main() {
    const int input[] = {10, 20, 30, 40};
    int target = 20;
    int found = 0;
    int length = sizeof(input) / sizeof(input[0]);
    
    for (int i = 0; i < length; i++) {
        if (input[i] == target) {
            found = i;
            break;
        }
    }
    if (found != 0) {
        printf("Integer '%d' found at index: %d\n", target, found);
    } else {
        printf("Integer '%d' not found in the array.\n", target);
    }
    
    return 0;
}
*/
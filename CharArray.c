
// At last it stored terminating charecter or null value for char array only 
#include <stdio.h>

int main() {
    char Name[] = "Swapnil";

    for (int i = 0; Name[i] != '\0'; i++) {
        printf("%c", Name[i]);
    }
    printf("\n%s\n", Name);

    return 0;
}

// Hm  print SwApNiL (Alternative charecter)

//2)

// Count Uppercase , lowercase, Special Symol, Digit
// eg -: SwapnilMahajan7620

// 3) linear  search 


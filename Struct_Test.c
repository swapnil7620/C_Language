/*
#include <stdio.h>

typedef struct Student {
    int rollNumber;
    char name[50];
    int marks;
} Student;

int main() {
     Student students[3];
     
    // Input details of 3 students
    for (int i = 0; i < 3; i++) {
        printf("Enter details of student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    // Display details of 3 students
    printf("\nStudent Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d. Roll Number: %d, Name: %s, Marks: %d\n", i + 1, students[i].rollNumber, students[i].name, students[i].marks);
    }

    return 0;
}

*/
/*
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basicSalary;
    float grossSalary;
};

int main() {
    struct Employee employees[2];

    // Input details of 2 employees
    for (int i = 0; i < 2; i++) {
        printf("Enter details of employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Basic Salary: ");
        scanf("%f", &employees[i].basicSalary);
        
        // Calculate gross salary
        employees[i].grossSalary = employees[i].basicSalary + (0.20 * employees[i].basicSalary);
    }
    
    // Display details of 2 employees
    printf("\nEmployee Details:\n");
    for (int i = 0; i < 2; i++) {
        printf("%d. ID: %d, Name: %s, Gross Salary: %.2f\n", i + 1, employees[i].id, employees[i].name, employees[i].grossSalary);
    }
    
    return 0;
}
*/
/*
#include <stdio.h>

struct Book {
    char title[100];
    char author[50];
    float price;
};

int main() {
    struct Book books[5];
    
    // Input details of 5 books
    for (int i = 0; i < 5; i++) 
    {
        printf("Enter details of book %d:\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]%*c", books[i].title);  // read string with spaces
        printf("Author: ");
        scanf(" %[^\n]%*c", books[i].author); // read string with spaces
        printf("Price: ");
        scanf("%f", &books[i].price);
    }
    
    // Display details of books priced above 500
    printf("\nBooks priced above 500:\n");
    for (int i = 0; i < 5; i++) {
        if (books[i].price > 500) {
            printf("Title: %s, Author: %s, Price: %.2f\n", books[i].title, books[i].author, books[i].price);
        }
    }

    return 0;
}

*/
#include <stdio.h>

struct Player {
    char name[50];
    int matchesPlayed;
    int totalRuns;
};

int main() {
    struct Player players[5];

    // Input details of 5 players
    for (int i = 0; i < 5; i++) {
        printf("Enter details of player %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]%*c", players[i].name);  // read string with spaces
        printf("Matches Played: ");
        scanf("%d", &players[i].matchesPlayed);
        printf("Total Runs: ");
        scanf("%d", &players[i].totalRuns);
    }

    // Find the player with the highest runs
    int maxRunsIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (players[i].totalRuns > players[maxRunsIndex].totalRuns) {
            maxRunsIndex = i;
        }
    }

    // Display details of the player with the highest runs
    printf("\nPlayer with the highest runs:\n");
    printf("Name: %s, Matches Played: %d, Total Runs: %d\n", players[maxRunsIndex].name, players[maxRunsIndex].matchesPlayed, players[maxRunsIndex].totalRuns);

    return 0;
}

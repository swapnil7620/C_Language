// write a program to decide  it is Vowels or  Consonates


#include<stdio.h>
void main()
{

    char Character;
    printf("Enter the Charecter");
    scanf(" %c", &Character);
    if (Character == 'A' || Character == 'E' || Character == 'I' || Character == 'O' || Character == 'U'
        || Character == 'a' || Character == 'e' || Character == 'i'|| Character == 'o' || Character == 'u')

    {
        printf("The Charecter is Vowels = %c\n", Character);
    }
    else
    {
        printf("The Character is Consonates = %c\n " , Character);
    }
}

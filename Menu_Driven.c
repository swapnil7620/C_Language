#include <stdio.h>
void areaOfCircle(int);
void areaOfRectangle(int, int);
void areaOfSquare(int);
int main()
{
    int choice;
    int radius;
    int length, width;
    int side;
    printf("\n ------------- Menu ------------- \n");
    printf("\n 1 : Area of Circle ");
    printf("\n 2 : Area of Rectangle");
    printf("\n 3 : Area of Square ");
    do
    {
        printf("\n Whats your choice : = ");
        scanf("%d", &choice); // 5

        switch (choice)
        {
        case 1:
            printf("\n Enter the radius : = ");
            scanf("%d", &radius);
            areaOfCircle(radius);
            break;
        case 2:
            printf("\n Enter the length and width : = ");
            scanf("%d%d", &length, &width);
            areaOfRectangle(length, width);
            break;
        case 3:
            printf("\n Enter the side : = ");
            scanf("%d", &side);
            areaOfSquare(side);
            break;
        default:
            printf("\n invalid choice ...! ");
        }

    } while (choice != 0);
    return 0;
}

void areaOfCircle(int radius)
{
    printf("\nThe Area of circle is : = %f ", 3.14 * radius * radius);
}
void areaOfRectangle(int length, int width)
{
    printf("\nThe Area of Reactangle is : = %d ", length * width);
}
void areaOfSquare(int side)
{
    printf("\nThe Area of Square is : = %d ", side * side);
}
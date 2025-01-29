// Area of circle , square , rectangle

/*
#include<stdio.h>

void main(){

// Area of circle

float pi = 3.141f;
int radius = 5;
radius = radius * radius;
float Area = pi * radius;
    printf("Area of an circle is = %f\n ", Area);


    // area of square

    int square = 5;
    int Area_of_Square =  square*square;
    printf("Area of Square is = %d\n ", Area_of_Square);

    //Area of rectangle

    int length = 10;
    int width = 20;
    int Area_of_Recangle = length * width;
    printf("The Area of Rectangle is %d", Area_of_Recangle);
}
*/

// Area of circle by taking value form user

/*
#include <stdio.h>

void main()
{

   //  Calculate the Area of Circle by taking input from user

    float pi = 3.141f;
    int Radius;

    printf("Enter the value of radius\n");
    scanf("%d", &Radius);
    Radius = Radius * Radius;
    float Area_Of_Circle = pi * Radius;
    printf("Area of Circle is = %f", Area_Of_Circle);

    // Calculate the Area of Square  by taking input from user

    int Square;
    printf("\n Enter the Value to calculate square \n  ");
    scanf("%d", &Square);

    int Area_Of_Square = Square * Square;
    printf("\nArea_of_Square = %d \n", Area_Of_Square);

    //  Claculate the Area of Rectangle by taking input from user

    int Length;
    int breath;
    printf("Enter the Length and breath\n");
    scanf("%d %d", &Length, &breath);
    int Area_Of_Recangle = Length * breath;
    printf("\n Area of Rectangle is = %d", Area_Of_Recangle);
}
*/

/*
#include <stdio.h>
void main()
{
   float pi = 3.141f;
   int choice , Radius , Square , Length , breath , Area_Of_Recangle , Area_Of_Square ;
   float Area_Of_Circle;
   

   printf("-------------Menu------------\n");
   printf(" 1) to calculate the radius of circle\n");
   printf(" 2) to calculate the radius of rectangle\n");
   printf(" 3) to calculate the radius of square\n");
   printf("Enter the Choice\n");
   scanf("%d", &choice);

   if (choice == 1)
   {
      printf("Enter the value of radius\n");
      scanf("%d", &Radius);
      Radius = Radius * Radius;
      Area_Of_Circle = pi * Radius;
      printf("Area of Circle is = %f", Area_Of_Circle);
   }
   else if (choice == 2)
   {
      printf("Enter the Length and breath\n");
      scanf("%d %d", &Length, &breath);
      int Area_Of_Recangle = Length * breath;
      printf("\n Area of Rectangle is = %d", Area_Of_Recangle);
   }

   else if (choice == 3)
   {

      printf("\n Enter the Value to calculate square \n  ");
      scanf("%d", &Square);
      Area_Of_Square = Square * Square;
      printf("\nArea_of_Square = %d \n", Area_Of_Square);

   }
   else
   {
      printf("Invalid choice");
   }
}

*/

//  18) program to find Area of circle , rectangle , square by  using switch case default

/*
#include<stdio.h>
void main(){
   float pi = 3.141f;
   int choice , Radius , Square , Length , breath , Area_Of_Recangle , Area_Of_Square ;
   float Area_Of_Circle;
   
   printf("-------------Menu------------\n");
   printf(" 1) to calculate the radius of circle\n");
   printf(" 2) to calculate the Area of rectangle\n");
   printf(" 3) to calculate the Area of square\n");
   printf("Enter the Choice\n");
   scanf("%d", &choice);

  if (choice == 1 || choice ==2 || choice == 3) 
  {
      switch(choice)
      {
      case 1:
              printf("Enter the value of radius : \n");
              scanf("%d", &Radius);
              Radius *= Radius ;
              Area_Of_Circle = pi * Radius;
              printf("Area of Circle is = %f", Area_Of_Circle);
            break;

      case 2:
               printf("Enter the length\n");
               scanf("%d", &Length);
               printf("Enter the breath\n"); 
               scanf("%d", &breath);
               Area_Of_Recangle = Length * breath;
               printf("\n Area of Rectangle is = %d", Area_Of_Recangle);
             break;

      case 3:
               printf("\n Enter the Value to calculate square : \n  ");
               scanf("%d", &Square);
               Area_Of_Square = Square * Square;
               printf("\nArea_of_Square = %d \n", Area_Of_Square); 
             break;
      }
       
  }
  else
  {
     printf("Invalid Choice");
  }
}

*/



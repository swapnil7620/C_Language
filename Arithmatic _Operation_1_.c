//   Addition , Sunstraction , multiplication , Division;

/*
 #include<stdio.h>

void main(){

    printf("hi\n ");

    int Num1 = 10;
    int Num2 = 20;
    int Num3 = 30;
    int Num4 = 40;
    int  Sum = Num1 + Num2 + Num3 + Num4;
    int Multiplication = Num1 * Num2 * Num3 * Num4 ;
    int Substraction = Sum - 50;
    int Division = Substraction / 10;
    printf("Sum of Numbers is = %d \n", Sum);
    printf("Multiplication of number is = %d \n", Multiplication);
    printf("Substraction  of number is = %d \n", Substraction);
    printf("Division  of number is = %d \n", Division);
}
*/

//Addition , substraction , multiplication , Division based on operation

/*
#include <stdio.h>

void main()
{

    int Number1, Number2, Operation;
    printf("Enter the Number\n");
    scanf("%d%d", &Number1, &Number2);
    printf("Enter the operation\n");
    scanf("%d", &Operation);

    if (Operation == 1)
    {
        int Add = Number1 + Number2;
        printf(" Addition  of Number1 and Number2 = %d", Add);
    }
    else if (Operation == 2)
    {
        int Sub = Number1 - Number2;
        printf(" Substraction of Number1 and Number2 = %d", Sub);
    }
    else if (Operation == 3)
    {
        int Mul = Number1 * Number2;
        printf(" Multiplication of Number1 and Number2 = %d", Mul);
    }
    else if (Operation == 4)
    {
        if (Number2 != 0)
        {
            int Div = Number1 / Number2;
            printf("Divison of Number1 and Number2 = %d ", Div);
        }
        else
        {
            printf("Divison by zero is not allowed");
        }
    }
    else
    {
        printf("INvalid operation");
    }
}
*/

// perform arithmatic operation by using switch case and default

/*
#include <stdio.h>
void main()
{

   int Number1, Number2, Sum, Sub, Div, Mul;
   char Operator;
   printf("Enter any two  Numbers \n");
   scanf("%d%d", &Number1, &Number2);
   printf("Enter the operator  (+,-,*,/)\n");
   scanf(" %c", &Operator);

   switch (Operator)
   {
   case '+':
      Sum = Number1 + Number2;
      printf("Sum of %d and %d is = %d", Number1, Number2, Sum);
      break;

   case '-':
      Sub = Number1 - Number2;
      printf(" Substraction of %d and %d = %d", Sub);
      break;

   case '*':
      Mul = Number1 * Number2;
      printf(" Multiplication of %d and %d = %d", Mul);
      break;

   case '/':
      if (Number2 != 0)
      {
         Div = Number1 / Number2;
         printf("Divison of %d and %d = %d ", Div);
      }
      else
      {
         printf("Divison by zero is not allowed");
      }
      break;

   default:
      printf("Invalid operator");
      break;
   }
   */
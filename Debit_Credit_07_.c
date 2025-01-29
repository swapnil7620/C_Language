// Debit and Credit Example

/*
#include <stdio.h>

void main()
{

    int balance, credit, debit, choice;
    balance = 1000;
    
    printf("Enter the Choice\n");
    scanf("%d", &choice);

    if (choice == 0)
    {
        printf("Enter the debit Amount\n");
        scanf("%d", &debit);
        if (debit <= balance)
        {
            balance = balance - debit;
            printf(" After the debit balance is = %d", balance);
        }
        else
        {
            printf("insufficent balance");
        }
    }
    else if (choice == 1)
    {
        printf("Enter the Credit Amount\n");
        scanf("%d", &credit);
        balance = balance + credit;
        printf(" After the credit balance is = %d", balance);
    }

    else if (choice == 2){
           printf(" Current balance is = %d", balance);
    }
    else

    {
        printf("Invalid choice");
    }
}

*/
// 16 ) debit , credit , view balance operation by using switch

/*
#include <stdio.h>

void main()
{
   int balance, credit, debit, choice;
   balance = 1000;
   printf("--------MENU---------\n ");
   printf(" 0 )  for debit amount \n ");
   printf(" 1 )  for credit amount \n ");
   printf(" 2 )  for View amount (balance) \n ");

   printf("Enter the Choice\n");
   scanf("%d", &choice);

   switch (choice)
   {
   case 0:

      printf("Enter the debit Amount\n");
      scanf("%d", &debit);
      if (debit <= balance)
      {
         balance = balance - debit;
         printf(" After the debit balance is = %d", balance);
      }
      else
      {
         printf("insufficent balance \n");
         printf("You don't have a lot of money ");
      }
      break;

   case 1:
      printf("Enter the Credit Amount\n");
      scanf("%d", &credit);
      balance = balance + credit;
      printf(" After the credit balance is = %d", balance);
      break;
   case 2:
      printf(" Current balance is = %d", balance);
      break;
   default:
      printf("Invalid choice");

      break;
   }
}
*/

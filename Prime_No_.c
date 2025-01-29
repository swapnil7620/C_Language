// prime number form 1 to n

/*
#include <stdio.h>
void main()
{
    int i, num, n, count;
    printf("Enter the range: ");
    scanf("%d", &n);
    printf("The prime numbers in between the range 1 to %d :", n);
    for (num = 1; num <= n; num++)
    {
        count = 0;
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0 && num != 1)
            printf("%d ", num);
    }
}
*/


// To check weather the number is prime or not
/*
#include <stdio.h>

void main()
{

    int i, n;
    int count = 0;
    printf("Enter the Number :");
    scanf("%d", &n);
   
        for( i = 2; i<= n / 2; i++ ){
             if(n %  i == 0){
               count++;
               break;
            }
        }
            if (count == 0){
                printf("Number is prime");
            }
            else
            {
               printf("Number is not  prime");   
            }
            
        }
    
*/

// reversing the the number


/*
#include<stdio.h>
void main(){
    int digit ;int reverse=0 ;
    int n = 12345;
    
    while(n!=0){
         digit = n % 10;
         reverse = reverse * 10 + digit;  
         n = n / 10 ;
    }
    printf("%d", reverse);
}
 
 */
/*
#include <stdio.h>

void main()
{
    int N;
    int RNumber = 0;
    printf("Enter the Number: ");
    scanf("%d", &N);

    while (N != 0)
    {
        int digit = N % 10;        
        RNumber = RNumber * 10 + digit; 
        printf("RNumber Number: %d\n", RNumber);
        N = N / 10;                
    }

    printf("RNumber Number: %d\n", RNumber);
}
*/

// Reverse order

// using for loop
/*
#include <stdio.h>

void main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        printf("%d\n", i);
    }
}

*/

// Reverse the order by using while loop
/*
#include <stdio.h>

void main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);

    while (n > 0)
    {
        printf("%d\n", n);
        n--;
    }
}

*/

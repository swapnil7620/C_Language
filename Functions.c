
/*
#include<stdio.h>
void factorialFunction();
void febonacciSeries();
void palidromeNumber();
void main(){
int choice;

do
{

    printf("Enter the Choice :");
   scanf("%d",&choice);

    switch (choice)
    {
    case 1:
     factorialFunction();
           break;
    case 2:
         febonacciSeries();
           break;
    case 3:
          palidromeNumber();
           break;
    default:
    printf("invalid choice\n");
        break;
    }

} while (choice!=0);

}
void factorialFunction(){
    int Num ;
        printf("Enter the Number for factorial \n");
        scanf("%d", &Num);
        int fact = 1;
        for (int i = 1; i <= Num; i++)
        {
             fact = fact * i; // 4 * 1 , 4 * 2  , 8 * 3 // if in put is 4
            //    fact *=  i;    // by using pre incement operator
        }
        printf("%d\n", fact);
    }

 void febonacciSeries(){

    int i ,N ;
    int Number1 = 0 ;
    int Number2 = 1;
    int Fibon;
     printf("Enter the number \n: ");
     scanf(" %d", &N);

    for ( i = 0; i < N; i++)
    {
        if(i == 0){
            Fibon = Number1;
        }
        else if (i == 1){
            Fibon = Number2;
        }
        else{
        Fibon = Number1 + Number2;
        Number1 = Number2;
        Number2 = Fibon;
        }
          printf("%d\n", Fibon);
    }
 }
    void  palidromeNumber(){
    int digit;
    int reverse = 0;
    int n ;
    printf("Enter the Numbers for palidrome\n");
    scanf("%d",&n);
    int original = n;

    while (n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    if (reverse == original)
    {
        //    printf("%d", reverse);
        printf("number is palidrome\n");
    }
    else
    {
        printf("Number is not palidrome\n");
    }

}
    */

/*
//--------- user defination function -------//

#include<stdio.h>

void show(); // at declaration //  don't need to use curly bracket

int main(){

  show(); //  at defination  // don't need to mention datatype
   return 0;
}

void show() //  at calling function // need to mention data type and and curly bracket
{
   printf("First Function \n");
}
*/

// ---------Another way  to use  user define function-------

/*

#include <stdio.h>

// if we are calling function first then we don't need to declare

void show() // at calling function //  at calling function need to mention data type and and curly bracket
{
    printf("First Function \n");
}

int main()
{
    show(); // at defination // don't need to mention datatype
    return 0;
}

*/

/*
#include <stdio.h>

int add(int,int);
void main()
{

    int Ans = add(10 ,1);
    // call by value
    printf("Ans is : %d \n", Ans);
}

int add(int i, int j)
{
    int k = i + j;
     return k;
}
*/

// void sample ();

// takes nothing return nothing

// void sample(int)

// takes something return nothing

// int sample()

// takes nothing return something

// int sample(int)

// takes something return something

// ------------------------------------------------------------------------------------  //

//  function use stack frame to stored and it will be created

// varibale present innt function has local scope

// main have local paramter

// function has actual parameter

// types of memory stack, heap , data member

// Runtime stack machanisum and stack frame is same

// you can only return one value from the function

// local has 1st priority 

// global has 2nd priority

// --------------------- takes nothing return something--------------//


/*
#include <stdio.h>
int factorial();
void main()
{

    int fact = factorial();
    printf("%d", fact);

    printf("%d",factorial());
}

int factorial()
{

    int fact = 1, n;
    n = 5;

    while (n != 0)
    {
        fact *= n;
        n--;
    }

    return fact;
    // dont write anything after function because their is no mean (it will not going to execute)

}
*/


/*--------------------takes something return something------------*/

/*
#include <stdio.h>

int factorial(int);
void main()
{
    int n;
    n= 5;
    int fact = factorial(n);// call by value
    printf("%d", fact);
}

int factorial(int n)
{
    int fact = 1;

    while (n != 0)
    {
        fact *= n;
        n--;
    }

    return fact;

    // dont write anything after function because their is no mean (it will not going to execute)
    
}


*/


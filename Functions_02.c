// #include<stdio.h>
// int febonacci(int);
// int main(){

//     int n;
//     n =10;
//     int febo = febonacci(n);
//    printf("%d",febo);
//     return 0;
// }

// int febonacci(int n){

//     int i ;
//     int Number1 = 0 ;
//     int Number2 = 1;
//     int Fibon;

//     for ( i = 0; i < n; i++)
//     {
//         if(i == 0){
//             Fibon = Number1;
//         }
//         else if (i == 1){
//             Fibon = Number2;
//         }
//         else{
//         Fibon = Number1 + Number2;
//         Number1 = Number2;
//         Number2 = Fibon;
//         }
//     }
//     return Fibon;

// }

/*

#include <stdio.h>

int sum(int);
int main()
{
    int Num = 10;
    int sum1 = sum(Num);

    printf("%d", sum1);

    return 0;
}
int sum(int Num)
{

    int sum = 0;
    for (int i = 0; i <= Num; i++)
    {
        //   Sum = Sum + i;
        sum += i;
    }
    return sum;
}
*/
/*

 #include <stdio.h>

int sum(int);
int main()
{
    int Num = 10;
    int sum1 = sum(Num);
    printf("%d", sum1);

    return 0;
}
int sum(int Num)
{
    int Sum = 0;
    for (int i = 0; i <= Num; ++i)
    {
        Sum += i;
    }
    return Sum;
}
*/


/*
#include<stdio.h>

int fibonacii(int);
int main(){
    int i ,N ;
    int Number1 = 0 ;
    int Number2 = 1;
    int Fibon;
     printf("Enter the number : ");
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
    
    return 0;
}

int fibonacci(){
    

}
*/
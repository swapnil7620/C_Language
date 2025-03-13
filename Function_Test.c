
/*--------------Takes nothing return nothing------------*/

/*
#include <stdio.h>

int sum(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

int main()
{

    int SUM = sum(100, 200);
    printf("%d\n", SUM);
    int subt = sub(100,50);
    printf("%d\n", subt);

    int mult = mul(100,50);
    printf("%d\n", mult);

    int Divn = div(100,50);
    printf("%d\n", Divn);


    return 0;
}

int sum(int i, int j)
{
    int k = i + j;
    return k;
}

int sub(int i, int j)
{
    int k = i - j;
    return k;
}

int mul(int i, int j)
{
    int k = i * j;
    return k;
}

int div(int i, int j)
{
    int k = i / j;
    return k;
}

*/
/*-----------------take something return nothing ---------*/

/*
#include <stdio.h>
void fact(int); // decleration of function
int main()
{
   fact(5);  // function calling
    return 0;
}
void fact(int n) // function defination
{

    int fact;
    fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact =  fact * i;
    }
    printf("%d",fact);
}
*/
/*--------------takes something return something-------*/
/* 
#include <stdio.h>
int reverse(int);
int main()
{
    int n = 123;
    int Reverse_No = reverse(n);
    printf("%d %d", Reverse_No, reverse(n));

    return 0;
}
int reverse(int n)
{
    int Reverse = 0;
    int digit;
    
    while (n != 0)
    {
        digit = n % 10;
        Reverse = Reverse * 10 + digit;
        n = n / 10;
    }
    return Reverse;
}
*/


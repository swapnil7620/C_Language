/*---------- ------------Pointers---------------*/

/*----------Pointers are used to hold the address of an variable--------------*/

/* ----- *p Assign the address of an variable ------- */

/*
#include <stdio.h>
int main()
{
    int i = 10;
    int *p;
    p = &i;
    int s = *p;
    printf("%d\n", i);  // Value of an variable
    printf("%d\n", p);  // Address of an variable which is noun another than i
    printf("%d\n", &i); // Address of an variable i
    printf("%d", *p);   // value of an variable which is i
    printf("%d\n",s);

    return 0;
}

*/

//int *ptr = &a; // initialization of pointers // referncing the pointer
// reference means address

// special of variable that stored a addres of another variable
// integer pointer can stored the address of only integer variable 
// using pointers we can return multiple  values from function
// when dynamically 
// data type of pointers  is (*) and data type of variable like (int *)

// we can dereference the pointers also
// at the time of decleration star marks carried the pointer which called refering variable
// int *ptr ; // integer pointer ptr

// ptr =&a;// here we are storing the address of a variable into ptr


// after the declearation of pointers if we are using * star marks with pointer it will 
// derference the pointers
// after dereferncing
// now it will print the value which is ponting

/*
int a= 10;// representing a pointer
int *ptr = &a;
pf(a)= 10;
pf(ptr)= &a;
pf(*ptr) = value of a (10)

*/

/*
#include<stdio.h>
void main(){

int a= 10;// representing a pointer
int *ptr = &a;
printf("address of a : %d \n",&a);
printf("address of a which stored in ptr variable = %d\n",ptr) ;// address of variable a 
printf("address of ptr variable itself = %d \n",&ptr) ;
printf("value present int a =   %d\n",a);// value of a
printf("value present int a fetching using ptr = %d\n",*ptr);// value of a using pointers reference

}
*/
// only double pointer has capacity to stored the address of another pointer variable and goes on like

// ** ptr1 = &ptr;


// febo series using pointers

/*
#include <stdio.h>

int main() {
    int i, N;
    int Number1 = 0;
    int Number2 = 1;
    int Fibon =2;

    int *ptr1 = &Number1;
    int *ptr2 = &Number2;
    int *ptr3 = &Fibon;
    
    printf("%d\n",*ptr1);// value will be printed of Number1
    printf("%d\n",*ptr2);// value will be printed of Number2
    printf("%d\n",*ptr3);// value will be printed  of Number3

    int **dptr1 = &ptr1;
    int **dptr2 = &ptr2;
    int **dptr3 = &ptr3;

    printf("%d\n",&ptr1);// address of Number1
    printf("%d\n",dptr1);// address of ptr1
    printf("%d\n",&dptr1);// address of itself
    printf("%d\n",&Number2);//address of Number 2
    printf("%d\n",*dptr2);// it stored the address of Number2
    printf("%d\n",*dptr3);// it stored the addres of Fibo


    printf("%d\n",**dptr1);// value of Number1
    printf("%d\n",**dptr2);// value of Number2
    printf("%d\n",**dptr3);// value of fibo


}

*/
/*
#include<stdio.h>
void swappning(int * , int *);
int main(){


int a =10;
int b =20;
    printf("Enter the value :");
    scanf("%d%d",&a,&b);
    printf(" a : %d , b : %d \n ",a ,b);
    swappning(&a,&b); // call by reference 
    printf("\nAfter swappning value in main block\n");
    printf("a : %d , b : %d \n ", a, b );

    return 0;
}

void swappning(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;   
}

*/

// using pointers and call by reference (means without returning )
/*
#include<stdio.h>

void factorial(int*,int*);
int main()
{
    int n;    
    printf("Enter the value : ");
    scanf("%d",&n);  
    int fact;
    factorial(&n,&fact);
    printf("%d", fact);
    return 0;
}

void factorial(int *n,int*fact)
{
    
    *fact =1;
    
    while (*n != 0)
    {
        *fact *= (*n);
        (*n)--;
    }
}

*/



// area of square square , rectangle perfrom with menu driven using call by reference (pointers)

/*

#include <stdio.h>

void areaOfCircle(int *);
void areaOfRectangle(int *, int *);
void areaOfSquare(int *);

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
    
    do {
        printf("\n What's your choice : = ");
        scanf("%d", &choice);
        
        switch (choice)
        {
            case 1:
            printf("\n Enter the radius : = ");
            scanf("%d", &radius);
            areaOfCircle(&radius);
            printf("\n The Area of circle is : = %d \n", radius);
            break;
        case 2:
            printf("\n Enter the length and width : = ");
            scanf("%d%d", &length, &width);
            areaOfRectangle(&length, &width);
            printf("\n The Area of rectangle is : = %d \n", length);
            break;
        case 3:
            printf("\n Enter the side : = ");
            scanf("%d", &side);
            areaOfSquare(&side);
            printf("\n The Area of square is : = %d \n", side);
            break;
        default:
            printf("\n Invalid choice ...! \n");
        }

    } while (choice != 0);
    
    return 0;
}

void areaOfCircle(int *radius) {
    int area = 3.14 * (*radius) * (*radius);
    *radius = area;
}

void areaOfRectangle(int *length, int *width) {
    int area = (*length) * (*width);
    *length = area;
}

void areaOfSquare(int *side) {
    int area = (*side) * (*side);
    *side = area;
}

*/
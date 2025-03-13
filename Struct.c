/*
#include<stdio.h>
// Hetrogenous data type is acceptable in structure  & user define data type like array
// C is follows structure oriented style
// creating a structure in order to creating a data type in order to access the
// data member of structure we have to create varibale
struct Laptop
{
    int id;
    char Model[20];
    int price;
};
void main(){

 struct Laptop xps,ins;
 printf("-----Enter the details of an Laptop----\n");
 printf("Enter the id \n");
 scanf("%d",&xps.id);
 printf("Enter the name of Model \n");
 scanf("%s",&xps.Model);
 printf("Enter the price \n");
 scanf("%d",&xps.price);

 printf("1st laptop = %d : %s : %d  ", xps.id,xps.Model,xps.price);


}
*/
/*
#include<stdio.h>

struct Student
{
    int id;         // data member
    char Name[20];
    char Div;
};
void main(){
    // variable of structure
    struct Student Swapnil ; // swapnil is a variable name of student structure
    printf("-----Enter the details of an Laptop----\n");
 printf("Enter the id \n");
 scanf("%d",&Swapnil.id);
 printf("Enter the name of Name \n");
 scanf("%s",&Swapnil.Name);
 printf("Enter the Div \n");
 scanf(" %c",&Swapnil.Div);
 struct Student  Dhiraj = {101,"Dhiraj",'D'};


 printf("1st Student_Swapnil = %d : %s : %c  \n", Swapnil.id,Swapnil.Name,Swapnil.Div);
 printf("2st Student_Dhiraj = %d : %s : %c \n", Dhiraj.id,Dhiraj.Name,Dhiraj.Div);



}

*/

#include <stdio.h>

typedef struct Vehicle
{
    int VNumber; // data member
    char VName[20];
    int Price;
} Vehicle;

int main()
{
    // variable of structure
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);

    Vehicle V[n];
    printf("Enter the details of vehicles:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the details of vehicle : %d\n", i + 1);
        printf("Enter the VNumber:\n");
        scanf("%d", &V[i].VNumber);
        printf("Enter the vehicle Name:\n");
        scanf("%s", &V[i].VName);
        printf("Enter the Vehicle price:\n");
        scanf("%d", &V[i].Price);
    }

    for (int i = 0; i < n; i++)
    {
        printf("--------------Details of vehicle : %d\n", i + 1);
        printf("VNumber: %d\n", V[i].VNumber);
        printf("VName: %s\n", V[i].VName);
        printf("Price: %d\n", V[i].Price);
    }

    return 0;
}

// 1)
// display the details of 5 employee
// id , name salary , desination

// print the info of emp how has highest salary
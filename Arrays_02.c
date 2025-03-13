/*------------sum of arrays-------*/
/*
#include<stdio.h>
int main(){


 int size, sum=0;
 printf("Enter the array size :\n");
 scanf("%d",&size);

 int arr[size]; // arrys size must be known before program compilation

 printf("\nAdd The values in arrays\n");

 for (int i = 0; i < size; i++)
 {
    scanf("%d",&arr[i]);
 }
 printf("\nThe values of arrays : \n");

 for (int i = 0; i < size; i++)
 {

    printf(" %d",arr[i]);
 }
 // the total marks of student is

 for (int i = 0; i < size; i++)
 {
     sum = sum + arr[i];
 }
 printf("sum of an array :%d\n",sum);
    return 0;
}

*/
/*------------------- Reverse arrays--------------*/
/*
#include <stdio.h>
int main()
{
    int size, sum = 0;
    printf("Enter the array size :\n");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("\nAdd The values in arrays\n");
    
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe reverse values of arrays : \n");

    for (int i = size - 1; i >= 0; i--)
    {

        printf(" %d", arr[i]);
    }
    
    return 0;
}
    
*/
/*---------------Bubble Sorting  ASC AND DESC ---------- */
/*
#include <stdio.h>
int main()
{
    int size,;
    int temp ;
    printf("Enter the array size :\n");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("\nAdd The values in arrays\n");
    
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe sorting values of arrays in ascending order : \n");
          
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
          {
            if (arr[j] > arr[j+1])
            {
              temp  = arr[j];   // 20
              arr[j] = arr[j+1];//10
              arr[j+1]=temp;    //20
          }
        }
        
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    

    printf("\nThe sorting values of arrays in descending order : \n");
    
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] < arr[j+1])
            {
              temp  = arr[j];   // 20
              arr[j] = arr[j+1];//10
              arr[j+1]=temp;    //20
            }
        }
        
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}

*/
/*--------------------- reversing the arrays --------------*/
/*
#include <stdio.h>

int main()
{
    int size;
    printf("Enter the array size :\n");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("\nAdd the values in arrays\n");
    
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    // Reverse the array itself by swapping elements
    int start = 0;
    int end = size - 1;
    int temp;
    
    while (start < end)
    {
        temp = arr[start]; 
        arr[start] = arr[end]; 
        arr[end] = temp;   
        
        start++;
        end--;
    }
    
    printf("\nThe reversed values of arrays : \n");
    
    for (int i = 0; i < size; i++)
    {
        printf(" %d", arr[i]);
    }
    
    return 0;
}

*/

/*----------- Inserting an Element--------------*/
/*
#include <stdio.h>

int main()
{
    int size;
    printf("Enter the array size (excluding the extra element you will add) :\n");
    scanf("%d", &size);
    
    int arr[size + 1];
    
    printf("\nAdd the values in arrays\n");
    
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int element_to_add ;
    printf("Enter the element to add\n");
    scanf("%d",&element_to_add);
    int insert_index;
    printf("Enter the index at which you want to insert the element (0 to %d):\n", size);
    scanf("%d", &insert_index);
    
    // Shift elements to the right to make space for the new element
    for (int i = size; i > insert_index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[insert_index] = element_to_add;
    size++; // Increase the size of the array after insertion
    
    printf("\nThe array after insertion :\n");
    for (int i = 0; i < size; i++)
    {
        printf(" %d", arr[i]);
    }
    
    return 0;
}
*/

/*------------ Deleting an Element-----------*/

/*
#include <stdio.h>

int main()
{
    int size;
    printf("Enter the array size :\n");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("\nAdd the values in arrays\n");
    
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int delete_index;
    printf("Enter the index of the element you want to delete (0 to %d):\n", size - 1);
    scanf("%d", &delete_index);
    
    // Shift elements to the left to remove the specified element
    for (int i = delete_index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--; // Decrease the size of the array after deletion
    
    printf("\nThe array after deletion :\n");
    for (int i = 0; i < size; i++)
    {
        printf(" %d", arr[i]);
    }
    
    return 0;
}

*/
        

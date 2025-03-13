#include<stdio.h>
// arrays is manipulating using index
// arrays name itself a internal pointer
// arrrays values called element
int main(){

 // int Marks[5]; //  (declaration of array)  [] subscript operator 


 int size, sum = 0;
 scanf("%d",&size);

 int arr[size]; // arrys size must be known before program compilation

 printf("\n add The values of arrays\n");

 for (int i = 0; i < size; i++)
 {
    scanf("%d",&arr[i]);
 } 
 printf("\nThe values of arrays\n");

 for (int i = 0; i < size; i++)
 {
    printf(" %d",arr[i]);
 }
 // the total marks of student is

int max=arr[0], min=arr[0] ; int midval,midelemnt;
 for (int i = 0; i < size; i++)
 {
    if (max < arr[i])
    {
        max = arr[i];
    }
    if (min > arr[i])
    {
        min = arr[i];
    }  

     midval = min + max ;
     midval = (midval)/2;
 }
 printf("\nThe min  values : %d",min);
 printf("\nThe max  values : %d",max);
 printf("\nThe mid  values : %d",midval);
    return 0;
}

// bubble sort ascending and  descending

// Insert element in arrays
// Delete and element in an arrays after adding values one values should need to taken from yourself 
// e.g take 5 values and 1 from yourself,  add and delete at perticular index
// reverse the array itself



// 2D is collection of 1d and 3d array is collection of 2d arrays
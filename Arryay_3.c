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
    delete_index = delete_index -1;
    
    // Shift elements to the left to remove the specified element
    for (int i = 0 ; i < size ; i++)
    {
        if (i > delete_index)
        {
            arr[i]= arr[i+1];
        }
        
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

// Insert the element in an array at spefific position

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
    
    int element_to_add;
    int insert_index;
    printf("Enter the element to add\n");
    scanf("%d",&element_to_add);
    printf("Enter the index at which you want to insert the element (0 to %d):\n", size);
    scanf("%d", &insert_index);
    
    // Shift elements to the right to make space for the new element
    for (int i = size; i > 0; i--)
    {
        if (i > insert_index)
        {
            arr[i] = arr[i - 1];
        }      
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

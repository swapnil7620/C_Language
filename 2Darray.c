/* adition of matrix 

#include <stdio.h>
int main()
{
    int arr[2][2];
    int brr[2][2];
    int crr[2][2];

    printf("\n -------------- For ARR --------------\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("\nEnter the arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n -------------- For BRR --------------\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("\nEnter the brr[%d][%d] = ", i, j);
            scanf("%d", &brr[i][j]);
        }
    }

    // the addition of crr = arr + brr 
    for (int  i = 0; i < 2; i++)
    {
        for (int  j = 0; j < 2; j++)
        {
            crr[i][j] = arr[i][j] + brr[i][j];
        }
    }
   
    printf("\n --------------- CRR = ARR + BRR ------------------ \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("| %d | , ", crr[i][j]);
        }
        printf("\n");
    }
    printf("\n --------------------------------- \n");

    return 0;
}

*/
// multiplication of matrix
#include <stdio.h>
int main()
{
    int arr[2][2];
    int brr[2][2];
    int crr[2][2]={0};

    printf("\n -------------- For ARR --------------\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("\nEnter the arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n -------------- For BRR --------------\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("\nEnter the brr[%d][%d] = ", i, j);
            scanf("%d", &brr[i][j]);
        }
    }

    // the mulition of crr = arr * brr 
    for (int  i = 0; i < 2; i++)
    {
        for (int  j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                
            crr[i][j] += arr[i][k] * brr[k][j];
            }
            
        }
    }
   
    printf("\n --------------- CRR = ARR * BRR ------------------ \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("| %d | , ", crr[i][j]);
        }
        printf("\n");
    }
    printf("\n --------------------------------- \n");

    return 0;
}
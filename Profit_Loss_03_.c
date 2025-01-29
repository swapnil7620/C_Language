//  Profit And Loss Example

/*
#include <stdio.h>
void main()
{

    int Cost_Price = 1000;
    int Selling_Price = 2000;

    if (Selling_Price > Cost_Price)
    {
        int Profit = Selling_Price - Cost_Price;
        printf("profit is = %d", Profit);
    }

    else if (Cost_Price > Selling_Price)
    {
        int Loss = Cost_Price - Selling_Price;
        printf("Loss is = %d", Loss);
    }
    else
    {
        printf("Profit is 0");
    }
}
*/

// Calculate the profit and loss by taking user ( Cost_Price And Selling_Price ) From User

/*
#include <stdio.h>

void main()
{

    int Cost_Price, Selling_Price, Profit, Loss;

    printf("Enter the Cost Price\n ");
    scanf("%d", &Cost_Price);
    printf("Enter the Selling Price\n");
    scanf("%d", &Selling_Price);

    if (Selling_Price > Cost_Price)
    {
        Profit = Selling_Price - Cost_Price;
        printf("We got a profit of = %d ", Profit);
    }

    else if (Cost_Price > Selling_Price)
    {
        Loss = Cost_Price - Selling_Price;
        printf("We Faced a loss of = %d ", Loss);
    }
    else
    {
        printf("We got 0 Profit");
    }
}

*/
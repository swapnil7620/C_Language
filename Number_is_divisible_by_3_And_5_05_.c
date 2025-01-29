// Program for  which Number is divisible by 3 And 5

 

#include<stdio.h>

void main() {

int Number ;
printf("Enter the Number = ");
scanf("%d",&Number);

if ( Number % 3 == 0 && Number % 5 == 0){

    printf("%s", "C Language");
}
else if (Number % 3 == 0){
    printf("%s", "C");

}
else if (Number % 5 == 0)
 {
     printf("%s","Language");
}
else{
    printf("%s", "Number is not divisible by  3 And 5");
}
}


// Program for  which Number is divisible for 3 And 5 using for loop

/*
#include <stdio.h>
void main()
{
    int Number ;
    printf("Enter the Number : ");
    scanf(" %d", &Number);

    for (int i = 1; i <= Number; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("%d : C Language \n", i);
        }
        else if (i % 3 == 0)
        {
            printf("%d : C \n", i);
        }
        else if (i % 5 == 0)
        {
            printf("%d : Language \n", i);
        }
        else
        {
            printf("%d : Number is not divisible by 3 and 5 \n", i);
        }
    }
}
*/

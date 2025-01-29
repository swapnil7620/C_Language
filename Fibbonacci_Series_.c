//  print fibonacci series up  to N

/*
#include<stdio.h>

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

*/
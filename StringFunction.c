#include<stdio.h>
#include<string.h>

void main(){

char str1[]="Swapnil";
char str2[]="Mahajan";
// to count the length 
// printf("%d",strlen(str1));
// To concat the string

// strcpy(str1,str2);
printf("%s %s",str1 ,str2);

// to copy the data from one into another
// strcat(str1,str2);

// to comapre the value
if(strcmp(str1,str2)){

    printf("\nBoth are same\n");
}
else{
    printf("\nBoth are not same\n");
}

}
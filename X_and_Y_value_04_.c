// program for  x and y values lies in which quadrant


#include<stdio.h>

void main(){

int x ;
int y ;
printf("Enter the values of x and y ");
scanf("%d%d",&x,&y);

if(x > 0 && y > 0){
    printf(" its lies in First Quadrant");

}
else if(x < 0 && y < 0 ){
    printf("  its lies in Thired Quardrant");
}

else if ( x > 0 && y < 0){
    printf("  its lies in Second  Quadrant");

}
else  if( x < 0 && y > 0){
    printf(" its lies in Fourth  Quadrant");
}
else{
    printf(" Both x and y are presnt on origin");
}

}

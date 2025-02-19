// WAP TO FIND THE LARGE NUMBER IN 3 NUMBERS
#include<stdio.h>


int main(){
    int x,y,z;
    printf("Enter ur value x:");
    scanf("%d",&x);

    printf("Enter ur value y:");
    scanf("%d",&y);

    printf("Enter ur value z:");
    scanf("%d",&z);

    if(x>y){
        printf("x is large num");
    }else if(x>z){
        printf("x is large num");
    }else if(y>z){
        printf("y is large num");
    }else{
        printf("z is large num");
    }
    
    return 0;

    
}
#include<stdio.h>

int main(){

    int num;
    printf("Enter your num:");
    scanf("%d",&num);

    if(num>0){
        if(num%2==0){
            printf("Even");
        }else{
            printf("Odd");
        }
    }else
    printf("Wrong num");
}
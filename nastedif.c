#include<stdio.h>

int main(){

    int age;
    printf("Enter your age:");
    scanf("%d",&age);

    if(age>0){
        if(age>=18){
            printf("Your are eligible for vote");
        }else{
            printf("Your not eligible for vote");
        }
    }else
    printf("Enter your valid age num");
}
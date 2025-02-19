#include<stdio.h>

int main(){
    int num1,num2,choice;

    printf("Enter num 1:");
    scanf("%d",&num1);
    printf("Enter num 2:");
    scanf("%d",&num2);
    printf("Enter ur choice:\n 1.Addition \n 2.Substraction \n 3.Multiplication \n 4.Division");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        printf("Addition of num1 and num 2 is :%d",num1+num2);break;
        case 2:
        printf("Substraction of num1 and num 2 is :%d",num1-num2);break;
        case 3:
        printf("Multiplicaton  of num1 and num 2 is :%d",num1*num2);break;
        case 4:
        printf("Division of num1 and num 2 is :%f",((float)num1/num2));break;
        default:
        printf("wrong choice");

    }
    return 0;
  
}
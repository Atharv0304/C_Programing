#include <stdio.h>

int main(){
    int a , b , sum , minu , divd , div , mul;
    printf("Enter value of a:");
    scanf("%d",&a);

    printf("Enter value of b:");
    scanf("%d",&b);

    sum = a+b;
    minu = a-b;
    divd = a%b;
    div = a/b;
    mul = a*b;
    printf("sum: %d\n",sum);
    
    printf("sum: %d\n",minu);
    
    printf("sum: %d\n",divd);
    
    printf("sum: %d\n",div);

    printf("sum: %d\n",mul);


    return 0;
}



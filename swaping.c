#include<stdio.h>
int main(){
    int a=10;
    int b=20;
    printf("Before swaping :%d\n",a);
    printf("Before swaping :%d\n",b);

    // int temp=a;
    // a=b;
    // b=temp;

    // printf("After swaping :%d\n",a);
    // printf("After swaping :%d\n",b);
    // return 0;

    // a=a+b;//30
    // b=a-b;//10
    // a=b-a;//20

    a=a*b;//200
    b=a/b;//10
    a=a/b;//20

    printf("After swaping :%d\n",a);
    printf("After swaping :%d\n",b);



    return 0;


}
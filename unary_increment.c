#include<stdio.h>

int main(){

    int a=10;//10 11
    int b=a++;//10

    printf("%d\n",a++);
    printf("%d\n",++a);
    printf("%d\n",++b);

    printf("%d",a+b);

    return 0;

}
#include<stdio.h>

int main(){
    int a,reverse=0;
   
    printf("Enter a value for checking:");
    scanf("%d",&a);//121
    int temp=a;
    while (a>0) 
    {
        int digit=a%10;
        reverse=reverse*10+digit;
        a=a/10;
      
    }
    //121 a=0 temp-121
    if (temp == reverse)
    {
        printf("The give value is palindrom");
    }else{
        printf("The given value is Not palindrom");
    }
    return 0;   
}



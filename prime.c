#include<stdio.h>

int main(){
    int num,a=2,count=0;
    printf("Enter a value of num:");
    scanf("%d",&num);

    while (a<num/2)
    {

        if (num%a==0){
            count++;
            
            
        }
        a++;
        
    }
    if (count==0)
    {
        printf("The given num is prime ");
    }else{
        printf("The given num is not prime ");
    }
    

    return 0;

}


// 1.WAP to print all prime num betn 1 to 100



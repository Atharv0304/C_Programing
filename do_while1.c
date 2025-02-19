// #include<stdio.h>

// int main(){
//   int a=1,b=100;

//   do
//   {
//     if (a%2==0)
//     {
//        printf("%d \n",a);
       
//     }
//     a++;
    
//   } while (a<=b);

//   return 0;

// }

// WAP print a sum of 1 to 10 like 1+2+3+4+-------+10=55

#include<stdio.h>

int main(){

    int a=1,b=10,sum;
    do
    { 
       sum=a+sum; 
       a++;

      
    } while (a<=b);//false
    printf("%d",sum);
    return 0;
}

// WAP to print a factorial of n -- 5*4*3*2*1

#include<stdio.h>

int main(){

    int a=1,n,sum=1;
    printf("Enter a value of n:");
    scanf("%d",&n);

    do
    {
        sum=n*sum;
        
        n--;
    } while (n>=a);
    printf("%d",sum);

    return 0;
    
}

// WAP to print a sum of even number 1 to n 


#include<stdio.h>

int main(){

    int a=1,n,sum=0;
    printf("Enter a value of n:");
    scanf("%d",&n);

    do
    {
        if (a%2==0)
        {
            sum=a+sum;
            
            
        }
        a++;
    
    } while (a<=n);
    printf("Total sum of even number is :%d",sum);

    return 0;
    
}

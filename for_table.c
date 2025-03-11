// #include<stdio.h>

// int main(){

//     int sum,n;
//     printf("Enter a value:");
//     scanf("%d",&n);

//     for (int a = 1; a <= 10; a++)
//     {
//         sum=a*n;
//         printf("%d",sum);    
//     }
    
// }

#include<stdio.h>

int main(){

    int sum=0,n;
    printf("Enter a value:");
    scanf("%d",&n);

    for (int a = 1; a <= n; a++)
    {
        if (a%2==0)
        {
            sum+=a;
             
            
        }
        printf("sum of all 1 to 100 prime number %d",n,sum);
        
        
    }
      
    return 0;
}


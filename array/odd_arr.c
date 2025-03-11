#include<stdio.h>

int main(){
    int size , i , sum=0;
    
    
    printf("Enter a size of arr:");
    scanf("%d",&size);

    int arr[size];

    printf("Enter a value: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("All odd num in arr:%d\n");
    for ( i = 0; i < size; i++)
    {
        if (arr[i]%2!=0)
        {
            printf("%d",arr[i]);
            sum+=arr[i];
        }
            

    }
    printf("sum of odd num : %d",sum);
        
    
    return 0;
    
    

}
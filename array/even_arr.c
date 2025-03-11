#include<stdio.h>

int main(){
    int size , x , found=0 , i;
    
    
    printf("Enter a size of arr:");
    scanf("%d",&size);

    int arr[size];

    printf("Enter a value: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("All even num in arr:");
    
    for ( i = 0; i < size; i++)
    {
        if (arr[i]%2==0)
        {
            printf(" %d",arr[i]);
        }

        printf("\n");
        
        
    
    }
        
    
    return 0;
    
    

}
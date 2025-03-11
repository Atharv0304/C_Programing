#include<stdio.h>

int main(){
    int size,i;
    int arry[size];
    printf("Enter a len of array:");
    scanf("%d",&size);

    for ( i = 0; i < size; i++)
    {
        scanf("%d",&arry[i]);
    }
    int key;
    printf("Enter a key to found:");
    scanf("%d",&key);

    int left=0 , right=size-1;

    while (left<right)
    {
        int mid = left+(left-right)/2;
        if (arry[i]==key)
        {
            printf("Key found %d",mid);
            break;
        }
        if (arry[mid]>key)
        {
            right=mid-1;
        }else 
        {
            left=mid+1;
        }
        
        
        
    }
    
}
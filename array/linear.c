#include <stdio.h>
int main(){
    int i,found=0,x , size;
    int arry[size];
    printf("Enter a len:");
    scanf("%d",&size);

    printf("Enter a val:");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&arry[i]);
    }
    printf("Enter a number to search:");
    scanf("%d",&x);

    for ( i = 0; i < size; i++)
    {
        if (arry[i]==x)
        {
            found=1;
            break;
        }
    
    }
    if (found)
    {
        printf("%d was found at index %d",x,i);
    }else{
        printf("Element not found");
    }
    
}
    

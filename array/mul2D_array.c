#include<stdio.h>



int main(){
    int arr1[3][3];
    int arr2[3][3];
    int mul[3][3];

    printf("Enter a val for arr1:");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        
    }

    printf("Enter a val for arr2:");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
        
    }


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mul[i][j]=0;
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                mul[i][j]+=arr1[i][k]*arr2[k][j];
            }
            
            
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
        
    }
    return 0;
    
    
}
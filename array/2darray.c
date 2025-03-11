#include<stdio.h>
int main(){
    int arry[5][2];
    printf("enter a arry:");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&arry[i][j]);
        }
        
    
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d",arry[i][j]);
        }
        printf("\n");
        
    }
    
    

}


#include<stdio.h>
#include<stdlib.h>
//0 0   0 0 0
//0 0   0 0 0
//0 0 

void addition(int arr1[3][3],int arr2[3][3])
{
  int sum[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        { 
            sum[i][j]=arr1[i][j]+arr2[i][j];
        
 
        } 
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        { 
            printf("%d ",sum[i][j]);

        } 
        printf("\n");
    }
}

void subtraction(int arr1[3][3],int arr2[3][3])
{
    int sum[3][3];
      for (int i = 0; i < 3; i++)
      {
          for (int j = 0; j < 3; j++)
          { 
              sum[i][j]=arr1[i][j]-arr2[i][j];
   
          }
          
          
      }
      for (int i = 0; i < 3; i++)
      {
          for (int j = 0; j < 3; j++)
          { 
              printf("%d ",sum[i][j]);
  
          } 
          printf("\n");
      }  
  
  }

  void multiplication(int arr1[3][3],int arr2[3][3])
  {
    int mul[3][3]={0};
    
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
    
}
      
int main()
{
    int arr1[3][3],arr2[3][3];
    int choice;

    printf("Enter a value arr1 :");
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            
            scanf("%d",&arr1[i][j]);
    
        }
        
    }
    printf("Enter a value arr2 :");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
        
    }

    printf(" enter the choice\n 1. Addition\n2. Subtraction\n3. Multiplication\n");
    scanf("%d",&choice);

    switch (choice)
    {
     case 1:
        addition(arr1,arr2);
        break;

     case 2:
        subtraction(arr1,arr2);
        break;

     case 3:
        multiplication(arr1,arr2);
        break;

     default:
     printf("Invalid choice");

    }

}
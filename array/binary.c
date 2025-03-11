#include<stdio.h>
int main(){
    int arry[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arry[i]);
    }
    int key;
    printf("Enter a key to find:");
    scanf("%d",&key);

    int left=0,right=4;

    while (left<=right)
    {
        int mid = left+(right-left)/2;
        if (arry[mid]==key)
        {
            printf("Element is present %d",mid);
            break;
        }
        if (arry[mid]>key)
        {
            right=mid-1;
        }else{
            left=mid+1;
        }
        
        
    }
    
    return 0;
}


// #include<stdio.h>
// int main(){
//     int arry[6];
//     for (int i = 0; i < 6; i++)
//     {
//         scanf("%d",&arry[i]);

//     }
//     int key;
//     printf("Enter a value to search:");
//     scanf("%d",&key);

//     int left=0 ,right = 5;

//     while (left<=right)
//     {
//         int mid=left+(left-right)/2;
//         if (arry[mid]==key)
//         {
//             printf("Key Found %d", mid);
//             break;
//         }
//         if (arry[mid]>key)
//         {
//             right=mid-1;
//         }else{
//             left=mid+1;
//         }  
//     }
//     return 0;
// }


// //Square
// #include<stdio.h>
// int main(){
//     for (int i = 1; i <= 6; i++){
//         for (int j = 1; j <= 6 ; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
        
//     }
//     return 0;
    
// }


//Square Hollo

// #include<stdio.h>
// int main(){
//     for (int i = 1; i <= 6; i++){
//         for (int j = 1; j <= 6 ; j++)
//         {
//             if (i==1||i==6||j==1||j==6)
//             {
//                 printf("*");
//             }else
//               printf(" ");
            
        
//         }
//         printf("\n");
        
//     }
//     return 0;
    
// }

// Trangle


// #include<stdio.h>
// int main(){
//     for (int i = 1; i <= 6; i++){
//         for (int j = 1; j <= 6-i ; j++)
//         {
//             printf(" ");
        
        
//         }
//         for (int j = 1; j <= i ; j++)
//         {
//             printf("*");
//         }
        
       
        
//             printf("\n");
        
        
//     }
//     return 0;
    
// }

// Trangle

// #include<stdio.h>
// int main(){
//     for (int i = 1; i <= 6; i++){
//         for (int j = 1; j <= 6-i ; j++)
//         {
//             printf(" ");
        
        
//         }
//         for (int j = 1; j <= i ; j++)
//         {
//             printf("* ");
//         }
        
       
        
//             printf("\n");
        
        
//     }
//     return 0;
    
// }

// Trangle Hollo

// #include<stdio.h>
// int main(){
//     for (int i = 1; i <= 6; i++){
//         for (int j = 1; j <= 6-i ; j++)
//         {
//             printf(" ");
        
        
//         }
//         for (int j = 1; j <= i ; j++)
//         {
//             if (i==6||j==1||j==i)
//             {
//                 printf("* ");
//             }
//             else{
//                 printf("  ");

//             }
 
            
//         }
        
//         printf("\n");
           


        
//     }
//     return 0;
    
// }

// Diamond Pattern

#include<stdio.h>
int main(){
    for(int i=1;i<=6;i++){
        for(int j=1;j<=6-i;j++){
            printf(" ");
        }
        for(int j=1;j<=(2*i-1);j++){
            
            printf("*");   
        }
        printf("\n");
    }
    for(int i=5;i>=1;i--){
        for(int j=1;j<=6-i;j++){
            printf(" ");
        }
        for(int j=1;j<=(2*i-1);j++){
            
            printf("*");   
        }
        printf("\n");
    }
}
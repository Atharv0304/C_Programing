// #include<stdio.h>
// int main(){
//     int a,b;

//     for (int a = 1; a <= 4; a++)
//     {
//         for (int b = 1; b <= 4; b++)
//         {
//             printf("* ");
//         }
//         printf("\n");
        
//     }
//     return 0;
    
// }


#include <stdio.h>
int main() {
    int a, b;

    for (a = 4; a >= 1; a--) {
        for (b = 1; b <= a; b++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}



// #include <stdio.h>
// int main() {
//     int a, b;

//     for (a = 1; a <= 4; a++) {  // Start from 1 and increase
//         for (b = 1; b <= a; b++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


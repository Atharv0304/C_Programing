// #include <stdio.h>
// int main(){
//     int a=1,b;
//  do{
//     a++;
//     b=1;
//     printf("%d \n",a++);
//     printf("%d \n",a+b);
//    } while (a<10);

// printf("end main");

// return 0;

// }

// WAP to print 1 to 100 even  no. using d while loop
 #include<stdio.h>

 int main(){
   int a=1,b=100;

   do
   {
     if (a%2==0)
     {
        printf("%d \n",a);
        a++;
     }
     
   } while (a<=b);

   return 0;

 }


 


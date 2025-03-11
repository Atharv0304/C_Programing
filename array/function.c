// #include<stdio.h>

// int demo(int a){
//     printf("%d\n",++a);//3 8 8 17
//     return a*2;
// //3 8 16 8
// }
// int main(){
//     int n;
//     printf("Enter a value n:");
//     scanf("%d",&n);
//     int b=demo(n);//6 7 8
//     printf("%d\n",demo(++b));//16
//     int c=demo(b++);//16
//     b=b+c;//8+16=24
//     printf("%d\n",demo(c));//34
//     printf("%d\n",b+c);//24+16=40
// }

#include<stdio.h>
#include<stdlib.h>
int add(a,b){
    return a+b;
}

int sub(a,b){
    return a-b;
}

int mul(a,b){
    return a*b;
}

int div1(a,b){
    return a/b;
}


int main(){
    add(2,3);
    printf("Result %d",add());
   
}

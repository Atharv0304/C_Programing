#include<stdio.h>

int main (){
    char name [100];
    int marks;

    printf("Enter your name :");
    scanf("%s",name);

    printf("Enter your marks :");
    scanf("%d",&marks);

    if(marks>90){
        printf("name: %s\n Grade'A'\n",name);
    }else if (marks>70){
        printf("name: %s\n Grade'B'\n",name);
    }else if (marks>50){
        printf("name: %s\n Grade'C'\n",name);
    }else if (marks>35){
        printf("name: %s\n Grade'D'\n",name);
    }else{
        printf("name: %s\n FAIL\n",name);
    }
    return 0;
}
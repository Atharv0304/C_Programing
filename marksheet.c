#include<stdio.h>

int main(){

    int roll_no;
    char name[50];
    int sub1,sub2,sub3,sub4,sub5;
    char Grade;

    printf("Enter your roll_no :\n");
    scanf("%d",&roll_no);

    printf("Enter your name:\n");
    scanf("%s",name);

    printf("Enter your marks in Hindi:\n");
    scanf("%d",&sub1);

    printf("Enter your marks in Math:\n");
    scanf("%d",&sub2);

    printf("Enter your marks in Chemistry:\n");
    scanf("%d",&sub3);

    printf("Enter your marks in Physics:\n");
    scanf("%d",&sub4);

    printf("Enter your marks in Biology:\n");
    scanf("%d",&sub5);

    int total_marks = sub1 + sub2 + sub3 + sub4 + sub5;
    float percentage = (total_marks / 500.0) * 100;


    

    printf("Total per is:%.2f%%\n",percentage);


    if(percentage>90){
        Grade='A';
    }else if (percentage>70){
        Grade='B';
    }else if (percentage>50){
        Grade='C';
    }else if(percentage>35){
        Grade='D';
    }else{
        Grade='F';
    }

    printf("\n\t\t------------MARKSHEET----------------");
    printf("\n\t\t| ROLL NO.: \t|\t%d",roll_no);
    printf("\n\t\t| NAME.: \t|\t%s",name);
    printf("\n\t\t| PERCENTAGE: \t|\t%.2f",percentage);
    printf("\n\t\t| GRADE: \t|\t%c",Grade);
    printf("\n\t\t--------------THANKS-----------------");
    return 0;

}
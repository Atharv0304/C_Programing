#include<stdio.h>
int main (){

    int a,b,c,d,e;

    printf(" Enter the vale of a:");
    scanf("%d",&a);


    printf("Enter the vale of b:");
    scanf("%d",&b);

    printf("Enter the vale of c:");
    scanf("%d",&c);

    printf("Enter the vale of d:");
    scanf("%d",&d);

    printf("Enter the vale of e:");
    scanf("%d",&e);


    printf("THE MAXIMUM VALUE IS :%d",(a>b&&a>c&&a>d&&a>e)?a:(b>c&&b>d&&b>e)?b:(c>d&&c>e)?c:(d>e)?d:e);


    return 0;
}
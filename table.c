#include<stdio.h>
int main(){

int a,num,end;
printf("Enter a start table value :");
scanf("%d",&num);
printf("Enter a end table value :");
scanf("%d",&end);



while (num<=end)
{
    a=1;
    while (a<=10)

    {
        printf("%d  ",a*num);
        a++;
    }
    
    printf("\n");
    num++;

}
return 0;
}
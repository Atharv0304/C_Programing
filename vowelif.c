// WAP IF STATEMENT TO CHECK IF A CHARACTER IS A VOWEL
#include<stdio.h>

int main(){

    char value;
    printf("Enter your value:");
    scanf("%c",&value);

    if(value=='a'||value=='e'||value=='i'||value=='o'||value=='u'){
        printf("GIVEN CHAR IS VOWEL");

    }else{
        printf("GIVEN CHAR IS NOT VOWEL");
    }
    return 0;
}
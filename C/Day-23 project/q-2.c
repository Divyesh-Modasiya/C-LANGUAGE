#include<stdio.h>
int main(){
    char n[100];
    char n1[100];
    char n2[100];
    printf("Enter First name :");
    gets(n);
    printf("Enter Last name :");
    gets(n1);

    printf("%s",strcpy(n2,strcat(n,n1)));
}
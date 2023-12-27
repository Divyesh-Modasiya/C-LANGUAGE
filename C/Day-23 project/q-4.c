#include<stdio.h>
int main(){
    char n[100];
    char n1[100];
    printf("Enter name :");
    gets(n);

    strcpy(n1,n);
    strrev(n1);
    if (strcmp(n,n1)==0)
    {
        printf("yes");
    }
    else{
        printf("no");
    }
}
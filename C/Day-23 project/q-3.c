#include<stdio.h>
int main(){
    char n[100];
    char n1[100];

    printf("Enter name :");
    gets(n);
    printf("Enter name :");
    gets(n1);

    if (strcmp(n,n1)==0)
    {
        printf("Equal");
    }
    else{
        printf("Not Equal");
    }
    
}
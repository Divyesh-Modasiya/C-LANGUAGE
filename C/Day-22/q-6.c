#include<stdio.h>
int main(){
    char f[100]="abc";
    char s[100]="123";
    char f1[100];
    char s1[100];

    printf("Enter f :");
    gets(f1);
    printf("Enter s :");
    gets(s1);

    if (strcmp(f,f1)==0 && strcmp(s,s1)==0)
    {
        printf("Strings are equal");
    }else{
        printf("No, they are not equal");
    }
    
}
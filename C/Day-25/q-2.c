#include<stdio.h>
send(char str1[]){
   printf("Leangth of string is :%d",strlen(str1));
}
int main(){
    char str[100];

    printf("ENTER VALUE :");
    gets(str);
    send(str);
}
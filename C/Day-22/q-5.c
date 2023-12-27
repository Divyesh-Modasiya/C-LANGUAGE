#include<stdio.h>
int main(){
    char fname[100];
    char lname[100];
    char fullname[100];

   printf("Enter fname :");
   gets(fname);
   printf("Enter lname :");
   gets(lname);

   printf(strcpy(fullname,(strcat(fname,lname))));
}
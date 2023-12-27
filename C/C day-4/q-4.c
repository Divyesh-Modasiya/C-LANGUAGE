#include<stdio.h>
int main(){
   const int a = 3;
   const int b = 2;
   int c;
    printf("Enter First value : ");
    scanf("%d",&c);
    printf("increment  is : %d\n",c+=a);
    printf("multiplication  is : %d",c*=b);
}
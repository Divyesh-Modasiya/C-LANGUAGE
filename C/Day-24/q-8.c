#include<stdio.h>
void  printTable(int a1){
    for (int i = 1; i <= 10; i++)
    {
       printf("%d * %d = %d\n",a1,i,i*a1);
    }
    
}
void main(){
  int a;
  printf("Enter Number :");
  scanf("%d",&a);
    printTable(a);
}
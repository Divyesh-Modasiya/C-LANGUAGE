#include<stdio.h>
int main(){
    int a,b;
    printf("Enter value :");
    scanf("%d",&b);
      double c = 1;
    for ( a = 1; a <= b ; a++)
    {
       c*=a;
    }
     printf("%lf\n",c);
    
    
} 
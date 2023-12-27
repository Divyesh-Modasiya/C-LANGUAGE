#include<stdio.h>
int main(){
    int a;
    printf("Enter value :");
    scanf("%d",&a);

    while (a>0)
    {
      if (a%2 != 0)
      {
       printf("%d\n",a);
      }
      a--;
        
    }
    
}
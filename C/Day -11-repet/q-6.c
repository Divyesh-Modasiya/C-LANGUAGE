#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter value :");
    scanf("%d",&b);

    c = 0;
    for ( a = 0; a <= b; a++)
    {
        c+=a;
    }
          printf("%d\n",c);
    
}
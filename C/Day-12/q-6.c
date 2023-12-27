#include<stdio.h>
int main(){
    int a=1;

    while (a<=60)
    {
         if (a%6==0)
        {
            a++;
            continue;
        }
        printf("%d\n",a);
        a++;
       
        
    }
    
}
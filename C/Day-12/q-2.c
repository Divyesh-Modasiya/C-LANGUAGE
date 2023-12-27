#include <stdio.h>
int main(){
    int a = 1,b = 0;

    while (a<=50)
    {   
        if (a%2==0)
        {
        printf("%d\n",a);
          b++;
        }
        if (b==10){
         
            break;
        }
        
        a++;
    }
    
}
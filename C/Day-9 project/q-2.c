#include <stdio.h>
int main (){
    int a;
    printf("Enter value :");
    scanf("%d",&a);

    if (a <= 50)
    {
        a = a*0.50;
        printf("Bill is :%d\n",a);
    }else if (a<=150)
    {
        a = ((a-50)*0.75)+25;
        printf("Bill is :%d\n",a);
    }else if (a<=250)
    {
        a = ((a-150)*1.20)+100;
        printf("Bill is :%d\n",a);
    }
    else{
        a = ((a-250)*1.50)+220;
        printf("Bill is :%d\n",a);
    }

        a = (a*20)/100+a;
        printf("Additional surcharge :%.2f",(float)a);
    
    
    
}
#include<stdio.h>
int main(){
    float a,b,c,d;
    printf("Enter First value :");
    scanf("%f",&a);
    printf("Enter Second value :");
    scanf("%f",&b);
    printf("Enter Third value :");
    scanf("%f",&c);
    printf("Enter Forth value :");
    scanf("%f",&d);

    printf("Sum is : %f \n ",a+b+c+d);
    int e=a+b+c+d;
    printf("Type conversesion is : %d ",(int)e);

}


// #include <stdio.h>
// int main(){
//     int n,s;

//       printf("input number is :");
//         scanf("%d",&n);

//     for ( s = 1; s <= n; s++)
//     {
//         printf(" value is %d and %d cube is : %d \n", s , s ,  (s*s*s) );
//     }
    

// }



// int main(){
//     int i,t;

//     printf("input ur table no :");
//     scanf("%d",&t);
//     printf("\n");
//     for ( i = 1; i <= 10; i++)
//     {
//       printf("%d X %d = %d\n",t,i,t*i);
//     }
    
// }



#include<stdio.h>
int main(){
    int i,t=15;
    for ( i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d \n",t,i,(t*i));
    }
    
}
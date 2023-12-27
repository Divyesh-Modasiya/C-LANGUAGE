#include<stdio.h>
int main(){
    int w,l;
    
    printf("Enter Width :");
    scanf("%d",&w);
    printf("Enter Leangth :");
    scanf("%d",&l);

    if(w==l){
        printf("dimensions might not be valid for a rectangle");
    }
    else{
        printf("dimensions might be valid for a rectangle");
    }

}
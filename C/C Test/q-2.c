#include<stdio.h>
int main(){
    int HRA,DA,TA,S;
    printf("Enter the salary : ");
    scanf("%d",&S);
    printf("Enter the HRA : ");
    scanf("%d",&HRA);
    printf("Enter the DA : ");
    scanf("%d",&DA);
    printf("Enter the TA : ");
    scanf("%d",&TA);

    printf("Output is :%d",HRA+DA+TA+S);
}
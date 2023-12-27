#include <stdio.h>
int main(){
     int a, b, c, d ,e;
    printf("Enter value of A :");
    scanf("%d", &a);
    printf("Enter value of B :");
    scanf("%d", &b);
    printf("Enter value of C :");
    scanf("%d", &c);
    printf("Enter value of D :");
    scanf("%d", &d);
    printf("Enter value of E :");
    scanf("%d", &e);

      if (a>b)
      {
        if (a>c)
        {
            if (a>d)
            {
                if (a>e)
                {
                 printf("A is max :%d",a);   
                }else{
                    printf("E is max :%d",e);
                }
                   
            }else{
                printf("D is max :%d",d);
            }
               
        }else{
            if (c>d)
            {
                if (c>e)
                {
                printf("C is max :%d",c);
                }else{
                    printf("E is max :%d",e);
                }
                
            }else{
                if (d>e)
                {
                    printf("D is max :%d",d);
                }else{
                    printf("E is max :%d",e);
                }
                
            }
            
        }
        
      }
      else{
            if (b>c)
            {
                if (b>d)
                {
                    if (b>e)
                    {
                        printf("B is max :%d",b);
                    }else{
                        printf("E is max :%d",e);
                    }   
                    
                }else{
                    printf("D is max :%d",d);
                }
                
            }else{
                if (c>d)
                {   
                    if (c>e)
                    {   
                        printf("C is max :%d",c);
                    }else{
                        printf("E is max :%d",e);
                    }
                    
                }else{
                    if (d>e)
                    {
                        printf("D is max :%d",d);
                    }else{
                        printf("E is max %d",e);
                    }
                    
                }
                
            }
            
      }
      
}
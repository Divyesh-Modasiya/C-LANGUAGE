#include <stdio.h>
int main(){
     int a, b, c, d ,e,f;
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
    printf("Enter value of E :");
    scanf("%d", &f);

    if (a>b)
    {
        if (a>c)
        {
            if (a>d)
            {
                if (a>e)
                {
                    if (a>f)
                    {
                       printf("A is max :%d",a); 
                    }else{
                        printf("F is max :%d",f);
                    }
                    
                }else{
                    if (e>f)
                    {
                        printf("E is max :%d",e);
                    }else{
                        printf("F is max :%d",f);
                    }
                    
                }
                
            }else{
                if (c>d)
                {
                    if (c>e)
                    {
                        if (c>f)
                        {
                            printf("C is max :%d",c);   
                        }else{
                            printf("F is max %d",f);
                        }
                        
                    }else{
                        if (e>f)
                        {
                            printf("E is max :%d",e);
                        }else{
                            printf("F is max :%d",f);
                        }
                        
                    }
                    
                }else{
                    if (d>e)
                    {
                     if (d>f)
                     {
                        printf("D is max :%d",d);
                     }else{
                        printf("F is max :%d",f);
                     }
                        
                    }else{
                        if (e>f)
                        {
                            printf("E is max :%d",e);
                        }else{
                            printf("F is max :%d",f);
                        }
                        
                    }
                    
                }
                
            }
            
        }else{
            printf("C is max :%d",c);
        }
           
    }
    else{

        if (b>c)
        {
            if (b>d)
            {
                if (b>e)
                {
                    if (b>f)
                    {
                        printf("B is max :%d",b);
                    }else{
                        printf("F is max :%d",f);
                    }
                    
                }else{
                    if (e>f)
                    {
                        printf("E is max :%d",e);
                    }else{
                        printf("F is max :%d",f);
                    }
                    
                }
                   
            }else{
                if (d>e)
                {
                    if (d>f)
                    {
                        printf("D is max :%d",d);
                    }else{
                        printf("F is max :%d",f);
                    }
                       
                }else{
                    if (e>f)
                    {
                        printf("E is max :%d",e);
                    }else{
                        printf("f is max ;%d",f);
                    }
                    
                }
                
            }
            
        }else{
                if (c>d)
                {
                    if (c>e)
                    {
                        if (c>f)
                        {
                            printf("C is max :%d",c);
                        }else{
                            printf("F is max :$%d",f);
                        }
                        
                    }else{
                        if (e>f)
                        {
                            printf("E is max :%d",e);
                        }else{
                            printf("F is max :%d",f);
                        }
                        
                    }
                    
                }else{
                    if (d>e)
                    {
                        if (d>f)
                        {
                            printf("D is max :%d",d);
                        }else{
                            printf("F is max :%d",f);
                        }
                        
                    }else{
                        if (e>f)
                        {
                            printf("E is max :%d",e);
                        }else{
                            printf("F is max :%d",f);
                        }
                        
                    }
                    
                }
                
        }
        
    }
    
}
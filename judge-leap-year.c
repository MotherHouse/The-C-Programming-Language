#include <stdio.h>
int main()
{
    
    int mod4,mod100,mod400,year;
    printf("please inpur you year:");
    scanf("%d",&year);
    
    mod4=year%4;
    mod100=year%100;
    mod400=year%400;
    if (mod4==0) {
        if (mod100==0)
        {
            
            if (mod400==0)
            {
            printf(" is leap year\n");
            }
            else
            printf("is not leap year\n");
            
            
        }
        else
        printf(" is leap year\n");
        
        
        
        }
    else
    printf(" is not leap year\n");
    return 0;
    
    
        
        
    }

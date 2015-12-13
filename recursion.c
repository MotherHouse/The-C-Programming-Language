//
//  recursion.c
//  recursion
//
//  Created by Bob on 2015-12-13.
//  Copyright © 2015年 leavenotrace. All rights reserved.
//

#include "stdio.h"



//阶乘   n! = n * (n-1) * (n-2) * ...* 1(n>0)

int factorial(int n)
{
    int sum;
    
    if (n==0) {
        sum = 1;
    }
    else {
        sum = n*factorial(n-1);
        
    }
    return sum;
}



int main()
{
    int m;
    
    m=4;
    
    int result;
    
    result = factorial(m);
    
  
    printf("%d 的阶乘是：%d\n",m, result);
   
    return 0;
}

//
//  bonus.c
//  bonus
//
//  Created by Bob on 15/10/20.
//  Copyright © 2015年 MotherHouse. All rights reserved.
//

#include <stdio.h>

int main() {

    int i;
    double money;
    
    scanf("%d",&i);
    
    if (i<10) {
        money = i + 0.1;
        printf("Money:%f \n",money);
        
    }
    else if (i<=20) {
        money = i + 0.075 + 2.5;
        printf("Money:%f\n",money);
    }
    else {
        money = i + 0.01 + 2.95;
        printf("Money:%f\n",money);
    }
    
    return 0;
}

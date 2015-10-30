//
//  main.c
//  forswitch
//
//  Created by Bob on 15/10/30.
//  Copyright © 2015年 Esquel. All rights reserved.
//

#include <stdio.h>

int main() {
 
    int i = 0;
    
    for (i; i<10; i++) {

        switch (i) {
            case 1:
                printf("It is :%d\n",i);
                break;
           
            case 2:
                printf("It is :%d\n",i);
                break;
                
            case 3:
                printf("It is :%d\n",i);
                break;
        
            default:
                printf("It is not 1&2&3\n",i);
                
                break;
        }
    }
    return 0;
}

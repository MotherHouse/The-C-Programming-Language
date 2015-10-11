//  printASCII
//
//  Created by Bob on 15/10/9.
//  Copyright © 2015年 leavenotrace. All rights reserved.
//

#include <stdio.h>

int main() {
    
    
    for (int c=0; c<=255; c++) {
        printf("ASCII:%d\tHEX:%x\tCHAR:%c\n",c,c,c);
    }

    return 0;
}

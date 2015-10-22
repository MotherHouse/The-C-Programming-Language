//
//  main.c
//  判断奖金总数
//
//  Created by 郑梦远 on 15/10/19.
//  Copyright © 2015年 winmine. All rights reserved.
//
#include <stdio.h>
int main;


int i;

double money;

scanf("%d",&i);

if (i<=10) {
    
    money = i*0.1;
    
}else if (i<=20) {
    
    money = i*0.12;
    
}else if (i<=40) {
    
    money = i*0.05 + 7.5;
    
}else if (i<=60) {
    
    money = i*0.03 + 1.55;
    
}else if (i<=100) {
    
    money = i*0.015 + 1.85;
    
}else{
    
    money = i*0.01 + 2.95;
    
}

printf("Money: %f",money);

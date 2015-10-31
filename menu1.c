//
//  main.c
//  menu
//
//  Created by Bob on 15/10/31.
//  Copyright © 2015年 Esquel. All rights reserved.
//

#include <stdio.h>
#include<stdlib.h>


int menu(){
    int p;
    printf("\t\t    欢迎使用学生成绩管理系统\n");
    printf("\t\t\t0:退出\n");
    printf("\t\t\t1:录入学生信息\n");
    printf("\t\t\t2:排序打印成绩\n");
    printf("\t\t\t3:统计分布情况\n");
    printf("\t\t\t4:查询学生信息\n");
    printf("^_^ 提示:请输入操作命令 > > > >:");
    scanf("%d",&p);
    return p;
}


int main(){
    int ch;
    //...
    while(1){
        system("cls");
        ch=menu();
        if(ch==0)
            break;
        switch(ch){
            case 1:
                //调用 录入学生信息 的函数
                printf("当前你所操作的是录入学生信息！");
                break;
            case 2:
                 printf("排序打印成绩！");
                break;
            case 3:
                printf("统计分布情况！");
                break;
            case 4:
                printf("查询学生信息");
                break;
        }
    }
    system("pause");
    return 0;
}

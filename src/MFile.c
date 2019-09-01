//
// Created by 倾城一世 on 2019/9/1.
//
#include <stdio.h>
#include "MFile.h"


void operateFile(){
    //二进制模式 使用fread 和 fwrite
    //文本信息 使用文本模式，getc 和 fprintf
    FILE *input = fopen("./../data/init.txt", "r");
    int ch;
    while ((ch = fgetc(input)) != EOF){
        putchar(ch);
    }

    printf("\n");
    fclose(input);
}
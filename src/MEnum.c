//
// Created by 倾城一世 on 2019/9/1.
//
#include <stdio.h>
#include "MEnum.h"

void printEnum(){
    enum DAY day;
    day = NON;
    printf("%d \n",day);

    enum Spectrum color;
    color = red;

    printf("color is %d \n",color);
}
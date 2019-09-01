//
// Created by 倾城一世 on 2019/9/1.
//

#include "MConst.h"


void testConst(){
    int value[5] = {1,2,3,4,5};
    int constValue[5] = {6,7,8,9,0};
    //不能修改指针的对应的值
    const int * p  = value;

    //不能修改value[0]的值
//    *p = 2;
    //可以修改指向
    p = constValue;

    //不能修改指针的指向
    int * const p1 = constValue;
    //可以修改指针的对应的值
    *p1 = 2;
    //不能修改指针的指向
    //p1 = value;

    //既不能修改指针对应的值，也不能修改指针的指向
    const int * const p2 = value;


}
//
// Created by 倾城一世 on 2019/9/1.
//

#include <stdio.h>

#include "MUnion.h"

/**
 * union 是一种数据类型，能在同一个内存空间中存储不同的数据类型（不是同时存储）
 */
void testUnion(){
    union Hold valA;
    valA.lettter = 'a';

    union Hold valB = valA;

    union  Hold valC = {88};

    union Hold valD = {.bigf = 118.2};
}
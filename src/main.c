#include <stdio.h>

#include "MString.h"
#include "MStruct.h"
#include "MUnion.h"
#include "MEnum.h"
#include "MArray.h"
#include "MConst.h"
#include "MFile.h"


int focus = 1;
void showStorageType();

int main() {


    printEnum();


    printDate();

    testConst();

    testMoreArr();

//    testString();

    showStorageType();
    
    operateFile();

    // 测试多值赋值
    testStructInitMultiValue();

    testStructZhiZhen();

    testFunc();

    testUnion();

    return 0;
}



void showStorageType(){
    extern int focus;
    printf("focus = %d  \n",focus);
}


//
// Created by 倾城一世 on 2019/9/1.
//
#include <stdio.h>
#include "MArray.h"


void printDate(){
    int days[SIZE] = {21,28,31,30,31,30,31,31,30,31,30,31};
    for (int i = 0; i < SIZE; ++i) {
        printf("Month %2d has %d days \n",i + 1,*(days + i));
    }

}

void testMoreArr(){
    int zippo[4][2] = {
            {2,4},
            {6,8},
            {1,3},
            {5,7}
    };

    printf("zippo = %p zippo + 1 = %p\n",zippo,zippo + 1);
    printf("zippo[0] = %p,zippo[0] + 1 = %p\n",zippo[0],zippo[0] + 1);
    printf("*zippo = %p, *zippo + 1 = %p \n",*zippo,*zippo + 1);
    printf("zippo[0][0] = %d \n",zippo[0][0]);
    printf("*zip[0] = %d \n",*zippo[0]);
    printf("**zippo = %d \n",**zippo);
    printf("zippo[2][1] = %d \n",zippo[2][1]);
    printf("*(*(zippo + 2) + 1) = %d \n",*(*(zippo + 2) + 1));
}
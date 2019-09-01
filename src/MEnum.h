//
// Created by 倾城一世 on 2019/9/1.
//

#ifndef LEARNING_MENUM_H
#define LEARNING_MENUM_H

enum Spectrum {
    red,orange,yellow,green,blue,violet
};

enum DAY{
    NON,TUE,WED,THU,FRI,SAT,SUN
};

/**
 * 默认情况，枚举的常量都被赋予0,1,2，下面nina=3
 */
enum Kids{
    noppy,slats,skippy,nina,liz
};

/**
 * 可以进行赋值，下面，cat=0(默认),lynx，puma，tiger为10,11,12
 */
enum feline {
    cat,lynx = 10,puma,tiger
};


void printEnum();


#endif //LEARNING_MENUM_H

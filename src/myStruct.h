//
// Created by 倾城一世 on 2019/8/27.
//

#ifndef LEARNING_MYSTRUCT_H
#define LEARNING_MYSTRUCT_H
#define LIMIT 40
struct Book{
    char title[LIMIT];
    char author[LIMIT];
    float value;

};

struct BookInit{
    char title[LIMIT];
    char author[LIMIT];
    float value;
}lib;

/**
 * 加上static 避免 报错：multiple definition of `XXXX'
 */
static struct BookInitValue{
    char title[LIMIT];
    char author[LIMIT];
    float value;
}library = {
     .title = "learing C",.author="liujj",.value=29.99F
};

/**
 * 加上static 避免 报错：multiple definition of `XXXX'
 */
static struct BookInitMultiValue{
    char title[LIMIT];
    char author[LIMIT];
    float value;
}libraries[3] = {
        {"learing C","liujj",29.99F},
        {"learing C++","liujj",39.99F},
        {"learing C#","liujj",24.99F}
};

struct Stu{
    char name[20];
    int age;
};

struct Funds{
    char bank[40];
    double bankfund;
    char save[40];
    double savefund;
};

void testStruct();
void testStructInit();
void testStructInitValue();
void testStructInitMultiValue();
void testStructZhiZhen();
void testFunc();

double sum(const struct Funds * money);

#endif //LEARNING_MYSTRUCT_H

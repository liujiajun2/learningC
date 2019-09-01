#include <stdio.h>

#include "myString.h"
#include "myStruct.h"

#define identifier 10
#define SIZE 12

enum DAY{
    NON,TUE,WED,THU,FRI,SAT,SUN
};

void printEnum();

void printDate();

void testConst();

void testMoreArr();

void testString();

int focus = 1;

void showStorageType();

void operateFile();


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
    return 0;
}

void printEnum(){
    enum DAY day;
    day = NON;
    printf("%d \n",day);
    printf("Hello, World!\n");
    printf("%d \n",identifier);
}

void printDate(){
    int days[SIZE] = {21,28,31,30,31,30,31,31,30,31,30,31};
    for (int i = 0; i < SIZE; ++i) {
        printf("Month %2d has %d days \n",i + 1,*(days + i));
    }

}

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

void testString(){

    puts("gets func \n");

    char name[20];
    gets(name);

    printf("name = %s \n",name);

    puts("fget func \n");

    char words[10];
    while (fgets(words,10,stdin) != NULL && words[0] != '\n'){
        fputs(words,stdout);
    }

//    puts("gets_s func \n");
//    char tmp[10];
//    while (gets_s(tmp,10) != NULL) {
//        puts(tmp);
//    }
}

void showStorageType(){
    extern int focus;

    printf("focus = %d  \n",focus);

}

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

//
// Created by 倾城一世 on 2019/8/27.
//
#include <stdio.h>
#include "MString.h"
#include "MStruct.h"

void testStruct(){
    
    struct Book innerLibrary;

    printf("Please enter the book title \n");
    s_gets(innerLibrary.title, 40);
    printf("now enter the author \n");
    s_gets(innerLibrary.author, 40);
    printf("now enter the value \n");
    scanf("%f",&innerLibrary.value);
    printf("%s by %s: $%.2f \n", innerLibrary.title, innerLibrary.author, innerLibrary.value);

    printf("Done ");


    testStructInit();

    testStructInitValue();


    testStructInitMultiValue();
}

void testStructInit(){
    struct Book innerLib = {
            "Learning C++",
            "liujiajun",
            2.25F
    };
    printf("%s by %s: $%.2f \n", innerLib.title, innerLib.author, innerLib.value);

    printf("===============way 2==================");

    printf("Please enter the book title \n");
    s_gets(lib.title, 40);
    printf("now enter the author \n");
    s_gets(lib.author, 40);
    printf("now enter the value \n");
    scanf("%f",&lib.value);
    printf("%s by %s: $%.2f \n", lib.title, lib.author, lib.value);

    printf("Done ");

}
void testStructInitValue(){
    printf("%s by %s: $%.2f \n", library.title, library.author, library.value);

}
void testStructInitMultiValue(){
    for(int i = 0;i<3;i++){
        struct BookInitMultiValue value = libraries[i];
        printf("%s by %s: $%.2f \n", value.title, value.author, value.value);
    }
}

void testStructZhiZhen(){
    struct Stu student = {
            "zhangsna",20
    };
    struct Stu * stu = &student;
    printf("name : %s,age is %d",stu->name,stu->age);

}
void testFunc(){
    struct Funds funds = {
            "Test Bank",4032.27,"Lucky's Sabings and Load",8543.94
    };
    printf("Struct Funds total of $%.2f. \n",sum(&funds));
}
double sum(const struct Funds * money){
    return (money->bankfund + money->savefund);
}
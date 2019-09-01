#include <stdio.h>
#include <stdlib.h>

#include "MString.h"
#include "MStruct.h"
#include "MUnion.h"
#include "MEnum.h"
#include "MArray.h"
#include "MConst.h"
#include "MFile.h"
#include "film/Film.h"

int focus = 1;
void showStorageType();

void testAdt();
void showMovies(Item item);

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

    testAdt();

    return 0;
}

void testAdt(){
    List movies;
    Item temp;

    initializeList(&movies);

    if(listIsFull(&movies)) {
        fprintf(stderr,"no memory avaliable Bye");
        exit(1);
    }
    puts("Enter first movie title : ");
    while (s_gets(temp.title,TSIZE) != NULL && temp.title[0] != '\0'){
        puts("Enter your rating <0-10>:");
        scanf("%d",&temp.rating);
        while (getchar() != '\n'){
            continue;
        }
        if (addItem(temp,&movies) == false) {
            fprintf(stderr,"Problem allocating momory \n");
            break;
        }
        if (listIsFull(&movies)) {
            puts("The list is nor full");
            break;
        }

        puts("Enter next movie title (empty line to stop)");

    }
    if (listIsEmpty(&movies)) {
        printf("No data entered . \n");
    }else{
        printf("here is the movie list : \n");
        tracerse(&movies,showMovies);

    }

    printf("you enter %d movies \n",listItemCount(&movies));

    emptyList(&movies);

    printf("Bye !\n") ;

}

void showMovies(Item item){
    printf("Movie : %s Rating : %d \n",item.title,item.rating);
}
void showStorageType(){
    extern int focus;
    printf("focus = %d  \n",focus);
}


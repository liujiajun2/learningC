//
// Created by 倾城一世 on 2019/8/27.
//

#include <stdio.h>
#include <string.h>

char * s_gets(char * s, int n){
    char * ret_val;
    char * find;
    ret_val = fgets(s,n,stdin);
    if (ret_val){
        find = strchr(s,'\n');
        if (find){
            *find = '\0';
        }else{
            while (getchar() != '\n'){
                continue;
            }

        }
    }

    return ret_val;
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
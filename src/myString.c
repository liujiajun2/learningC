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
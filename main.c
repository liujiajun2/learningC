#include <stdio.h>

#define identifier 10

enum DAY{
    NON,TUE,WED,THU,FRI,SAT,SUN
};
int main() {
    enum DAY day;
    day = NON;
    printf("%d",day);
    printf("Hello, World!\n");
    printf("%d",identifier);
    return 0;
}
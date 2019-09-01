//
// Created by 倾城一世 on 2019/9/1.
//

#ifndef LEARNING_FILM_H
#define LEARNING_FILM_H

#include <stdbool.h>

#define TSIZE 45

struct Film {
    char title[TSIZE];
    int rating;
};
typedef struct Film Item;

typedef struct node {
    Item item;
    struct node *next;
} Node;

typedef Node *List;

void initializeList(List *plist);

bool listIsEmpty(const List *plist);

bool listIsFull(const List * plist);

unsigned int listItemCount(const List *plist);

bool addItem(Item item,List * plist);

void tracerse(const List * plist,void (*pfun) (Item item));

void emptyList(List * plist);


#endif //LEARNING_FILM_H

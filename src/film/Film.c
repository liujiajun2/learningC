//
// Created by 倾城一世 on 2019/9/1.
//
#include <stdio.h>
#include <stdlib.h>
#include "Film.h"

void initializeList(List *plist){
    *plist = NULL;
}

bool listIsEmpty(const List *plist){
    if (*plist == NULL) {
        return true;
    } else{
        return false;
    }

}

bool listIsFull(const List * plist){
    Node * pt;

    bool full;

    pt = (Node *) malloc(sizeof(Node));

    if (pt == NULL) {
        full = true;
    }else{
        full = false;
    }
    free(pt);
    return full;
}

unsigned int listItemCount(const List *plist){
    unsigned int count = 0;
    Node * pnode = *plist;

    while (pnode != NULL) {
        ++count;
        pnode = pnode->next;
    }
    return count;
}
static void copyToNode(Item item,Node * pnode);

bool addItem(Item item,List * plist){
    Node * pnew;
    Node * scan = *plist;

    pnew = (Node *) malloc(sizeof(Node));
    if (pnew == NULL) {
        return false;
    }
    copyToNode(item,pnew);

    pnew->next = NULL;

    if (scan == NULL){
        *plist = pnew;
    }else{
        while (scan->next != NULL) {
            scan = scan->next;
        }
        scan->next = pnew;
    }
    return true;
 }

void tracerse(const List * plist,void (*pfun) (Item item)){
    Node * pnode = *plist;

    while (pnode != NULL) {
        (*pfun)(pnode->item);
        pnode = pnode->next;
    }
}

void emptyList(List * plist){
    Node * psave;
    while (*plist != NULL) {
        psave = (*plist)->next;
        free(*plist);

        *plist = psave;
    }
}

static void copyToNode(Item item,Node * pnode){
    pnode->item = item;
}
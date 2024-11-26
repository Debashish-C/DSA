#ifndef INSERT_H
#define INSERT_H

#include<stdlib.h>

struct Node {
    int data;
    Node* left;
    Node* right;
};

void insert(struct Node *h,int val);
#endif
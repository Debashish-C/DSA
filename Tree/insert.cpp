#include "insert.h"
#include<stdlib.h>
// struct Node{
//     int data;
//     Node *left,*right;
// };

void insert(struct Node *h,int val){
    if(h == NULL)
    {
        h = (Node *)malloc(sizeof(Node));
        h->data = val;
        h->left = h->right = NULL;
        return;
    }
    else
        if(val < h->data)
            insert(h->left,val);
        else
            insert(h->right,val);
}
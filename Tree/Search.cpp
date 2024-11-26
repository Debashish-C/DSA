#include "search.h"
struct Node *searchElement(struct Node *h,int val){
    if(h->data == val || h == NULL)
        return h;
    else
        if(val < h->data)
            return searchElement(h->left,val);
        else
            return searchElement(h->right,val);
}


#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node
{
    int data;
    Node *left,*right;
};

void insert(Node *Tree,int val){
    if(Tree == NULL){
        Tree = (Node *)malloc(sizeof(Tree));
        Tree->data = val;
        Tree->left = Tree->right = NULL;
        return;
    }
    if(val  < Tree->data)
        insert(Tree->left,val);
    else
        insert(Tree->right,val);
}

Node* findlargestNode(Node *h){
    if(h->right == NULL){
        return h;
    }
    return findlargestNode(h->right);
}

Node *search(Node *h,int val){
    if(h->data == val || h == NULL)
        return h;
    else
        if(val < h->data)
            return search(h->left,val);
        else
            return search(h->right,val);
}

void Delete(Node *Tree,int val){
    if(Tree == NULL){
        cout<<val<<" NoT fOUND!";
        return;
    }
    else if(val < Tree->data)
        Delete(Tree->left,val);
    else if(val > Tree->data)
        Delete(Tree->right,val);
    else if(Tree->left && Tree->right)
        {
            Node *temp = findlargestNode(Tree->left);
            Tree->data = temp->data;
            Delete(Tree->left,temp->data);
        }
    else{
        Node *temp = Tree;
        if(Tree->left == NULL && Tree->right == NULL)
            Tree = NULL;
        else if(Tree->left != NULL)
            Tree = Tree->left;
        else 
            Tree = Tree->right;
        free(temp);
    }
}

int main() {
    Node *root;
    insert(root,501);
    insert(root,345);
    insert(root,125);
    insert(root,50);
    insert(root,125);
    insert(root,5);
    insert(root,15);
    insert(root,85);
    insert(root,45);
    insert(root,55);
    // search(root,50); fault must solve
    Delete(root,5);
    return 0;
}

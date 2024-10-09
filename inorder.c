#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *lchild;
struct node *rchild;
};

struct node *newnode(int item){
struct node *new=(struct node*)malloc(sizeof(struct node));
new->data=item;
new->lchild=NULL;
new->rchild=NULL;
return new;
}
void inorder(struct node *root){
if (root==NULL){
return;
}
inorder(root->lchild);
printf("\t%d",root->data);
inorder(root->rchild);
}
void main(){
struct node *root=NULL;
root=newnode(1);
root->lchild=newnode(2);
root->rchild=newnode(3);
root->lchild->lchild=newnode(4);
root->lchild->rchild=newnode(5);
root->rchild->lchild=newnode(6);
root->rchild->rchild=newnode(7);
inorder(root);
}

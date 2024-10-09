#include<stdio.h>
#include<stdlib.h>
struct BinaryTreeNode{
int key;
struct BinaryTreeNode *left,*right;
};

struct BinaryTreeNode* newNodeCreate(int value)
{
struct BinaryTreeNode* temp = (struct BinaryTreeNode*)malloc(sizeof(struct BinaryTreeNode));
temp->key = value;
temp->left = temp->right = NULL;
return temp;
}

struct BinaryTreeNode*
searchNode(struct BinaryTreeNode* root, int target)
{
if (root == NULL || root->key == target) {
return root;
}
if (root->key < target) {
return searchNode(root->right, target);
}
return searchNode(root->left, target);
}

struct BinaryTreeNode*
insertNode(struct BinaryTreeNode* node, int value)
{
if (node == NULL) {
return newNodeCreate(value);
}
if (value < node->key) {
node->left = insertNode(node->left, value);
}
else if (value > node->key) {
node->right = insertNode(node->right, value);
}
return node;
}
void inOrder(struct BinaryTreeNode* root)
{
if (root != NULL) {
inOrder(root->left);
printf(" %d ", root->key);
inOrder(root->right);
}
}
struct BinaryTreeNode* findMin(struct BinaryTreeNode* root)
{
if (root == NULL) {
return NULL;
}
else if (root->left != NULL) {
return findMin(root->left);
}
return root;
} 
struct BinaryTreeNode* delete (struct BinaryTreeNode* root,int x)
{
if (root == NULL)
return NULL;
if (x > root->key) {root->right = delete (root->right, x);}
else if (x < root->key){
root->left = delete (root->left, x);
}
else {
if (root->left == NULL && root->right == NULL) {
free(root);
return NULL;
}
else if (root->left == NULL|| root->right == NULL) {
struct BinaryTreeNode* temp;
if (root->left == NULL) {
temp = root->right;
}
else {
temp = root->left;
}
free(root);
return temp;
}
else {
struct BinaryTreeNode* temp= findMin(root->right);
root->key = temp->key;
root->right = delete (root->right, temp->key);
}
}
return root;
}

int main()
{
struct BinaryTreeNode* root = NULL;
int i,m,n,key,del,value;
printf("enter value of root");
scanf("%d",&m);
root=insertNode(root,m);
printf("enter number of values to be inserted in the tree");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("enter value");
scanf("%d",&value);
insertNode(root, value);
}
inOrder(root);
printf("enter value to be searched");
scanf("%d",&key);
if (searchNode(root, key) != NULL) {
printf("%d found",key);
}
else {
printf("%d not found",key);
}
printf("enter value to be deleted");
scanf("%d",&del);
struct BinaryTreeNode* temp = delete (root, del);
printf("After Delete: \n");
inOrder(root);
return 0;
}

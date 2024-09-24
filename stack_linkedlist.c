//PROGRAM ON LINKED LIST IMPLEMENTATION
// BY SREEHARI
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct node
{
	int data;
	struct node * next;
}node;
node *head = NULL;
void InsertionEnd(){
	int item;
	node *new;
	node *temp;
	printf("Enter the data to be added: ");
	scanf("%d", &item);
	new = (node *)malloc(sizeof (node));
	new->data = item;
	new->next = NULL;
	if(head == NULL){
		head = new;
	}
	else{
		temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = new;
	}
	
}
void deleteEnd(){
	node * temp;
	node * prev;
	if(head==NULL){
			printf("Linked List is Empty");
	}
	else{
			temp = head;
			while(temp->next != NULL){
				prev = temp;
				temp = temp->next;
			}
			prev->next = NULL;	
	}
}
void display(){
	node * temp;
	if(head==NULL){
		printf("Linked List is Empty");
	}
	else{
		temp = head;
		while(temp->next != NULL){
			printf("%d \t", temp->data);
			temp = temp->next;
		}
		printf("%d", temp->data);

	}
}

void main(){
	while(1){
	int n;
	printf("\n 1. Insertion \
		\n 2. Delete from \
		\n 3. Display \
		\n 4. Exit");
	printf("\nEnter your choice:");
	scanf("%d", &n);
	switch(n){
		case 1:
			InsertionEnd();
			break;
		case 2:
			deleteEnd();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);
			break;
		default:
			printf("Enter a valid choice");
	
		}
	 }
}

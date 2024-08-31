#include<stdio.h>
void enque();
 void deque();
void display();
int front =-1, rear=-1, queue[100],n;
void main ()
{
printf("enter size of queue"); scanf("%d",&n);
int choice; 
do {
printf("choice \n 1.push\n 2.pop\n 3.display\n ");
scanf("%d",&choice);
switch(choice) {
case 1:{
enque (); 
break;
}
case 2:{
deque();
break;
}
case 3:{
display(); 
break;
}
case 4:{
printf("\nexit point");
break;
}
default: {
printf("invalid choice \n");
}
}
}
while(choice!=4);
}
void enque()
{
int item;
printf("\nEnter the element\n");
scanf("\n%d", &item);
if(rear == n-1)
{
printf("\nOVERFLOW\n");
return;
}
if(front == -1 && rear == -1) {
front=0; rear = 0;
}
else
{
rear=rear+1;
}
queue [rear] = item;
}
void deque()
{
int item;
if (front == -1 || front > rear) {
printf("\nUNDERFLOW\n");
return;
}
else
{
item=queue [front];
if(front == rear)
{
front = -1;
rear = -1;
}
else
{
front=front + 1; }
printf("\nvalue deleted ");
}
}
void display()
{
int i;
if(rear == -1)
{
printf("\nEmpty queue\n");
}
else
{
for(i=front;i<=rear;i++)
{
printf("\n%d\n", queue[i]);
}
}
}
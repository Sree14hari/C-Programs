#include<stdio.h>
#include<stdlib.h>
#define max 5
int a[max][2],front=-1,rear=-1;
void enqueue(){
if(rear==max-1){
printf("Priority queue is full");
}
else{
int item,priority;
printf("Enter element and priority:");
scanf("%d%d",&item,&priority);
if(front==-1&&rear==-1){
front=rear=0;
a[rear][0]=item;
a[rear][1]=priority;
}
else{
rear++;
a[rear][0]=item;
a[rear][1]=priority;
}
}
}
void dequeue(){
if(front==-1&&rear==-1){
printf("Priority queue is empty");
}
else{
int hp=0,in,e;
if(front==rear){
printf("\nDeleted: %d",a[front][0]);
front=rear=-1;
}
else{
for(int i=front;i<=rear;i++){
if(a[i][1]>hp){
hp=a[i][1];
in=i;
}
}
printf("\nDeleted:%d",a[in][0]);
for(int i=in;i>=front;i--){
int t1=a[i][0],t2=a[i][1];
a[i][0]=a[i-1][0];
a[i][1]=a[i-1][1];
a[i-1][0]=t1;
a[i-1][1]=t2;
}
front++;
}
}
}
void display(){
if(front==-1&&rear==-1){
printf("Priority queue is empty");
}
else{
for(int i=front;i<=rear;i++){
printf("\t(%d,%d)",a[i][0],a[i][1]);
}
}
}
void main(){
while(1){
int ch;
printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
scanf("%d",&ch);
switch(ch){
case 1:enqueue();
break;
case 2:dequeue();
break;
case 3:display();
break;
case 4:exit(1);
break;
default:printf("\nWrong choice!\n");
break;
}
}
}

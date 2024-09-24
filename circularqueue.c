#include<stdio.h>
# define max 6
int front=-1;
int rear=-1;
int ar[max];
void enqueue(int x){
    if(front==-1&&rear==-1){
        front=rear=0;
        ar[rear]=x;
    }
    else if((rear+1)%max==front){
        printf("queue is full\n");
    }
    else{
        rear=(rear+1)%max;
        ar[rear]=x;
    }
}
void dequeue(){
    if(front==-1&&rear==-1){
        printf("empty queue\n");
    }
    else{
        printf("deleted element is %d\n",ar[front]);
        front=(front+1)%max;
    }
}
void display(){
    int i =front;
    if(front==-1&&rear==-1){
        printf("queue is empty\n");
    }
    else{
        while(i<=rear){
            printf("%d",ar[i]);
            i=(i+1)%max;
        }
    }
}

int main(){
    int n;
    do
    {
        printf("\nchoices are \n1.insert element\n2.delete element\n3.display elements\n");
        printf("\nenter a choice:\n");
        scanf("%d",&n);
        switch (n)
        {
        case 1:{
            int x;
            printf("enter the element");
            scanf("%d",&x);
            enqueue(x);
            break;
        }
        case 2:{
            dequeue();
            break;
        }
        case 3:{
            display();
            break;
        }
        default:{
            printf("wrong choice ");
        }
        }
    } while (n!=4);
    return 0;
    
}
#include<stdio.h>
#include<stdlib.h>
#define size 10

void enqueue(int);
void dequeue();
void display();

int queue[size], front =-1,rear=-1;

int main()
{
    int value,choice;
    while(1){
        printf("\nMenu\n");
        printf("1.Enqueue\n 2.Dequeue\n 3.Display\n 4.Exit");
        printf("Enter choice:");
        scanf("%d",&choice);
        switch(choice){
       
        case 1: 
        printf("\nEnter value to insert:");
        scanf("%d",&value);
        enqueue(value);
        break;
        
        case 2:
        dequeue();
        break;
        
        case 3:
        display();
        break;
        
        case 4:
        exit(0);
        default: printf("\nTry again!!1");
         
        } 
        
    }
}

void enqueue(int value)
{
    if(rear==size-1)
       printf("\nStack full");
    else{
        if(front ==-1)
           front=0;
        rear++;
        queue[rear]=value;
        printf("\nSuccess");
    }
}

void dequeue()
{
    if(front==rear)
         printf("\nQueue is empty");
    else{
        front++;
        if(front==rear)
            front=rear=-1;
    }
}

void display(){
    if(rear==-1)
        printf("\nQueue is empty");
    else{
        int i;
        printf("\nElements are:");
        for(i=front;i<=rear;i++)
            printf("%d",queue[i]);
    }
        
}

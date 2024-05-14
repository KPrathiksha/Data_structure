#include<stdio.h>
#include<stdlib.h>
#define size 100
void push(int);
void pop();
void display();

int stack[size],top=-1;
int main()
{
    int value,choice;
    while(1){
        printf("\nMenu:");
        printf("1.push\n 2.pop\n 3.display\n 4.exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
            printf("Enter value to insert:");
            scanf("%d",&value);
            push(value);
            break;
            
            case 2: pop();
            break;
            
            case 3: display();
            break;
            
            case 4: exit(0);
            break;
            
            default: printf("try again!!!!!\n");
        }
        
    }
}

void push(int value)
{
    if(top==size-1)
        printf("stack is full\n");
    else{
        top++;
        stack[top]=value;
        printf("push executed\n");
    }
}
void pop()
{
    if(top==-1)
        printf("Stack is empty\n");
    else{
        printf("deleted %d\n",stack[top]);
        top--;
    }
}
void display()
{
    if(top==-1)
        printf("Stack is empty\n");
    else{
        int i;
        printf("Stack elemets are:\n");
        for(i=top;i>=0;i--)
            printf("%d\n",stack[i]);
        
    }
}


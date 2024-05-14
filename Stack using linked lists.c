#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
}* top=NULL;

void push(int);
void pop();
void display();

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
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode-> data = value;
    if(top == NULL)
        newnode->next=NULL;
    else
        newnode->next=top;
    top=newnode;
    printf("Sucess");
}

void pop()
{
    if(top==NULL)
        printf("Stack is empty");
    else{
        struct node* temp=top;
        printf("Deleted %d",temp->data);
        top=temp->next;
        free(temp);
    }
}

void display()
{
    if (top==NULL)
        printf("stack empty");
    else{
        struct node* temp=top;
        while(temp->next!=NULL){
            printf("%d",temp->data);
            temp=temp->next;
        }
        printf("%d null",temp->data);
    }
}

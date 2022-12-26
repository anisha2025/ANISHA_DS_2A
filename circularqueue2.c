#include<stdio.h>
#define max 5
int queue[max];
int front =-1;
int rear =-1;
int item;

void cq_insert()
{

    if(front==(rear+1)%max)
    {
        printf("overflow");
        return;
    }
    if(front==-1)
    {
        front=rear=0;
    }
    else
    {
        rear=((rear+1)%max);
    }
    queue[rear]=item;
}
void cq_delete()
{
    if(front==-1)
    {
        printf("underflow");
        return;
    }
    printf("element deleted from queue is %d \n",queue[front]);
    if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front=((front+1)%max);
    }
}
void display()
{
    int i=front;
    if(front==-1 && rear==-1)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("Elements in a Queue are \n");
        while(i<=rear)
        {
            printf("%d,", queue[i]);
            i=(i+1)%max;
        }
    }
}
void main()
{
    int n;
    do
    {
    printf("\n enter 1 for insertion , 2 for deletion , 3 for display\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf(" \n enter the element u want to insert\n");
        scanf("%d",&item);
        cq_insert();
        break;
    case 2:
        cq_delete();
        break;
    case 3:
        display();
        break;
    case 4:
        break;
    default:
        printf("wrong choice ");
        }
    }
    while(n!=4);
    return 0;

}

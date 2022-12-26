#include<stdio.h>
struct queue
{
    int data;
    struct queue*next;
};
typedef struct queue que;
que*front,*rear;
que*temp;
que*ptr;
void enqueue()
{
temp=(que*)malloc(sizeof (que));
if(temp==NULL)
{
printf("overflow");
}
else
{
printf("enter data");
scanf("%d",&temp->data);
temp->next=NULL;
if(front==NULL)
{
front=temp;
rear=temp;
}
else
{
rear->next=temp;
rear=temp;
}
}
}

void dequeue()
{
    ptr=front;
if (front==NULL)
{
printf("underflow");
}
else
{
if (front==rear)
{
front=rear=NULL;
free(ptr);
}
else
{
front=front->next;
free(ptr);
}}}

void main()
{


}

#include<stdio.h>
#define max 5
typedef struct queue
{
    int que[max];
    int front;
    int rear;
};
int front=-1;
int rear=-1;
struct queue s;

    void insert()
    {
        int ele;
        printf("enter element to insert");
        scanf("%d",&ele);

        if(s.rear==max-1)
        {
            printf("queue overflow");
            return;
        }
        if(s.front=s.rear==-1)
        {
            s.front = s.rear=0;
            s.que[s.rear]=ele;
        }
        else
        {
            s.rear=s.rear+1;
            s.que[s.rear]=ele;
        }
    }
    void deletion()
    {

        if(s.front == -1)
        {
            printf("underflow");
            return;
        }
        int k=s.que[s.front];
        if(s.front==s.rear)
        {
            s.front=s.rear-1;
        }
        else
        {
            s.front= s.front+1;
        }
    }
    void display()
    {
        int i;

        if (s.front == -1)
        {
            printf("queue is empty");
        }
        else
        {
            printf("queue is :");
            for(i=s.front;i<=s.rear;i++)
            {
                printf("%d",s.que[i]);
            }
        }



    }

 void main()
{
    int n;
    printf("enter 1 for insertion , 2 for deletion ,3 for display all elements ");
    scanf("%d",&n);
    do
    {


    switch(n)
    {
    case 1:
        insert();
        break;
    case 2:
        deletion();
        break;
    case 3:
        display();
        break;
    case 4:
        break;
    default :
        printf("enter correct value");
    }
    }

        fflush (stdin);
        printf ("to continue type 1 otherwise 0\n");
        scanf    ("%d", &option);
    while(n!=4);
    return 0;


}

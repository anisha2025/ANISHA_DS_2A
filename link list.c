#include<stdio.h>
struct nodetype
{
    int info;
    struct nodetype*next;
};
typedef struct nodetype node;
node*temp;
node*ptr;
node*start=0;
node*start1=0;
ch=1;

 void create()
 {
     int ch,n;

     while(ch)
     {
         temp =((node*)malloc(sizeof(node)));
         if(temp==NULL)
         {
             printf("overflow");
             return(0);
         }
         else
         {
             printf("enter data");
             scanf("%d",&temp->info);
             temp->next=0;
             if(start==0)
             {
                 start=temp;
                 ptr=temp;
             }
             else
             {
                 ptr->next=temp;
                 ptr=temp;
             }
         }
              printf("if you want to continue press 1 else press 0");
             scanf("%d",&ch);
     }

 }

 void display()
 {


         if(start==0)
     {
         printf("nothing to display");
     }
     else
     {
         ptr=start;
         while(ptr!=NULL)
         {
             printf("%d->",ptr->info);
             ptr=ptr->next;
         }
     }


 }
 void insert_beg()
 {


         temp=((node*)malloc(sizeof(node)));
     if(temp==NULL)
     {
         printf("overflow");
     }

     else
     {
         printf("enter value");
        scanf("%d",&temp->info);
         temp->next=NULL;
         if(start==NULL)
         {
             start=temp;
         }
         else
         {
             temp->next=start;
             start=temp;
         }
     }


 }
 void insert_end()
 {


         temp=((node*)malloc(sizeof(node)));
     if(temp==NULL)
     {
         printf("overflow");
     }
     else
     {
         printf("enter data");
         scanf("%d",&temp->info);
         if(start==NULL)
         {
             start=temp;
         }
         else
         {
             while(ptr->next!=NULL)
             {
                 ptr=ptr->next;
             }
             ptr->next=temp;
             temp->next=NULL;
         }
     }


 }
void insert_after()
{
    int pos,i;
    temp=((node*)malloc(sizeof(node)));
    if(temp==NULL)
    {
        printf("overflow");
    }
    else
    {
        printf("enter value");
        scanf("%d",&temp->info);
        printf("enter positon after which u want to insert");
        scanf("%d",&pos);
        if(pos==0)
        {
            start=temp;
        }
        else
        {
            ptr=start;
            for(i=1;i<=pos-1;i++)
            {
                ptr=ptr->next;
            }
            temp->next=ptr->next;
            ptr->next=temp;
        }
    }



}
void insert_before()
{
    int pos,i;
    temp=((node*)malloc(sizeof(node)));
    if(temp==NULL)
    {
        printf("overflow");
    }
    else
    {
        printf("enter value");
        scanf("%d",&temp->info);
        printf("enter positon before which u want to insert");
        scanf("%d",&pos);
        if(pos==0)
        {
            start=temp;
        }
        else
        {
            ptr=start;
            for(i=1;i<pos-1;i++)
            {
                ptr=ptr->next;
            }
            temp->next=ptr->next;
            ptr->next=temp;
        }
    }

}
void del_beg()
{
    while(ch)
    {
            if(start==NULL)
    {
        printf("underflow");
    }
    else
    {
        ptr=start;
        if(ptr->next==NULL)
        {
            start=NULL;
            printf("deleted item is %d",ptr->info);
            free(ptr);
        }
        else
        {
            start=ptr->next;
            printf("deleted item is %d",ptr->info);
            free(ptr);
        }

    }
    printf("enter 1 to continue else press 0");
    scanf("%d",&ch);
    }

}
void del_end()
{
    while(ch)
    {
            if(start==NULL)
    {
        printf("underflow");
    }
    else
    {
        ptr=start;
        if(ptr->next==NULL)
        {
            start=NULL;
            printf("deleted item is %d",ptr->info);
            free(ptr);
        }
        else
        {
            while(ptr->next!=NULL)
        {
            temp=ptr;
            ptr=ptr->next;
        }
        temp->next=NULL;
        printf("deleted item is %d",ptr->info);
        free(ptr);
        }

    }
    printf("enter 1 to continue else press 0");
    scanf("%d",&ch);
    }


}
void counting()
{
    int c=0;
    ptr=start;
    if(start==NULL)
    {
        printf("underflow");
    }
    else
    {
        while(ptr!=NULL)
        {
            c++;
            ptr=ptr->next;
        }
    }
    printf("number of nodes are %d",c);
}
void searching()

{
    int ele,loc=0;
    printf("Enter data you want to search : ");
    scanf("%d",&ele);
    ptr=start;
    while(ptr!=NULL)

    {
         loc++;
        if(ptr->info==ele)
        {
            printf("ele found at loc %d ",loc);
            break;
        } ptr=ptr->next;
    }
}

void main()
{
    int choice;
    do{
    printf("enter 1 for creation \n");
    printf("enter 2 for display \n");
    printf("enter 3 for insertion at beg\n ");
    printf("enter 4 for insertion at end \n");
    printf("enter 5 for insert after a pos\n ");
    printf("enter 6 for insert before a given pos\n ");
    printf("enter 7 for delete at beg \n");
    printf("enter 8 for delete at end\n");
    printf("enter 9 to count the no of nodes\n");
    printf("enter 10 to search an element\n ");


    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        create();
        break;
    case 2:
        display();
        break;
    case 3:
        insert_beg();
        break;
    case 4:
        insert_end();
        break;
    case 5:
        insert_after();
        break;
    case 6:
        insert_before();
        break;
    case 7:
        del_beg();
        break;
    case 8:
        del_end();
        break;
    case 9:
        counting();
        break;
    case 10:
        searching();
        break;

    default:
        printf("enter correct value");
    }

}
while(choice!=7);
return 0;
}

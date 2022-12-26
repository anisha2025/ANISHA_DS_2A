
#include <stdio.h>
#define MAXSIZE 5
struct stack
{   int stk[MAXSIZE];
    int top;
};
typedef struct stack STACK;
STACK s;
void push(void);
int  pop(void);
void display(void);
void main ()
{  int choice;
    int option = 1;
    s.top = -1;
    printf ("STACK OPERATION\n");
    while (option)
    {  printf("Press 1 for PUSH,2 for POP,3 for DISPLAY,4 for EXIt");
        printf ("Enter your choice\n");
        scanf    ("%d", &choice);
        switch (choice)
        { case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return;  }
        fflush (stdin);
        printf ("to continue type 1 otherwise 0\n");
        scanf    ("%d", &option);  } }
void push ()
{  int num;
    if (s.top == (MAXSIZE - 1))
    {  printf ("overflowed\n");
        return; }
    else
    {  printf ("Enter the element to be pushed : ");
        scanf ("%d", &num);
        s.top = s.top + 1;
        s.stk[s.top] = num;  }
    return;  }
int pop ()
{     int num;
    if (s.top == - 1)
    {   printf ("underflow\n");
        return (s.top);    }
    else
    {   num = s.stk[s.top];
        printf ("poped element is  %d \n", s.stk[s.top]);
        s.top = s.top - 1;   }
    return(num);   }
void display ()
{   int i;
    if (s.top == -1)
    {   printf ("Stack is empty\n");
        return;  }
    else
    {  printf ("\n The status of the stack is \n");
        for (i = s.top; i >= 0; i--)
        {
            printf ("%d\n", s.stk[i]);  }   }
    printf ("\n");
}

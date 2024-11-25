#include <stdio.h>
#include "mystack.h"

int flags=0;
int flagq=0;
void stack_init (stack *ptr)
{
ptr->sp = -1;
}

void stack_push (stack *ptr1,int value)
{
 if (ptr1->sp<SIZE-1)
 {
     (ptr1->sp)++;
(ptr1->arr[ptr1->sp])= value;
 }
 else
 {
     printf("stack is full\n");
 }
}

void stack_pop (stack *ptr ,int *value)
{
    if(ptr->sp > -1)
    {
       *value = ptr->arr[ptr->sp];
       printf("the value you want to read is %d",*value);
       (ptr->sp)--;
    }
    else
    {
         printf("stack is Empty\n");
         flags=1;
    }
}

void display (stack *ptr)
{
   if (flags==1)
   {
       flags=0;
   }
   else
   {
       printf("stack elements\n");
    for (int i=0;i<=ptr->sp;i++)
    {
    printf("%d\t",ptr->arr[i]);
    }
    printf("\n");
}
}
void queue_init (queue*ptr)
{
ptr->front = -1;
ptr->end = -1;
}

void enqueue (queue *ptr1,int value)
{
 if (ptr1->end < SIZE-1)
 {
     (ptr1->end)++;
(ptr1->arr[ptr1->end])= value;
 }
 else
 {
     printf("queue is full\n");
 }
}

void dequeue (queue *ptr ,int *value)
{
    if(ptr->front == ptr->end)
    {
         printf("queue is Empty\n");
         flagq=1;
    }
    else
    {
        (ptr->front)++;
       *value = ptr->arr[ptr->front];
       printf("the value you want to read is %d",*value);
       if(ptr->front ==ptr->end)
       {
           ptr->front=ptr->end=-1;
       }
    }
}

void display1 (queue *ptr)
{
    if ((ptr->end == -1)||(flagq==1))
    {
        printf("Queue is empty\n");
        flagq=0;
        return;
    }
 for (int i=ptr->front;i<ptr->end;i++)
    {
    printf("%d\t",ptr->arr[i+1]);
    }
    printf("\n");
}



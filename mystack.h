#ifndef MYSTACK_H
#define MYSTACK_H

#define WORD 10
#define SIZE 20

typedef struct s
{
    int sp;
    int arr[SIZE];
} stack;

typedef struct a
{
    int front ,end;
    int arr[SIZE];
}queue;

void stack_init (stack *ptr);
void stack_push (stack *ptr1,int value);
void stack_pop (stack *ptr ,int *vaue);
void display (stack *ptr);
void queue_init (queue*ptr);
void enqueue (queue *ptr1,int value);
void dequeue (queue *ptr ,int *value);
void display1 (queue *ptr);

#endif //MYSTACK_H

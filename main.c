#include <stdio.h>
#include <string.h>
#include "mystack.h"

int main()
{
    for (int i=0;i<2;i++)
{
    printf("Do You Want To Deal With Stack or Queue\n");
    char command[WORD];
    scanf("%s",command);
if (strcmp(command,"stack")==0)
{
 int num;
 stack one;
 stack_init(&one);

 for (int i=0;i<SIZE;i++)
 {
 printf("do you need to read or write\n");
 char ask[WORD];
 scanf("%s",ask);
if (strcmp(ask,"write")==0)
{
   printf("enter value you will store\n");
 scanf("%d",&num);

stack_push(&one ,num);

display (&one);
}
 else if (strcmp(ask,"read")==0)
 {
   stack_pop (&one,&num);

   printf("\n");

   display(&one);
 }
 else
 {
  break;
 }
 }
}
else if (strcmp(command,"queue")==0)
{
    int num;
 queue two;
 queue_init(&two);

 for (int i=0;i<SIZE;i++)
 {
 printf("do you need to read or write\n");
 char ask[WORD];
 scanf("%s",ask);

 if (strcmp(ask,"write")==0)
{
   printf("enter value you will store\n");
   scanf("%d",&num);

   enqueue(&two ,num);

   printf("queue after in\n");

   display1 (&two);
}
else if (strcmp(ask,"read")==0)
{
    dequeue(&two,&num);

printf("queue after out\n");

display1(&two);
}
else
{
break;
}}}
else
{
    printf("a Wrong Entered Value\n");
}}
    return 0;
}

/*
*File: main.c
*Author: Nguyen Phi Hung
*Date: 08/04/2023
*Description: Queue using Array
*/
#include<queueArray.h>

int main()
{
    queue a;
    queueArrayInit(&a,3);
    enqueue(&a,1);
    enqueue(&a,2);
    enqueue(&a,3);
    display(&a);
    dequeue(&a);
    dequeue(&a);
    dequeue(&a);
    enqueue(&a,6);
    enqueue(&a,7);
    display(&a);
    return 0;
}

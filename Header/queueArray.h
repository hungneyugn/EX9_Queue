/*
*File: queue.h
*Author: Nguyen Phi Hung
*Date: 08/04/2023
*Description: Header for Queue using Array
*/
#ifndef __QUEUEARRAY_H
#define __QUEUEARRAY_H

#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<stdbool.h>
/*Struct save data of a queue*/
typedef struct{
    uint8_t *data;
    uint8_t front;
    uint8_t rear;
    uint8_t SIZE_ARRAY;
    int size;
}queue;
/*Function generate a queue*/
void queueArrayInit(queue *q, uint8_t n);

/*Function check if queue is empty*/
bool isEmpty(queue *q);

/*Function check if queue is full*/
bool isFull(queue *q);

/*Function add new element to queue*/
void enqueue(queue *q, int value);

/*Function remove element from queue*/
int dequeue(queue *q);

/*Function display queue*/
void display(queue *q);

/*
*Function: queueArrayInit
*Description: generate a new queue
*Input:
    q: Pointer to a queue
    n: number of element in array
*Output:None
*/
void queueArrayInit(queue *q, uint8_t n)
{
    q->SIZE_ARRAY = n;
    q->data = (uint8_t *)malloc(q->SIZE_ARRAY * sizeof(uint8_t));
    q->front = 0;
    q->rear = 0;
    q->size = 0;
}

/*
*Function: isEmpty
*Description: check if queue is empty
*Input:
    q: Pointer to a queue
*Output:
    1: if queue is empty
    0: if queue isn't empty
*/
bool isEmpty(queue *q)
{
    return q->size == 0;
}

/*
*Function: isFull
*Description: check if queue is full
*Input:
    q: Pointer to a queue
*Output:
    1: if queue is full
    0: if queue isn't full
*/
bool isFull(queue *q)
{
    return q->size == q->SIZE_ARRAY;
}

/*
*Function: enqueue
*Description: add new element to queue
*Input:
    q: Pointer to a queue
    value: value of element which needed to be added
*Output:None
*/
void enqueue(queue *q, int value)
{
    if(isFull(q)) printf("Queue is full\n");
    else 
    {
        q->data[q->rear] = value;
        q->rear += 1;
        q->size += 1;
    }
}

/*
*Function: dequeue
*Description: remove element from queue
*Input:
    q: Pointer to a queue
*Output:
    value of last element in queue
*/
int dequeue(queue *q)
{
    if(isEmpty(q))
    {
        printf("Queue is empty");
        return -1;
    }
    else
    {
        int e = q->data[q->front];
        q->front += 1;
        q->size -= 1;
        if(isEmpty(q))
        {
            printf("Queue is empty\n");
            return -1;
        }
        return e;
    }
}

/*
*Function: display
*Description: display queue
*Input:
    q: Pointer to a queue
*Output:None
*/
void display(queue *q)
{
    for(int i = q->front; i < q->rear ; i++)
    {
        printf("%d--",q->data[i]);
    }
    printf("\n");
}

#endif


/*
*File: queueArray.h
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

#endif


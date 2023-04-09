# EX9_Queue
## Description
This is queue data structure use array wrote by C language
## Detail
![queue](https://user-images.githubusercontent.com/82272158/230749440-22d25012-175a-475e-835e-d40657f77e13.png)
Some of the implementations of queue operations are as follows:
- **Enqueue**: Addition of an element to the queue. Adding an element will be performed after checking whether the queue is full or not. If current size < size of array which indicates that the array is not full then store the data at arr[rear] and increment rear by 1 but if rear == size of array then it informs queue is full.
- **Dequeue**: Removal of an element from the queue. An element can only be deleted when queue isn't empty. The element at arr[front] can be deleted by all the remaining elements have to shift to the right by one position and decrease size by 1. Function also returns value of arr[front].
- **Display**: Print all elements of the queue. If the queue is non-empty, traverse and print all the elements from the index front to rear.

#ifndef __LB_QUEUE_H__
#define __LB_QUEUE_H__

#define TRUE	1
#define FALSE	0

typedef int Data;

typedef struct _node
{
	Data data;
	struct _node * next;
} Node;

typedef struct _lQUEUE
{
	Node * front;
	Node * rear;
} LQueue;

typedef LQueue Queue

void QueueInit(Queue * pq);
Data Dequeue(Queue * pq);
Data QIsEmpty(Queue * pq);

void Enqueue(Queue * pq, Data data);
Data Dequeue(Queue * pq);
Data QPeek(Queue * pq);

#endif
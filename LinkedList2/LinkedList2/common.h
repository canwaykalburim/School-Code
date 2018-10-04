#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node * link;
} Data;

Data* node_malloc(int num) {
	Data *p;
	p = (Data*)malloc(sizeof(Data));
	p->data = num;
	p->link = NULL;
	return p;
}

Data* insert_node(Data* head, int num) {
	Data *p = head, *n = node_malloc(num);
	if (head == NULL)	return n;
	while (p->link)	p = p->link;
	p->link = n;	return head;
}

void printNode(Data *p) {
	for (; p != NULL; p = p->link)
		printf("%d\t", p->data);
}

#endif

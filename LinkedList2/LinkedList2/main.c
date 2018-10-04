#include "common.h"

int main(void) {
	Data *head = NULL;
	head = insert_node(head, 10);
	head = insert_node(head, 20);
	head = insert_node(head, 30);
	head = insert_node(head, 40);
	head = insert_node(head, 50);

	printNode(head);
}
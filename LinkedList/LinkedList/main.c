#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

typedef struct node {
	int data;
	struct node* link;
} Node;

// 2차원 배열에 값 저장&출력
void Pro(void) {
	char greeting[3][20];

	for (int i = 0; i < 3; i++) {
		scanf("%s", greeting[i]);
	}
	for (int i = 0; i < 3; i++) {
		printf("%s\n", greeting[i]);
	}
}

// 5명의 평균 나이
void Pro2() {
	int *Age, sum = 0;
	Age = (int *)malloc(5 * sizeof(int));
	for (int i = 0; i < 5; i++) {
		scanf("%d", &Age[i]);
		sum += Age[i];
	}
	printf("\n다섯 명의 평균 나이: %d\n", (sum / 5));
	free(Age);
}

void Pro3() {
	char tmp[80];
	char *str[3];
	for (int i = 0; i < 3; i++) {
		gets(tmp);
		str[i] = (char *)malloc(strlen(tmp) + 1);
		strcpy(str[i], tmp);
	}
	for (int i = 0; i < 3; i++) {
		printf("%s\n", str[i]);
		free(str[i]);
	}
}

Node* node_malloc(int num) {
	Node *p;
	p = (Node*)malloc(sizeof(Node));
	p->data = num;
	p->link = NULL;
	return p;
}

void Pro4() {
	Node *p, *head;
	head = p = node_malloc(10);
	p->link = node_malloc(20);
	p = p->link;
	p->link = node_malloc(30);
	for (p = head; p != NULL; p = p->link) {
		printf("%d\t", p->data);
	}
}

int main(void) {
	//Pro();
	//Pro2();
	//Pro3();
	Pro4();
	return 0;
}
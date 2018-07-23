#include <stdio.h>

void Select() {
	int n[5] = { 4,8,2,7,6 };
	int tmp = 0, i, j;

	for (i = 0; i < 5; i++) {
		for (j = i + 1; j < 5; j++) {
			if (n[i] > n[j]) {
				tmp = n[i];
				n[i] = n[j];
				n[j] = tmp;
			}
		}
		printf("%d ", n[i]);
	}
}

void Bubble() {
	int n[5] = { 4, 8, 2, 7, 6 };
	int tmp = 0, i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4 - i; j++) {
			if (n[j] > n[j + 1]) {
				tmp = n[j];
				n[j] = n[j + 1];
				n[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < 5; i++) {
		printf("%d ", n[i]);
	}
}

int main()
{
	//Select();
	//Bubble();
}
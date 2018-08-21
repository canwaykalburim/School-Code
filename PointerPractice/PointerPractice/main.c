#include <stdio.h>

// 1차원 포인터 선언

void PR() {
	int n = 20;
	int *np = &n;
	printf("%d %d\n", n, *np);
	printf("%x %x\n", &n, np);
}

// 2차원 포인터 선언

void PR2(void) {
	int n = 20;
	int *np = &n;
	int **npp = &np;
	printf("%d %d %d\n", n, *np, **npp);
	printf("%x %x %x\n", &n, np, *npp);
}

// 포인터를 이용한 배열의 접근

void PR3() {
	char c[3] = { 'A', 'B', 'C' };
	char *cp = c;
	printf("%c %c %c\n", c[0], c[1], c[2]);
	printf("%c %c %c\n", *c, *(c + 1), *(c + 2));
	printf("%c %c %c\n", cp[0], cp[1], cp[2]);
	printf("%c %c %c\n", *cp, *(cp + 1), *(cp + 2));
}

void Increase() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *ptr = arr;
	int i = 0;

	while (i != 10) {
		printf("%d ", *(ptr + i) + 2);
		i++;
	}
}

void Plus() {
	int arr[5] = { 1, 2, 3, 4, 5 };
	int *ptr = &arr[4];
	int i = 0, sum = 0;

	while (i != 5) {
		sum += *(ptr--);
		i++;
	}
	printf("%d ", sum);
}

void Change() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *fptr = &arr[9];
	int *bptr = &arr[0]; 
	int tmp = 0;

	for (int i = 0; i < 5; i++) {
		tmp = fptr[i];
		fptr[i] = bptr[0 - i];
		bptr[0 - i] = tmp;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
}

void ChangeArr() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int tmp;

	for (int i = 0; i < 5; i++) {
		tmp = arr[i];
		arr[i] = arr[9 - i];
		arr[9 - i] = tmp;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
}

int main(void) {
	//PR();
	//PR2();
	//PR3();
	//Increase();
	//Plus();
	//Change();
	//ChangeArr();
	return 0;
}
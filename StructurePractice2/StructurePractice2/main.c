#include <stdio.h>

struct Address {
	char name[20];
	char addr[80];
};

struct Telnumber {
	char name[20];
	int age;
	char tel[20];
};

typedef struct _Point {
	int xPos;
	int yPos;
} Point;

void Input(struct Address *data, int n) {
	for (int i = 0; i < n; i++)
		scanf("%s %s", (data + i)->name, (data + i)->addr);
}

void nInput(struct Telnumber *nData, int m) {
	for (int i = 0; i < m; i++)
		scanf("%s %d %s", (nData + i)->name, &(nData + i)->age, (nData + i)->tel);
}

void Output(struct Address *data, int n) {
	for (int i = 0; i < n; i++)
		printf("%s %s\n", (data + i) -> name, (data + i) -> addr);
}

void nOutput(struct Telnumber *nData, int m) {
	for (int i = 0; i < m; i++)
		printf("%s %d %s\n", (nData + i)->name, (nData + i)->age, (nData + i)->tel);
}

void Swap(Point *nData, Point *mData) {
	Point tmp;
	tmp = *nData;
	*nData = *mData;
	*mData = tmp;
}

// 주소록 만들기
void Pro() {
	struct Address data[3];
	Input(data, 3);
	Output(data, 3);
}

// 주소록 입력받고 출력
void Pro2() {
	struct Telnumber nData[2];
	nInput(nData, 2);
	nOutput(nData, 2);
}

// 값 바꿔주기
void Pro3() {
	struct _Point pos1 = { 2, 4 };
	struct _Point pos2 = { 5, 7 };

	Swap(&pos1, &pos2);
	printf("pos1 = {%d, %d} , pos2 = {%d, %d}", pos1.xPos, pos1.yPos, pos2.xPos, pos2.yPos);
}

void Pro4() {

}

int main(void) {
	//Pro();
	//Pro2();
	//Pro3();
	Pro4();
	return 0;
}
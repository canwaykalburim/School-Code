#include "common.h"
#include "phoneData.h"
#include "screenOut.h"
 
#define LIST_NUM 100

int numOfData = 0;
phoneData phonelist[LIST_NUM];

void InputPhoneData(void) {

	printf("�̸� �Է� : ");
	scanf("%s", phonelist[numOfData].name);
	printf("��ȭ��ȣ �Է�: ");
	scanf("%s", phonelist[numOfData].phoneNum);
	printf("�Է��� �Ϸ�Ǿ����ϴ�.");

	numOfData++;
}

void ShowAllData(void) {

	for (int i = 0; i < numOfData; i++) {
		ShowPhoneInfo(phonelist[i]);
	}
	_getch();
}
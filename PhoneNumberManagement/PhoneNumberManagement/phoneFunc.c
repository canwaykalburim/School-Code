#include "common.h"
#include "phoneData.h"
#include "screenOut.h"
 
#define LIST_NUM 100

int numOfData = 0;
phoneData phonelist[LIST_NUM];

void InputPhoneData(void) {

	printf("이름 입력 : ");
	scanf("%s", phonelist[numOfData].name);
	printf("전화번호 입력: ");
	scanf("%s", phonelist[numOfData].phoneNum);
	printf("입력이 완료되었습니다.");

	numOfData++;
}

void ShowAllData(void) {

	for (int i = 0; i < numOfData; i++) {
		ShowPhoneInfo(phonelist[i]);
	}
	_getch();
}
#include "common.h"
#include "phoneData.h"

void ShowMenu(void) {
	system("cls");

	printf("___________메뉴____________ \n");
	printf("  1. 전화번호 입력 \n");
	printf("  2. 전체 정보 출력 \n");
	printf("  3. 종료 \n");
	printf("___________________________ \n");
	printf("선택》  ");
}

void ShowPhoneInfo(phoneData phone) {
	printf("_______________________________ \n\n");
	printf("｜ ▶ 이름: %s \n", phone.name);
	printf("｜ ▶ 전화번호: %s \n", phone.phoneNum);
	printf("_______________________________ \n\n");
}
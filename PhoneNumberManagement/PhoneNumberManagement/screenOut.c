#include "common.h"
#include "phoneData.h"

void ShowMenu(void) {
	system("cls");

	printf("___________�޴�____________ \n");
	printf("  1. ��ȭ��ȣ �Է� \n");
	printf("  2. ��ü ���� ��� \n");
	printf("  3. ���� \n");
	printf("___________________________ \n");
	printf("���á�  ");
}

void ShowPhoneInfo(phoneData phone) {
	printf("_______________________________ \n\n");
	printf("�� �� �̸�: %s \n", phone.name);
	printf("�� �� ��ȭ��ȣ: %s \n", phone.phoneNum);
	printf("_______________________________ \n\n");
}
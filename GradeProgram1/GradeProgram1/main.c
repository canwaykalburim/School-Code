#include <stdio.h>
#include <conio.h>
#include <Windows.h>

int count = 2;
int HakBurn[2];
char Score[2];

void Menu();

struct Grade {
	char Student[30];
	char Subject[30];
	int StudentNum;
	int Score;
} G1, G2, G3;;

void InScore() {
	system("cls");
	if (count = 2) {
		printf("\n  �̸��� �й� ������ �Է��ϼ���\n\n");
		printf("  �̸�: ");
		scanf("%s", G1.Student);
		printf("  �й�: ");
		scanf("%d", &G1.StudentNum);
		HakBurn[0] = G1.StudentNum;
		printf("  ����: ");
		scanf("%s", G1.Subject);
		printf("  ����: ");
		scanf("%d", &G1.Score);
		Score[0] = G1.Score;
	}
	else if (count = 1) {
		system("cls");
		printf("\n  �̸��� �й� ������ �Է��ϼ���\n\n");
		printf("  �̸�: ");
		scanf("%s", G2.Student);
		printf("  �й�: ");
		scanf("%d", &G2.StudentNum);
		HakBurn[1] = G2.StudentNum;
		printf("  ����: ");
		scanf("%s", G2.Subject);
		printf("  ����: ");
		scanf("%d", &G2.Score);
		Score[1] = G2.Score;
	}
	else if (count = 0) {
		system("cls");
		printf("\n  �̸��� �й� ������ �Է��ϼ���\n\n");
		printf("  �̸�: ");
		scanf("%s", G3.Student);
		printf("  �й�: ");
		scanf("%d", &G3.StudentNum);
		HakBurn[2] = G3.StudentNum;
		printf("  ����: ");
		scanf("%s", G3.Subject);
		printf("  ����: ");
		scanf("%d", &G3.Score);
		Score[2] = G3.Score;
	}
	_getch();
	_getch();
	Menu();
}

void StGrade() {
	int mInput;
	system("cls");
	printf("\n  ������ ���� ���� �л��� �й��� �Է��ϼ���\n\n �� ");
	scanf("%d", &mInput);

	if (HakBurn[0] == mInput) {
		printf("\n");
		printf("  �̸�: %s\n", G1.Student);
		printf("  �й�: %d\n", G1.StudentNum);
		printf("  ����: %s\n", G1.Subject);
		printf("  ����: %d\n", G1.Score);
		switch (Score[0] / 10) {
		case 10:
		case 9:
			printf("\n  ����� ������ A�Դϴ�.");
			break;
		case 8:
			printf("\n  ����� ������ B�Դϴ�.");
			break;
		case 7:
			printf("\n  ����� ������ C�Դϴ�.");
			break;
		default:
			printf("\n  ���� �ٽ� �����ž� �� �� ��");
			break;
		}
	}
	else if (HakBurn[1] == mInput) {
		printf("\n");
		printf("  �̸�: %s\n", G2.Student);
		printf("  �й�: %d\n", G2.StudentNum);
		printf("  ����: %s\n", G2.Subject);
		printf("  ����: %d\n", G2.Score);
		switch (Score[1] / 10) {
		case 10:
		case 9:
			printf("\n  ����� ������ A�Դϴ�.");
			break;
		case 8:
			printf("\n  ����� ������ B�Դϴ�.");
			break;
		case 7:
			printf("\n  ����� ������ C�Դϴ�.");
			break;
		default:
			printf("\n  ���� �ٽ� �����ž� �� �� ��");
		}
	}
	else if (HakBurn[2] == mInput) {
		printf("\n");
		printf("  �̸�: %s\n", G3.Student);
		printf("  �й�: %d\n", G3.StudentNum);
		printf("  ����: %s\n", G3.Subject);
		printf("  ����: %d\n", G3.Score);
		switch (Score[2] / 10) {
		case 10:
		case 9:
			printf("\n  ����� ������ A�Դϴ�.");
			break;
		case 8:
			printf("\n  ����� ������ B�Դϴ�.");
			break;
		case 7:
			printf("\n  ����� ������ C�Դϴ�.");
			break;
		default:
			printf("\n  ���� �ٽ� �����ž� �� �� ��");
		}
	}
	else {
		Menu();
	}
	_getch();
	_getch();
	Menu();
}

void Menu() {
	int nInput;

	system("cls");
	printf("\n  1. ���� �Է�\n  2. �л� ����\n\n �� ");
	scanf("%d", &nInput);

	switch (nInput) {
	case 1:
		InScore();
		break;
	case 2:
		StGrade();
		break;
	default:
		Menu();
	}
}

int main(void) {
	Menu();
	return 0;
}
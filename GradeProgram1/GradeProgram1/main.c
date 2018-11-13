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
		printf("\n  이름과 학번 과목을 입력하세요\n\n");
		printf("  이름: ");
		scanf("%s", G1.Student);
		printf("  학번: ");
		scanf("%d", &G1.StudentNum);
		HakBurn[0] = G1.StudentNum;
		printf("  과목: ");
		scanf("%s", G1.Subject);
		printf("  점수: ");
		scanf("%d", &G1.Score);
		Score[0] = G1.Score;
	}
	else if (count = 1) {
		system("cls");
		printf("\n  이름과 학번 과목을 입력하세요\n\n");
		printf("  이름: ");
		scanf("%s", G2.Student);
		printf("  학번: ");
		scanf("%d", &G2.StudentNum);
		HakBurn[1] = G2.StudentNum;
		printf("  과목: ");
		scanf("%s", G2.Subject);
		printf("  점수: ");
		scanf("%d", &G2.Score);
		Score[1] = G2.Score;
	}
	else if (count = 0) {
		system("cls");
		printf("\n  이름과 학번 과목을 입력하세요\n\n");
		printf("  이름: ");
		scanf("%s", G3.Student);
		printf("  학번: ");
		scanf("%d", &G3.StudentNum);
		HakBurn[2] = G3.StudentNum;
		printf("  과목: ");
		scanf("%s", G3.Subject);
		printf("  점수: ");
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
	printf("\n  성적을 보고 싶은 학생의 학번을 입력하세요\n\n ▶ ");
	scanf("%d", &mInput);

	if (HakBurn[0] == mInput) {
		printf("\n");
		printf("  이름: %s\n", G1.Student);
		printf("  학번: %d\n", G1.StudentNum);
		printf("  과목: %s\n", G1.Subject);
		printf("  점수: %d\n", G1.Score);
		switch (Score[0] / 10) {
		case 10:
		case 9:
			printf("\n  당신의 학점은 A입니다.");
			break;
		case 8:
			printf("\n  당신의 학점은 B입니다.");
			break;
		case 7:
			printf("\n  당신의 학점은 C입니다.");
			break;
		default:
			printf("\n  수강 다시 들으셔야 할 듯 ㅋ");
			break;
		}
	}
	else if (HakBurn[1] == mInput) {
		printf("\n");
		printf("  이름: %s\n", G2.Student);
		printf("  학번: %d\n", G2.StudentNum);
		printf("  과목: %s\n", G2.Subject);
		printf("  점수: %d\n", G2.Score);
		switch (Score[1] / 10) {
		case 10:
		case 9:
			printf("\n  당신의 학점은 A입니다.");
			break;
		case 8:
			printf("\n  당신의 학점은 B입니다.");
			break;
		case 7:
			printf("\n  당신의 학점은 C입니다.");
			break;
		default:
			printf("\n  수강 다시 들으셔야 할 듯 ㅋ");
		}
	}
	else if (HakBurn[2] == mInput) {
		printf("\n");
		printf("  이름: %s\n", G3.Student);
		printf("  학번: %d\n", G3.StudentNum);
		printf("  과목: %s\n", G3.Subject);
		printf("  점수: %d\n", G3.Score);
		switch (Score[2] / 10) {
		case 10:
		case 9:
			printf("\n  당신의 학점은 A입니다.");
			break;
		case 8:
			printf("\n  당신의 학점은 B입니다.");
			break;
		case 7:
			printf("\n  당신의 학점은 C입니다.");
			break;
		default:
			printf("\n  수강 다시 들으셔야 할 듯 ㅋ");
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
	printf("\n  1. 성적 입력\n  2. 학생 성적\n\n ▶ ");
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
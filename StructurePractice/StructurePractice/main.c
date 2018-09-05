#include <stdio.h>

struct Person {
	char name[10];
	int age;
};

struct data {
	char name[10];
	char SchoolName[15];
	int Grade;
} d1;

struct Impo {
	char name[10];
	char SchoolName[50];
} m1, m2;

struct Score {
	int Eng, math;
	char name[30];
} s1, s2;

struct Point {
	double x, y;
} p;

struct Point Input() {
	scanf("%lf %lf", &p.x, &p.y);
	return p;
};

struct Point Center(struct Point a, struct Point b, struct Point c) {
	struct Point d;
	d.x = (a.x + b.x + c.x) / 3.0;
	d.y = (a.y + b.y + c.y) / 3.0;
	return d;
};

void OutPut(struct Point p) {
	printf("무게 중심: %.1f %.1f", p.x, p.y);
};

struct Money {
	int number;
	int won;
};

// 이름과 나이를 입력 받아 출력하기
void Ex() {
	struct Person p1;

	printf("이름은? ");
	scanf("%s", p1.name);
	printf("나이는? ");
	scanf("%d", &p1.age);
	printf("당신의 이름은 %s이고 나이는 %d세이군요.", p1.name, p1.age);
}

// 학년 학교 이름 입력 받아 출력하기
void Pro() {
	scanf("%s", d1.name);
	scanf("%s", d1.SchoolName);
	scanf("%d", &d1.Grade);

	printf("%s %d학년에 재학 중인 %s입니다.", d1.SchoolName, d1.Grade, d1.name);
}

void Pro2() {
	struct Impo m1 = { "서동영", "대덕소프트웨어마이스터고등학교" };

	scanf("%s %s", m2.name, m2.SchoolName);
	printf("나의 이름과 학교명: %s %s\n친구 이름과 학교명: %s %s", m1.name, m1.SchoolName, m2.name, m2.SchoolName);
}

// 이름과 점수 입력 받아 평균 출력
void Pro3() {
	scanf("%s %d %d", s1.name, &s1.Eng, &s1.math);
	scanf("%s %d %d", s2.name, &s2.Eng, &s2.math);

	printf("%s 평균: %.1f\n", s1.name, (s1.Eng + s1.math) / 2.0);
	printf("%s 평균: %.1f", s2.name, (s2.Eng + s2.math) / 2.0);
}

// 삼각형 꼭짓점 좌표를 입력받아 무게 중심의 좌표 출력
void Pro4() {
	struct Point a, b, c, d;
	printf("세 꼭짓점의 좌표는? ");
	a = Input();
	b = Input();
	c = Input();
	d = Center(a, b, c);
	OutPut(d);
}

// 저축왕의 번호와 저축액을 출력
void Pro5() {
	struct Money Saving[5], MaxData;

	for (int i = 0; i < 5; i++) {
		printf("%d번 저축 금액은? ", i + 1);
		Saving[i].number = i + 1;
		scanf("%d", &Saving[i].won);
	}
	MaxData = Saving[0];

	for (int i = 1; i < 5; i++) {
		if (MaxData.won < Saving[i].won)
			MaxData = Saving[i];
	}
	printf("저축왕 %d번 %d원\n", MaxData.number, MaxData.won);
}

int main(void) {
	//Ex();
	//Pro();
	//Pro2();
	//Pro3();
	//Pro4();
	//Pro5();
	return 0;
}
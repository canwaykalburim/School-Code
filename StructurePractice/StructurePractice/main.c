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
	printf("���� �߽�: %.1f %.1f", p.x, p.y);
};

struct Money {
	int number;
	int won;
};

// �̸��� ���̸� �Է� �޾� ����ϱ�
void Ex() {
	struct Person p1;

	printf("�̸���? ");
	scanf("%s", p1.name);
	printf("���̴�? ");
	scanf("%d", &p1.age);
	printf("����� �̸��� %s�̰� ���̴� %d���̱���.", p1.name, p1.age);
}

// �г� �б� �̸� �Է� �޾� ����ϱ�
void Pro() {
	scanf("%s", d1.name);
	scanf("%s", d1.SchoolName);
	scanf("%d", &d1.Grade);

	printf("%s %d�г⿡ ���� ���� %s�Դϴ�.", d1.SchoolName, d1.Grade, d1.name);
}

void Pro2() {
	struct Impo m1 = { "������", "�������Ʈ����̽��Ͱ���б�" };

	scanf("%s %s", m2.name, m2.SchoolName);
	printf("���� �̸��� �б���: %s %s\nģ�� �̸��� �б���: %s %s", m1.name, m1.SchoolName, m2.name, m2.SchoolName);
}

// �̸��� ���� �Է� �޾� ��� ���
void Pro3() {
	scanf("%s %d %d", s1.name, &s1.Eng, &s1.math);
	scanf("%s %d %d", s2.name, &s2.Eng, &s2.math);

	printf("%s ���: %.1f\n", s1.name, (s1.Eng + s1.math) / 2.0);
	printf("%s ���: %.1f", s2.name, (s2.Eng + s2.math) / 2.0);
}

// �ﰢ�� ������ ��ǥ�� �Է¹޾� ���� �߽��� ��ǥ ���
void Pro4() {
	struct Point a, b, c, d;
	printf("�� �������� ��ǥ��? ");
	a = Input();
	b = Input();
	c = Input();
	d = Center(a, b, c);
	OutPut(d);
}

// ������� ��ȣ�� ������� ���
void Pro5() {
	struct Money Saving[5], MaxData;

	for (int i = 0; i < 5; i++) {
		printf("%d�� ���� �ݾ���? ", i + 1);
		Saving[i].number = i + 1;
		scanf("%d", &Saving[i].won);
	}
	MaxData = Saving[0];

	for (int i = 1; i < 5; i++) {
		if (MaxData.won < Saving[i].won)
			MaxData = Saving[i];
	}
	printf("����� %d�� %d��\n", MaxData.number, MaxData.won);
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
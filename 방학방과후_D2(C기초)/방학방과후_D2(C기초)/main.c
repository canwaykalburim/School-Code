#include <stdio.h>
#include <math.h>
#include <ctype.h>

double average(double a, double b, double c)
{
	return (a + b + c) / 3.0;
}

double std_deviation(double a, double b, double c)
{
	double tmp = average(a, b, c);

	tmp /= (pow((tmp - a), 2.0) + pow((tmp - b), 2.0) + pow((tmp - c), 2.0)) / 3.0;

	return sqrt(tmp);
}

int abs(int num)
{
	return num > 0 ? num : -num;
}

void a1()	// ǥ�� ���� ���ϱ�
{
	double a, b, c = 0;

	printf("�� ���� �Է��ϼ���: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("\nStandard deviation is %lf\n", std_deviation(a, b, c));
}

void a2()	// �ݿø�
{
	double fl;

	printf("���� �Է��ϼ���: ");

	scanf("%lf", &fl);
	printf("%d", (int)floor(fl + 0.5));
}

void a3()	// �ҹ��� �빮�ڷ� ��ȯ
{
	char alpha;

	printf("�ҹ��ڸ� �Է��ϼ���: ");
	scanf("%c", &alpha);
	printf("%c", alpha - 32);
}

void a4()	//���� �����ڸ� ����Ͽ� ���� ���ϱ�
{
	int num;

	printf("���� �Է��ϼ���: ");
	scanf("%d", &num);
	printf("%d", abs(num));
}

void a5()	// ���ĺ� ���� �Ǻ�
{
	char mj;

	printf("���� �Է��ϼ���: ");
	scanf("%c", &mj);

	if (isdigit(mj))
		printf("����");
	else if (isalpha(mj))
		printf("���ĺ�");
	else
		printf("��Ÿ");
}

void a6()	// Ȧ¦ �Ǻ�
{
	int num;

	printf("���� �Է��ϼ���: ");
	scanf("%d", &num);

	(num & 1) == 1 ? printf("Ȧ��") : printf("¦��");

}

void a7()	// ������ ����
{
	char ch[3];
	int cnt = 0;

	printf("3���� ���ڸ� �Է��ϼ���: ");
	for(int i = 0; i < 3; i++)
		scanf("%c", &ch[i]);

	for(int i = 0; i < 3; i++) {
		if (isdigit(ch[i]))
			cnt++;
	}
	printf("\n���ڴ� %d�� �Դϴ�.", cnt);
}

int main(void)
{
	//a1();
	//a2();
	//a3();
	//a4();
	//a5();
	//a6();
	//a7();

	return 0;
}
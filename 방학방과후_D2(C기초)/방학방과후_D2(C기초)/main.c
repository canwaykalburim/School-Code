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

void a1()	// 표준 편차 구하기
{
	double a, b, c = 0;

	printf("세 값을 입력하세요: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("\nStandard deviation is %lf\n", std_deviation(a, b, c));
}

void a2()	// 반올림
{
	double fl;

	printf("값을 입력하세요: ");

	scanf("%lf", &fl);
	printf("%d", (int)floor(fl + 0.5));
}

void a3()	// 소문자 대문자로 변환
{
	char alpha;

	printf("소문자를 입력하세요: ");
	scanf("%c", &alpha);
	printf("%c", alpha - 32);
}

void a4()	//삼항 연산자를 사용하여 절댓값 구하기
{
	int num;

	printf("값을 입력하세요: ");
	scanf("%d", &num);
	printf("%d", abs(num));
}

void a5()	// 알파벳 숫자 판별
{
	char mj;

	printf("값을 입력하세요: ");
	scanf("%c", &mj);

	if (isdigit(mj))
		printf("숫자");
	else if (isalpha(mj))
		printf("알파벳");
	else
		printf("기타");
}

void a6()	// 홀짝 판별
{
	int num;

	printf("값을 입력하세요: ");
	scanf("%d", &num);

	(num & 1) == 1 ? printf("홀수") : printf("짝수");

}

void a7()	// 숫자의 갯수
{
	char ch[3];
	int cnt = 0;

	printf("3개의 문자를 입력하세요: ");
	for(int i = 0; i < 3; i++)
		scanf("%c", &ch[i]);

	for(int i = 0; i < 3; i++) {
		if (isdigit(ch[i]))
			cnt++;
	}
	printf("\n숫자는 %d개 입니다.", cnt);
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
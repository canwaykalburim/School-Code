#include <stdio.h>

int Sub(int a, int b) {
	if (a > b)
		return a - b;
	else
		return b - a;
}

int Max(int a, int b, int c) {
	if (a > b)
	{
		if (a > c)
			return a;
		else
			return c;
	}
	else if (a < b)
	{
		if (b > c)
			return b;
		else
			return c;
	}
	else if (a == b && b == c)
	{
		printf("세 수가 모두 같습니다.\n");
		return 0;
	}
	else
	{
		printf("구하지 못 하였습니다.\n");
		return 0;
	}

}

int Invo(int num, int quo) {
	int i, res = 1;
	for (i = 0; i < quo; i++)
	{
		res *= num;
	}
	return res;
}

void Add(int arg1, int arg2) {
	printf("%d + %d = %d", arg1, arg2, arg1 + arg2);
}

void Sub2(int arg1, int arg2) {
	printf("%d - %d = %d", arg1, arg2, arg1 - arg2);
}

void Dev(int arg1, int arg2) {
	printf("%d / %d = %d", arg1, arg2, arg1 / arg2);
}

void Mult(int arg1, int arg2) {
	printf("%d * %d = %d", arg1, arg2, arg1 * arg2);
}

void Input(int a[], int num) {
	int i;
	for (i = 0; i < num; i++)
	{
		scanf("%d", &a[i]);
	}
}

void Output(int a[], int num) {
	int i;
	for (i = 0; i < num; i++)
	{
		printf("%d ", a[i]);
	}
}

void Sort(int a[], int num) {
	int i, j, tmp;
	for (i = 0; i < num - 1; i++)
	{
		for (j = i + 1; j < num; j++)
		{
			if (a[i] < a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

void Pass(int a, int b, int c) {
	int ave = 0;
	if (a > 30 && b > 30 && c > 30)
	{
		ave = (a + b + c) / 3;
		if (ave > 60)
			printf("합격\n");
		else
			printf("불합격\n");
	}
	else
		printf("불합격\n");
}

void Prime(int n) {
	int i = 3, count, a;
	if (n >= 1)
	{
		printf("2 ");
	}
	for (count = 2; count <= n; )
	{
		for (a = 2; a <= i - 1; a++)
		{
			if (i % a == 0)
				break;
		}
		if (a == i)
		{
			printf("%d ", i);
			count++;
		}
		i++;
	}
}

void GCD(int a, int b) {
	int i, tmp;

	if (a > b)
	{
		for (i = 1; i < b; i++)
		{
			if (a % i == 0 && b % i == 0)
			{
				tmp = i;
			}
		}
		printf("%d", tmp);
	}
	else
	{
		for (i = 1; i < a; i++)
		{
			if (a % i == 0 && b % i == 0)
			{
				tmp = i;
			}
		}
		printf("%d", tmp);
	}
	
}

void Pro() {
	int a, b, tmp = 0;
	scanf("%d %d", &a, &b);
	tmp = Sub(a, b);
	printf("%d", tmp);
}

void Pro2() {
	int a, b, c, tmp;
	scanf("%d %d %d", &a, &b, &c);
	tmp = Max(a, b, c);
	printf("%d", tmp);
}

void Pro3() {
	int num, quo, res;
	scanf("%d %d", &num, &quo);
	res = Invo(num, quo);
	printf("%d", res);
}

void Pro4() {
	int num1, num2;

	char oper;

	scanf("%d %c %d", &num1, &oper, &num2);

	switch (oper)
	{
	case '+': Add(num1, num2);
		break;
	case '-': Sub(num1, num2);
		break;
	case '/': Dev(num1, num2);
		break;
	case '*': Mult(num1, num2);
		break;
	}
	printf("error\n");
}

void Pro5() {
	int arr[10], nInput;
	scanf("%d", &nInput);

	Input(arr, nInput);
	Sort(arr, nInput);
	Output(arr, nInput);
}

void Ppro5() {
	int arr[10];
	
	Input(arr, 10);
	Sort(arr, 10);
	Output(arr, 10);
}

void Pro6() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	Pass(a, b, c);
}

void Pro7() {
	int n;
	scanf("%d", &n);
	Prime(n);
}

void Pro8() {
	int a, b;
	scanf("%d %d", &a, &b);
	GCD(a, b);
}

int main()
{
	//두 수의 차 구하기
	//Pro();
	//세 수 중 최댓값 구하기
	//Pro2();
	//거듭제곱하기
	//Pro3();
	//사칙연산
	//Pro4();
	//내림 차순 정렬
	//Pro5();
	//내림 차순 정렬2
	//Ppro5();
	//합격 불합격 구하기
	//Pro6();
	//소수 구하기
	//Pro7();
	//GCD 구하기
	//Pro8();
}
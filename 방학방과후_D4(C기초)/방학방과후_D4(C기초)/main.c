#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add(const int a, const int b, int* p)
{
	*p = a + b;
}

void cyclic_swap(int* a, int* b, int* c)
{
	int tmp = 0;

	tmp = *b;
	*b = *a;
	*a = *c;
	*c = tmp;
}

void a1()	// 10���� 2������ ��ȯ
{
	int decimal, i = 0;
	int *binary = malloc(sizeof(int) * 32);

	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &decimal);

	while (1)
	{
		*(binary + i) = decimal % 2;
		decimal /= 2;

		i++; 

		if (decimal == 0)
			break;
	}

	for (int k = i - 1; k >= 0; k--)
	{
		printf("%d", *(binary + k));
	}

	free(binary);
}

void a2()	// ���� ���� �� ����
{
	char *inputStr = malloc(sizeof(char) * 100);

	printf("������ �Է��ϼ��� : ");
	fgets(inputStr, 100, stdin);

	char *tmpPtr = strtok(inputStr, " ");

	while (tmpPtr != NULL)
	{
		printf("%s ", tmpPtr);
		tmpPtr = strtok(NULL, " ");
	}

	free(inputStr);
}

void a3()	// ���ڿ��� �κ� ���� ���� ���
{
	char* str = malloc(sizeof(char) * 32);
	
	printf("���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", str, sizeof(str));

	for (int i = 0; i < (int)strlen(str); i++)
	{
		for (int j = i; j < (int)strlen(str); j++) {
			for (int k = i; k <= j; k++)
			{
				printf("%c", *(str + k));
			}
			printf(" ");
		}
	}

	free(str);
}

void a4()	//�Լ��� ������ �� �ѱ��
{
	int a, b, sum = 0;
	int *p = &sum;

	printf("���� �Է��ϼ��� : ");
	scanf_s("%d %d", &a, &b);

	add(a, b, p);

	printf("%d", *p);
}

void a5()
{
	int a, b, c;

	printf("���� �Է��ϼ��� : ");
	scanf_s("%d %d %d", &a, &b, &c);

	cyclic_swap(&a, &b, &c);

	printf("a : %d\nb : %d\nc : %d", a, b, c);
}

int main(void)
{
	//a1();
	//a2();
	//a3();
	//a4();
	a5();
	return 0;
}
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>

void a1()	// 5�� ��� �����ϰ� ���ϱ�
{
	int inputNum, sum = 0;

	printf("���� �Է��ϼ��� : ");
	scanf("%d", &inputNum);

	for (int i = 1; i <= inputNum; i++)
	{
		if (i % 5 == 0)
			continue;
		else
			sum += i;
	}

	printf("%d\n", sum);
}

void a2()	// 9 + 99 + 999 + 9999 ���ϱ�
{
	int sum = 0, result = 0;

	for (int i = 9; i < 99999; i *= 10)
	{
		sum += i;
		result += sum;
	}
	printf("%d", result);
}

void a3()	//�� �ڸ��� ���ϱ�
{
	int inputNum, sum = 0;
	printf("���� �Է��ϼ���(0 ~ 9999) : ");
	scanf("%d", &inputNum);

	for (int i = 0; i < 4; i++)
	{
		sum += inputNum % 10;
		inputNum /= 10;
	}
	printf("%d", sum);
}

void a4()	// �ھƵ��� ��
{
	int inputNum, sum = 0;
	int tmp[4] = { 0 };

	printf("���� �Է��ϼ���(0 ~ 9999) : ");
	scanf("%d", &inputNum);

	int inputTmp = inputNum;

	for (int i = 0; i < 4; i++)
	{
		tmp[i] += inputNum % 10;

		if (tmp[i] == 0)
		{
			for (int j = 0; j < (4 - i); j++) {
				sum = pow(tmp[j], (4 - i));
			}
			break;
		}
		inputNum /= 10;
	}

	inputTmp == sum ? printf("�ھ� ���� ���Դϴ�.") : printf("�ھ� ���� ���� �ƴմϴ�.");
}

void a5()
{
	char* inputStr = malloc(sizeof(char) * 100);
	int solveKey = 0;

	printf("��ȣȭ �� ���ڿ��� �Է��ϼ���: ");
	fgets(inputStr, 100, stdin);
	printf("Ű ���� �Է��ϼ���: ");
	scanf("%d", &solveKey);

	for (int i = 0; i < (int)strlen(inputStr); i++)
		*(inputStr + i) += solveKey;

	printf("%s", inputStr);

	free(inputStr);
}

int main(void)
{
	//a1();
	//a2();
	//a3();
	//a4();			// ����
	//a5();
}
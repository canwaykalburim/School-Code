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
	int inputNum, i = 0, sum = 0;

	printf("Ȯ�� �� ���� �Է��ϼ��� : ");
	scanf("%d", &inputNum);

	int inputCnt = inputNum;
	int inputCmp = inputNum;

	while (inputCnt > 0)
	{
		i++;
		inputCnt /= 10;
	}

	int numTmp[4];

	for (int k = 0; k < i; k++)
	{
		numTmp[k] = inputNum % 10;
		inputNum /= 10;

		numTmp[k] = (int)pow(numTmp[k], i);
		sum += numTmp[k];
	}

	sum == inputCmp ? printf("�ھƵ��� ���Դϴ�.") : printf("�ھƵ��� ���� �ƴմϴ�.");
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
	//a4();
	//a5();
}
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>

void a1()	// 5의 배수 제외하고 더하기
{
	int inputNum, sum = 0;

	printf("값을 입력하세요 : ");
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

void a2()	// 9 + 99 + 999 + 9999 더하기
{
	int sum = 0, result = 0;

	for (int i = 9; i < 99999; i *= 10)
	{
		sum += i;
		result += sum;
	}
	printf("%d", result);
}

void a3()	//각 자릿수 더하기
{
	int inputNum, sum = 0;
	printf("값을 입력하세요(0 ~ 9999) : ");
	scanf("%d", &inputNum);

	for (int i = 0; i < 4; i++)
	{
		sum += inputNum % 10;
		inputNum /= 10;
	}
	printf("%d", sum);
}

void a4()	// 자아도취 수
{
	int inputNum, sum = 0;
	int tmp[4] = { 0 };

	printf("값을 입력하세요(0 ~ 9999) : ");
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

	inputTmp == sum ? printf("자아 도취 수입니다.") : printf("자아 도취 수가 아닙니다.");
}

void a5()
{
	char* inputStr = malloc(sizeof(char) * 100);
	int solveKey = 0;

	printf("암호화 할 문자열을 입력하세요: ");
	fgets(inputStr, 100, stdin);
	printf("키 값을 입력하세요: ");
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
	//a4();			// 실패
	//a5();
}
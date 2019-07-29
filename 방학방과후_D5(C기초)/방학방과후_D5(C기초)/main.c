#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 60

void reverse(char *s, int last)
{
	for (int i = last - 1; i >= 0; i--)
	{
		printf("%c", *(s + i));
	}
}

int modulo(int* arr, const int mod, const int size)
{
	int tmp = 0;

	tmp = *(arr + 0) % mod;

	for (int i = 1; i < size; i++)
	{
		tmp = (tmp * 10 + *(arr + i)) % mod;
	}

	return tmp;
}

int count_vowe(char* arr, int length)
{
	int cnt = 0;
	for (int i = 0; i < length; i++)
	{
		switch (*(arr + i))
		{
		case 'a':
			cnt++;	
			break;
		case 'e':
			cnt++;
			break;
		case 'i':
			cnt++;
			break;
		case 'o':
			cnt++;
			break;
		case 'u':
			cnt++;
			break;
		default:
			break;
		}
	}

	return cnt;
}

void a1()	// �Ųٷ� ����ϱ�
{
	char* nInput = malloc(sizeof(char) * MAX_SIZE);

	printf("������ �Է��ϼ��� : ");
	fgets(nInput, MAX_SIZE, stdin);

	int last = strlen(nInput);

	reverse(nInput, last);

	free(nInput);
}

void a2()
{
	int i = 0, mod;
	int *arr = malloc(sizeof(int) * MAX_SIZE);
	char ch;

	printf("Enter a big positive integer\n> ");

	while ((ch = getchar()) != '\n')
	{
		*(arr + i) = atoi(&ch);
		i++;
	}

	printf("Enter a modulus number\n> ");
	scanf_s("%d", &mod);
	printf("The result of modulo is %d", modulo(arr, mod, i));

	free(arr);
}

void a3()	// ���� ����
{
	char *nInput = malloc(sizeof(char) * MAX_SIZE);

	printf("������ �Է��ϼ��� : ");
	fgets(nInput, MAX_SIZE, stdin);

	printf("%d", count_vowe(nInput, strlen(nInput)));
}

int main(void)
{
	//a1();
	//a2();
	a3();
	return 0;
}
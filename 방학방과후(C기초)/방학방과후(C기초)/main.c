#include <stdio.h>
#include <string.h>

void a4() {
	int nInput;

	printf("값을 입력하세요: ");

	scanf("%d", &nInput);

	if (nInput % 5 == 0 || nInput % 6 == 0)
		printf("1 ");
	else
		printf("0 ");
	if (nInput % 5 == 0 && nInput % 6 == 0)
		printf("1 ");
	else
		printf("0");
	if (nInput % 5 != 0 || nInput % 6 != 0)
		printf("1\n");
	else
		printf("0\n");
}

void a5() {
	int nInput;
	
	printf("값을 입력하세요: ");

	scanf("%d", &nInput);
	
	int i = nInput / 500;
	int nTmp = nInput % 500;
	int j = nTmp / 100;
	nTmp %= 100;
	int k = nTmp / 50;
	nTmp %= 50;
	int l = nTmp / 10;

	printf("500원 %d개, 100원 %d개, 50원 %d개, 10원 %d개", i, j, k, l);
}

int main(void)
{
	a4();
	a5();

	return 0;
}
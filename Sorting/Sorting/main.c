#include <stdio.h>
#include <string.h>

int main(void)
{
	int num[10] = { 8, 5, 4, 3, 9 , 1, 7, 10, 6, 2};
	int tmp = 0;

	for (int i = 1; i < 10; i++)
	{
		for (int i = 1; i < 10; i++)
		{
			if (num[i - 1] > num[i])
			{
				tmp = num[i];
				num[i] = num[i - 1];
				num[i - 1] = tmp;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", num[i]);
	}
	return 0;
}
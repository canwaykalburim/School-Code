#include <stdio.h>

int binarySearch(int *arr, int len, int target)
{
	int First = 0;
	int Last = len - 1;
	int mid = 0;

	while (First <= Last)
	{
		mid = (First + Last) / 2;
		if (arr[mid] == target) 
		{
			return mid;
		}
		else {
			if (arr[mid] > target)
				Last = mid - 1;
			else
				First = mid + 1;
		}
	}
	return -1;
}

int main(void)
{
	int arr[] = { 1, 3 , 8 , 11, 15, 17, 20 };
	int Find_idx, target;
	printf("찾고자 하는 타깃을 입력하세요: ");
	scanf("%d", &target);
	Find_idx = binarySearch(arr, sizeof(arr) / sizeof(int), target);
	if (Find_idx == -1)	
	{
		printf("탐색을 실패했습니다.\n");
	}
	else
	{
		printf("탐색을 성공했습니다.\n");
	}
	printf("찾고자 하는 타깃의 인덱스: %d\n", Find_idx);
	return 0;
}
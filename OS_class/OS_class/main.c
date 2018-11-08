#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

HANDLE hMutex;

DWORD WINAPI ThreadProc1(LPVOID IpProgram)
{
	char str[] = "aaaaaaaaaa";
	while (1)
	{
		for (int i = 0; i < strlen(str); i++) {
			Sleep(1000);
			printf("%c", str[i]);
		}
		printf("\n");
	}
	return 0;
}

DWORD WINAPI ThreadProc2(LPVOID IpProgram)
{
	char str[] = "bbbbbbbbbb";
	while (1)
	{
		WaitForSingleObject(hMutex, INFINITE);
		for (int i = 0; i < strlen(str); i++) {
			Sleep(1000);
			printf("%c", str[i]);
		}
		printf("\n");

		ReleaseMutex(hMutex);
	}
	return 0;
}

int main(void)
{
	HANDLE hThread1, hThread2;

	hMutex = CreateMutex(NULL, FALSE, NULL);

	hThread1 = CreateThread(NULL, 0, ThreadProc1, NULL, 0, NULL);
	hThread2 = CreateThread(NULL, 0, ThreadProc2, NULL, 0, NULL);
	system("PAUSE");
	return 0;
}
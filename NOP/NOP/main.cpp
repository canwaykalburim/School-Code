#include <iostream>
using namespace std;

#define SIZE 12

int nData[SIZE] = { 16, 32, 23, 61, 75, 57, 83, 38, 97, 79, 47, 41 };

int main(void) {
	int sum = nData[0], Min = nData[0], Max = nData[0], tmp = 0;
	float Avg;
	for (int a = 1; a < SIZE; a++) {
		tmp = nData[a];
		sum += tmp;						//��
		Avg = (float)sum / SIZE;		//���
		if (Max < tmp)	Max = tmp;		//�ִ�
		if (Min > tmp)	Min = tmp;		//�ּ�
	}
	cout << sum << "  " <<  Avg << "  " << Max << "  " << Min << endl;
}
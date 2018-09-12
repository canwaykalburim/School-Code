#include <iostream>
#include <iomanip>
using namespace std;

#define size_d 100
#define SizeName 10
const int SizeAdd = 20;
const int size_c = 200;

extern int x = 50 , y = 2;

// 1�� ��
void Pro() {
	int a = 10;
	float b = 2.5;
	char c = 'e';
	char d[30] = " ";

	cin >> d;
	cout << "\n" << a << "\n" << b << "\n" << c << "\n" << d << endl;
}

// 2�� ��
class Person {
	int man, woman, sum;
public:
	void itset(int a, int b);
	int itsum();
};
void Person::itset(int a, int b) {
	man = a;
	woman = b;
}
int Person::itsum() {
	sum = man + woman;
	return sum;
}
void Pro2() {
	Person p1, p2;
	p1.itset(2, 3);
	p2.itset(20, 30);
	cout << " sum1: " << p1.itsum() << "\n sum2: " << p2.itsum() << endl;
}

void Pro3() {
	int data = 100;
	int &rdata = data;
	cout << data << ", " << rdata << endl;
	rdata = 200;
	cout << data << ", " << rdata << endl;
	cout << &data << ", " << &rdata << endl;
}

int sum(int x, int y);

void Pro4()
{
	int a, b, c;
	cout << "�� ���� �Է��ϼ���: ";
	cin >> a >> b;
	c = sum(a, b);
	cout << "a�� b�� �� ���\n" << c;
}

int sum(int x, int y) { return x + y; }

void Pro5() {
	cout << "int�� " << sizeof(int) << "byte�̴�." << endl;
	cout << "char�� " << sizeof(char) << "byte�̴�." << endl;
	cout << "short�� " << sizeof(short) << "byte�̴�." << endl;
	cout << "float�� " << sizeof(float) << "byte�̴�." << endl;
	cout << "double�� " << sizeof(double) << "byte�̴�." << endl;
}

void Pro6() {
	int a2[3] = { 1,2,3 };
	int b2[2][2] = { {1, 2}, {3, 4} };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << b2[i][j] << endl;
		}
	}
}

void Pro7() {
	cout << "10�� ������ ���: " << 80 << endl;
	cout << "8�� ������ ���: " << 0120 << endl;
	cout << "16�� ������ ���: " << 0x50 << endl;
}

void Pro8() {
	char MunJa = 'a';
	int Gap = 34;
	float Silsu = 212.34, Hap;
	Hap = MunJa + Gap + Silsu;
	cout << "Hap�� ��: " << Hap << endl;
}

void Pro9() {
	float Gap1 = 2.11, Gap2 = 13.5;
	cout << "Gap1 + gap2: " << Gap1 + Gap2 << endl;
	cout << "gap2 / Gap1: " << (int)Gap2 / (int)Gap1 << endl;
}

void Pro10() {
	int a = 10, b = 5;
	cout << "x * y : " << x * y << endl;
	cout << "a / b : " << a / b << "\n";
}

void Pro11() {
	register int i;
	for (i = 4; i > 0; i--) {
		register int j = 10;
		j *= i;
		cout << j << "\t";
	}
	cout << i << endl;
}

void Pro12() {
	int x = 2, yd;
	yd = x * size_d;
	cout << "yd: " << yd << endl;

	int yc;
	yc = x * size_c;
	cout << "yc: " << yc << endl;
}

void Pro13() {
	unsigned short int Day;
	enum Week { Mon, Tue, Wed, Thu, Fri, Sat, Sun };
	Week Weekend;
	cout << "Week : Mon_0, Tue_1, Wed_2, Thu_3, Fri_4, Sat_5, Sun_6\n";
	cout << "Weekend :Sat_5,Sun_6" << endl;
	cin >> Day;
	Weekend = (Week)Day;
	if (Weekend == Sat || Weekend == Sun)
		cout << "�ָ��Դϴ�"; 
	else
		cout << "�ָ��� �ƴմϴ�";
}

// 3����
void Pro14() {
	char Name[SizeName];
	char Address[SizeAdd];

	cout << "�̸�: ";
	cin >> Name;
	cout << "�ּ�: ";
	cin	>> Address;
	cout << "�̸���" << Name <<"�̰�, " << "�ּҴ�" <<Address << "�Դϴ�." << endl;
}

void Pro15() {
	int x = 12, y = 1234;

	cout << "10����:" << dec << x << endl;
	cout << "8����:" << oct << x << endl;
	cout << "16����:" << hex << x << endl;
	cout << endl;
	cout << "1234567890" << endl;
	cout << dec << y << endl;
	cout << setw(10) << y << endl;
}

void Pro16() {
	float x = 12.30;
	float y = 10.0 + 2.0 / 3.0;
	cout.precision(4);
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
}

void Pro17() {
	float x = 12.30;
	float y = 10.0 + 2.0 / 3.0;
	cout.setf(ios::showpoint);
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	cout.precision(4);
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
}

void Pro18() {
	int ion = 30;

	cout << "The Number of ion" << endl;
	cout.setf(ios::showpos);
	cout << ion << endl;
	cout << hex << ion << endl;
	cout.setf(ios::uppercase);
	cout << hex << ion << endl;
	cout.setf(ios::showbase);
	cout << ion << hex << endl;
}

void Pro19() {
	int ion = 0;

	cout << "�ڸ� ��ġ ����\n" << endl;
	cout << "--------------\n";
	cout.setf(ios::showpos);
	cout.setf(ios::right, ios::adjustfield);
	cout.setf(ios::showpoint);
	while (ion < 3) {
		cout.width(13);
		cout << ++ion << endl;
	}
	cout << "--------------\n";
	cout.setf(ios::left, ios::adjustfield);
	while (ion > 0) {
		cout.width(13);
		cout << ion-- << endl;
	}
	cout << "--------------\n";
	cout.setf(ios::internal, ios::adjustfield);
	while (ion < 3) {
		cout.width(13);
		cout << ++ion << endl;
	}
	cout << "--------------\n";
}

void Pro20() {
	const int Length = 30;
	char Name[Length];
	char Address[Length];

	cout << "�̸�: ";
	cin.getline(Name, Length);
	cout << "�ּ�: ";
	cin.getline(Address, Length);
	cout << "�̸���" << Name << "�̰�, " << "�ּҴ�" << Address << "�Դϴ�." << endl;
}

int main(void) {
	//Pro();
	//Pro2();
	//Pro3();
	//Pro4();
	//Pro5();
	//Pro6();
	//Pro7();
	//Pro8();
	//Pro9();
	//Pro10();
	//Pro11();
	//Pro12();
	//Pro13();
	//Pro14();
	//Pro15();
	//Pro16();
	//Pro17();
	//Pro18();
	//Pro19();
	Pro20();

	return 0;
}
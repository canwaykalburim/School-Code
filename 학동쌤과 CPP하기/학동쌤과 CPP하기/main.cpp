#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

#define SIZE 20 

void menu();

class System {
public:
	char name[SIZE], PhoneN[SIZE];
	int	ID, money;
	void Input(), SerchID();
} p1, p2, p3;

void System::SerchID() {
	system("cls");
	cout.setf(ios::right, ios::adjustfield);
	cout << "�̸�: " << name << endl;
	cout << "�й�: " << ID << endl;
	cout << "��ȭ��ȣ: " << PhoneN << endl;
	cout << "�뵷: " << money << endl;
	_getch();
}

void BSmoney() {
	int max1 = p1.money;
	int max2 = p2.money;
	int max3 = p3.money;
	for (int B = 1; B < 3; B++) {
		if (max1 > max2) {
			if (max1 > max2) {
				cout << "���� �뵷�� ���� ����� %s�Դϴ�" << p1.name;
			}
			else
				cout << "���� �뵷�� ���� ����� %s�Դϴ�" << p3.name;
		}
		else if (max1 < max2) {
			if (max2 > max3) {
				cout << "���� �뵷�� ���� ����� %s�Դϴ�" << p2.name;
			}
			else
				cout << "���� �뵷�� ���� ����� %s�Դϴ�" << p3.name;
		}
	}
}

void System::Input() {
	system("cls");
	cout << "�̸�: ";
	cin >> name;
	cout << "�й�: ";
	cin >> ID;
	cout << "��ȭ��ȣ: ";
	cin >> PhoneN;
	cout << "�뵷: ";
	cin >> money;
	menu();
}

void menu() {
	int nInput, STID, count = 1;
	system("cls");
	cout << "\n  [�޴�]" << endl;
	cout << "\n  1. �߰�" << endl;
	cout << "\n  2. �˻�(�й�)" << endl;
	cout << "\n  3. �˻�(�뵷)\n\n �� ";
	cin >> nInput;
	switch (nInput) {
	case 1:
		switch (count) {
		case 1:
			count++;
			p1.Input();	break;
		case 2:
			count++;
			p2.Input();	break;
		case 3:
			count++;
			p3.Input(); break;
		default:
			cout << "�� �̻� �Է��� �� �����ϴ�." << endl;
			break;
		}
	case 2:
		system("cls");
		cout << "�й��� �Է��� �ּ���: ";
		cin >> STID;
		if (p1.ID == STID) {
			p1.SerchID();
		}
		else if (p2.ID == STID) {
			p2.SerchID();

		}
		else if (p3.ID == STID) {
			p3.SerchID();

		}
		else {
			cout << "ã���ô� �й��� �����ϴ�";
			menu();	break;
		}
	case 3:
		BSmoney();
	default:
		cout << "�ùٸ� ���� �Է��� �ֽʽÿ�";
		break;
	}
	menu();
}

int main(void) {
	menu();
	return 0;
}
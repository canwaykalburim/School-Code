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
	cout << "이름: " << name << endl;
	cout << "학번: " << ID << endl;
	cout << "전화번호: " << PhoneN << endl;
	cout << "용돈: " << money << endl;
	_getch();
}

void BSmoney() {
	int max1 = p1.money;
	int max2 = p2.money;
	int max3 = p3.money;
	for (int B = 1; B < 3; B++) {
		if (max1 > max2) {
			if (max1 > max2) {
				cout << "가장 용돈이 많은 사람은 %s입니다" << p1.name;
			}
			else
				cout << "가장 용돈이 많은 사람은 %s입니다" << p3.name;
		}
		else if (max1 < max2) {
			if (max2 > max3) {
				cout << "가장 용돈이 많은 사람은 %s입니다" << p2.name;
			}
			else
				cout << "가장 용돈이 많은 사람은 %s입니다" << p3.name;
		}
	}
}

void System::Input() {
	system("cls");
	cout << "이름: ";
	cin >> name;
	cout << "학번: ";
	cin >> ID;
	cout << "전화번호: ";
	cin >> PhoneN;
	cout << "용돈: ";
	cin >> money;
	menu();
}

void menu() {
	int nInput, STID, count = 1;
	system("cls");
	cout << "\n  [메뉴]" << endl;
	cout << "\n  1. 추가" << endl;
	cout << "\n  2. 검색(학번)" << endl;
	cout << "\n  3. 검색(용돈)\n\n ▶ ";
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
			cout << "더 이상 입력할 수 없습니다." << endl;
			break;
		}
	case 2:
		system("cls");
		cout << "학번을 입력해 주세요: ";
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
			cout << "찾으시는 학번이 없습니다";
			menu();	break;
		}
	case 3:
		BSmoney();
	default:
		cout << "올바른 값을 입력해 주십시오";
		break;
	}
	menu();
}

int main(void) {
	menu();
	return 0;
}
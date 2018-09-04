#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

//2018년 8월 29일 수업

struct Person {
	char name[10];
	int age;
	char address[30];
};

/*typedef struct _Person {
	char name[10];
	int age;
	char address[30];
} Person;*/

/*struct Person {
	char name[10];
	int age;
	char address[30];
} p1;*/

/*struct Person {
	char name[10];
	int age;
	char address[30];
} person1[30];*/

void Class1() {
	//struct Person p1;
	//Person p1;

	/*strcpy(p1.name, "서동영");
	p1.age = 17;
	strcpy(p1.address, "대전 유천동");*/

	//struct Person p1 = { "서동영", 17, "대전 유천동" };
	struct Person *p1 = malloc(sizeof(struct Person));

	strcpy(p1->name, "서동영");
	p1->age = 17;
	strcpy(p1->address, "대전 유천동");

	/*strcpy(person1[0].name, "서동영");
	person1[0].age = 17;
	strcpy(person1[0].address, "대전 유천동");*/



	/*printf("이름 : %s\n", p1.name);
	printf("나이 : %d\n", p1.age);
	printf("%s", p1.address);*/

	printf("이름 : %s\n", p1 ->name);
	printf("나이 : %d\n", p1 ->age);
	printf("%s", p1 ->address);

	//printf("%s\n%d\n%s", person1[0].name, person1[0].age, person1[0].address);

	free(p1);
}

//2018년 9월 4일 수업

struct Data {
	char c1;
	int *numPtr;
};

void Class2()
{
	int num1 = 10;
	struct Data d1;
	struct Data *d2 = malloc(sizeof(struct Data));

	d1.numPtr = &num1;
	d2->numPtr = &num1;

	printf("%d\n", *d1.numPtr);
	printf("%d\n", *d2->numPtr);

	d2->c1 = 'a';
	printf("%c\n", (*d2).c1);
	printf("%d", *(*d2).numPtr);

	free(d2);
}

struct Point2D {
	int x;
	int y;
};

void Class3() {
	struct Point2D p1;
	struct Point2D p2;

	p1.x = 30;
	p1.y = 20;

	p2.x = 60;
	p2.y = 50;

	int a = p2.x - p1.x;
	int b = p2.y - p1.y;

	double c = sqrt((a*a) + (b*b));

	printf("%f", c);
}

int main(void) {
	//Class1();
	//Class2();
	Class3();
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS

#include<string.h>
#include<stdio.h>

struct person {
	char name[20];
	char phone[20];
	char address[40];
};
int main() {
	typedef struct person person;
	printf("�Է��ϼ���.	�̸�	��ȭ��ȣ	�ּ�\n");
	person p1;
	printf("���1 : ");
	scanf("%s %s", p1.name, p1.phone);
	gets(p1.address);

	person p2;
	printf("���2 : ");
	scanf("%s %s", p2.name, p2.phone);
	gets(p2.address);

	person p3;
	printf("���3 : ");
	scanf("%s %s", p3.name, p3.phone);
	gets(p3.address);

	printf("%s %s %s", p1.name, p1.phone, p1.address);
	printf("\n%s %s %s", p2.name, p2.phone, p2.address);
	printf("\n%s %s %s", p3.name, p3.phone, p3.address);

	return 0;
}
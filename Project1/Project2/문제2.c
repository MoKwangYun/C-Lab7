#define _CRT_SECURE_NO_WARNINGS

#include<string.h>
#include<stdio.h>

typedef struct book {
	char name[20];
	char author[20];
	int price;
}book;
void menu();
void add(book* b);
void print(book* b);
void search(book* b);
int cnt = 0;

int main() {
	book b[10];
	int exit = 0;

	do
	{
		menu();

		int num;
		printf("�޴��� �����ϼ���. : ");
		scanf("%d", &num);

		switch (num) {
		case 1:
			printf("���� ������ �Է��ϼ���.\n");

			add(b);
			cnt++;
			break;


		case 2:
			search(b);
			break;


		case 3:
			print(b);
			break;


		case 4:
			exit = 1;
			printf("���α׷��� �����մϴ�.");
			break;

		default:
			printf("�߸��� �Է��Դϴ�.\n");

		}
	} while (exit != 1);
}


void menu() {
	printf("\n***************************\n");
	printf("*	1. ���		  *\n");
	printf("*	2. ���� ����	  *\n");
	printf("*	3. ���� ���	  *\n");
	printf("*	4. ����		  *\n");
	printf("***************************\n");
}
void add(book* b) {
	printf("å �̸� : ");
	scanf("%s", &b[cnt].name);
	printf("���� : ");
	scanf("%s", &b[cnt].author);
	printf("���� : ");
	scanf("%d", &b[cnt].price);
}

void print(book* b) {
	for (int i = 0; i < cnt; i++) {
		printf("%d. %s\n", i + 1, b[i].name);
	}
}

void search(book* b) {
	printf("������ ������ �̸��� �Է��ϼ���. : ");
	char name[20];
	scanf("%s", &name);
	int ex = 0;
	for (int i = 0; i < cnt; i++)
	{
		if (strcmp(name, b[i].name) == 0) {
			printf("å�̸� : %s", b[i].name);
			printf("\n���� : %s", b[i].author);
			printf("\n���� : %d", b[i].price);
			ex = 1;
			break;
		}

	}
	if(ex != 1)
		printf("�ش� å�� �������� �ʽ��ϴ�.");

}
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
		printf("메뉴를 선택하세요. : ");
		scanf("%d", &num);

		switch (num) {
		case 1:
			printf("도서 정보를 입력하세요.\n");

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
			printf("프로그램을 종료합니다.");
			break;

		default:
			printf("잘못된 입력입니다.\n");

		}
	} while (exit != 1);
}


void menu() {
	printf("\n***************************\n");
	printf("*	1. 등록		  *\n");
	printf("*	2. 도서 정보	  *\n");
	printf("*	3. 도서 목록	  *\n");
	printf("*	4. 종료		  *\n");
	printf("***************************\n");
}
void add(book* b) {
	printf("책 이름 : ");
	scanf("%s", &b[cnt].name);
	printf("저자 : ");
	scanf("%s", &b[cnt].author);
	printf("가격 : ");
	scanf("%d", &b[cnt].price);
}

void print(book* b) {
	for (int i = 0; i < cnt; i++) {
		printf("%d. %s\n", i + 1, b[i].name);
	}
}

void search(book* b) {
	printf("열람할 도서의 이름을 입력하세요. : ");
	char name[20];
	scanf("%s", &name);
	int ex = 0;
	for (int i = 0; i < cnt; i++)
	{
		if (strcmp(name, b[i].name) == 0) {
			printf("책이름 : %s", b[i].name);
			printf("\n저자 : %s", b[i].author);
			printf("\n가격 : %d", b[i].price);
			ex = 1;
			break;
		}

	}
	if(ex != 1)
		printf("해당 책이 존재하지 않습니다.");

}
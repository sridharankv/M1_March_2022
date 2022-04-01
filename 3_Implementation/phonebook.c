#include <stdio.h>
#include <string.h>
void menu(void);
void password(void);
void name(void);
void search(void);
void list(void);
void modify(void);
void delete(void);
void exit(void);
void gotoxy(int x,int y){
	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

int main(){
	system("color B");
	password();
	getch();
}


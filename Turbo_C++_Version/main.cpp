/*
This program takes a file and "spits" out its character one at a time with a delay.
This is specifically made to compile only with Turbo C++'s compiler. It won't compile with gcc or any other modern compiler.
*/
#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>

int main()
{
	clrscr();
	FILE *fp;
	fp = fopen("FILE.CPP", "r");
	if(!fp) { cerr << "Can't find the file.\n"; return -1; }
	char c;
	while((c = getc(fp)) != EOF)
	{
		putc(c, stdout);
		delay(10);
	}
	getch();
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main() {
	char n[200];
	int last;
	scanf("%s", n);
	printf("\n----------------------\n");
	last = strlen(n);
	printf("%c", n[last - 1]);
	return 0;
}

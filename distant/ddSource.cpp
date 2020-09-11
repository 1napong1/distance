#include<stdio.h>
int main() {
	char a, b;
	scanf_s("%c\n", &a);
	scanf_s("%c", &b);
	if (a == b || a - b == 32 || b - a == 32) {
		printf("%c' and '%c' are the same character.", a, b);
	}
	else
	{
		printf("TOO DIFFERENCE!!");
	}
}



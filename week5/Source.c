#include<stdio.h>
int main() {
	int x;
	printf("Enter number : ");
	scanf_s("%d", &x);
	for (int i = 0; i < x; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
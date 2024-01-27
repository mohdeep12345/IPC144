#include<stdio.h>
int main() {
	int x;
	printf("Enter your choice: ");
	scanf("%d",&x);
	switch (x) {
	case 1: printf("Hi");
		break;
	case 2: printf("hello");
		break;
	}
	return 0;
}
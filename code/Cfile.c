#include <stdio.h>

void main() {
	int a = 10;
	//int b = a*;
	int *ip;
	ip = &a;
	printf("Hello World\n");
	printf("Conider an integer, %d", a);
	printf("\n TEST: Address stored in ip variable: %x\n", ip);
	printf("\n ACTUAL: Consider a's true location in memory %x", &a);
	
}
#include <stdio.h>

int main() {
	int num1, res1, res2;
	
	printf("Please Input a Number:");
	scanf("%i", &num1);
	
	res1 = num1 % 2;
	res2 = num1 % 3;
	
	if (res1 == 0 && res2 == 0) {
		printf("TRUE");
	} else {
		printf("FALSE");	
	}

	return 0;
	
}

#include <stdio.h>
#include <stdlib.h>
#include "itoa2.h"
int main() {
	char* str = (char*)malloc(50 * sizeof(char));
	int number = 0, m = 0, max = 0;
	printf("Enter the number: ");
	m = scanf("%d", &number);
	itoab(number, str);
	printf("Binary number:\n%s\n", str);
	max = zero_len(str);
	printf("Result: %d\n", max);
	free(str);
	return 0;
}
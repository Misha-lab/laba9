#include "itoa2.h"
#define N 64
void itoab(int num, char s[])
{
	char сс[2] = { '0', '1'};
	int i, j;
	char number_2[N];
	unsigned long temp = num;
	if (temp == 0) {
		s[0] = '0';
		s[1] = '\0';
	}
	else {
		for (i = 0; temp > 0; i++) {
			number_2[i] = сс[temp % 2];
			temp /= 2;
		}
		i--;
		for (j = 0; i >= 0; i--)
			s[j++] = number_2[i];
		s[j] = '\0';
	}
}

int zero_len(char s[]) {
	int j = 0, count = 0, max = 0;
	if (s) {
		for (int i = 0; s[i] != 0; i++) {
			if (s[i] == '0') {
				j = i;
				while (s[j] == '0')
					j++;
			}
			count = j - i;
			if (count > max)
				max = count;
			count = 0;
		}
	}
	return max;
}
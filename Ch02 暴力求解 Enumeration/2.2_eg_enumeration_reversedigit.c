#include <stdio.h>
#include <stdlib.h>

int reverse(int x) {
	int revx = 0;
	while (x) {
		revx *= 10;
		revx += x % 10;
		x /= 10;
	}
	return revx;
}

int main() {
	for (int i = 1000; i <= 9999; i++) {
		if (i * 9 == reverse(i))
			printf("%d\n", i);
	}

	//system("pause");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
	for (int a = 0; a <= 9; a ++){
		for (int b = 0; b <= 9; b ++){
			for (int c = 0; c <= 9; c ++){
				if (100 * a + 110 * b + 12 * c == 532)
					printf("%d %d %d\n", a, b, c);
			}
		}
	}


	system("pause");
	return 0;
}

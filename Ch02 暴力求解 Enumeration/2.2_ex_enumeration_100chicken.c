#include <stdio.h>
#include <stdlib.h>


int main() {
	int n = 300;
	float price = 0.0;
	for (int x = 0; x <= 100; x++) {
		for (int y = 0; y <= 100; y++) {
			price = x * 5 + y * 3 + (100 - x - y) / 3.0;
			if (price <= n)
				printf("x=%d y=%d z=%d price=%.2f\n", x, y, 100 - x - y, price);

		}
	}

	//system("pause");
	return 0;
}


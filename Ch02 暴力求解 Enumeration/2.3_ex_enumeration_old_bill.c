#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int n ; // Input: total number of turkeys
	int x, y, z; //Input: three digits in the middle
	int total_price;
	printf("x y z\n");
	scanf("%d %d %d", &x, &y, &z); //Hint: scanf cannot use characters other than %d
	printf("n\n");
	scanf("%d", &n);

	//printf("x %d y %d z %d n %d\n",x, y, z, n); // This line is to test the error before loop

	for (int left = 1; left <= 9; left++) {
		for (int right = 0; right <= 9; right++) {
			total_price = left * 10000 + x * 1000 + y * 100 + z * 10 + right;
			//printf("%d\n", total_price); //This line tests the error in the inner loop condition where bounds of right are still those of left
			if (total_price % n == 0)
				printf("left: %d right:%d total: %d unit price:%d\n", left, right, total_price, (total_price / n));
		}
	}


	//system("pause");
	return 0;
}

/* Summary
1. Compiling: no secure cycle. no extra letters in scanf. 
2. Copy & Paste:change the variable in inner loop
3. Experience:Use extra lines to locate the eoor
*/
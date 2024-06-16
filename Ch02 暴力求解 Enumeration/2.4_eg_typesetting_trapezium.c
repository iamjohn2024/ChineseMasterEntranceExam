#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //To make true allowed

int main() {
	int h;
	while (scanf("%d", &h) != EOF) { 
		//Outer while loop has nothing to do with the printing. Yet allows several inputs.
		int row = h;
		int column = 3 * h - 2; 
		for (int i = 1; i <= row; i++) {
			for (int j = 1; j <= 2 * (h - i); j++) {
				printf(" ");
			}
			for (int j = 2 * (h - i) + 1; j <= column; j++) {
				printf("*");
			}
			printf("\n");
		}
		
		//break; //Shall be used outside all for loops b/c only the outside loop needs to be broken
	}


	//system("pause");
	return 0;
}
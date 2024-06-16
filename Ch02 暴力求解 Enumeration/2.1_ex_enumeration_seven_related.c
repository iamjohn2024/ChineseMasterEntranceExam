#include <stdio.h>
#include <stdlib.h>
//此处不能引用iostream，否则C和C++代码混合编译会报错

int main() {
	//int n = 21;//2336
	int n;
	printf("输入上限：n = ");
	scanf("%d", &n);
	printf("上限为%d\n", n);
	int sqsum = 0;

	for (int i = 1; i <= n; i++)
	{
		if (i % 10 != 7 && i / 10 != 7 && i % 7 != 0) {
			sqsum += i * i;
			printf("无关的i = %d, 累计平方和sqsum = %d\n", i, sqsum);	
		}	
	}

	//system("pause");
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
//�˴���������iostream������C��C++�����ϱ���ᱨ��

int main() {
	//int n = 21;//2336
	int n;
	printf("�������ޣ�n = ");
	scanf("%d", &n);
	printf("����Ϊ%d\n", n);
	int sqsum = 0;

	for (int i = 1; i <= n; i++)
	{
		if (i % 10 != 7 && i / 10 != 7 && i % 7 != 0) {
			sqsum += i * i;
			printf("�޹ص�i = %d, �ۼ�ƽ����sqsum = %d\n", i, sqsum);	
		}	
	}

	//system("pause");
	return 0;
}


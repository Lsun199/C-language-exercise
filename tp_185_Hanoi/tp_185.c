#include<stdio.h>

int main() {
	long long Hanoi(int n);
	void test();

	/*
	int  n = 0;
	printf("�����к�ŵ��������\n");
	scanf("%d",&n);
	printf("�ƶ�%d����ŵ������Ҫ%d��",n,Hanoi(n));
	*/
	for (int n = 10;n < 64;n++) {
		printf("�ƶ�%d����ŵ������Ҫ%d��\n", n, Hanoi(n));
	}
	test();//����test����

	return 0;
}

long long Hanoi(int n) {
	//int h = 0;
	long long  h = 0;
	if (n == 1)
		h = 1;
	else
		h = 2 * Hanoi(n - 1) + 1;
	return h;
}
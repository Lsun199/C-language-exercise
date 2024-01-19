#include<stdio.h>

int main() {
	long long Hanoi(int n);
	void test();

	/*
	int  n = 0;
	printf("输入有汉诺塔盘数：\n");
	scanf("%d",&n);
	printf("移动%d个汉诺塔盘需要%d次",n,Hanoi(n));
	*/
	for (int n = 10;n < 64;n++) {
		printf("移动%d个汉诺塔盘需要%d次\n", n, Hanoi(n));
	}
	test();//调用test函数

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
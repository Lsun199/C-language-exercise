#include<stdio.h>

long long main(){
	long long Hanoi(long long n);
	
	/*
	int  n = 0;
	printf("�����к�ŵ��������\n");
	scanf("%d",&n);
	printf("�ƶ�%d����ŵ������Ҫ%d��",n,Hanoi(n));
	*/
	for(long long n=10;n<31;n++){
		printf("�ƶ�%d����ŵ������Ҫ%d��\n",n,Hanoi(n));
	}
	
	return 0;
}

long long Hanoi(long long n ){
	//int h = 0;
	long long  h = 0; 
	if(n == 1) 
		h = 1;
	else
		h = 2 * Hanoi(n-1) + 1;
	return h;
}

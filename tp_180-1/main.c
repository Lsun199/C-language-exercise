#include <stdio.h>
#include <stdlib.h>


int main() {
	int max4(int a, int b, int c, int d);
	
	int a,b,c,d,max;
	printf("����4�����֣�\n");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	max = max4(a,b,c,d);
	printf("max = %d",max); //��ӡ��� 
	
	return 0; 
}


#include <stdio.h>
#include <stdlib.h>


int main() {
	int max4(int a, int b, int c, int d);
	
	int a,b,c,d,max;
	printf("输入4个数字：\n");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	max = max4(a,b,c,d);
	printf("max = %d",max); //打印输出 
	
	return 0; 
}


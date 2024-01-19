#include<stdio.h>

int main(){
	int max4(int a, int b, int c, int d); //声明一个最大值函数max4()
 	
	int a,b,c,d;
	int max=0;
	printf("输入4个数：\n");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	/*
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	*/
	max=max4(a,b,c,d);
	printf("%d",max);
	return 0;
		
}
	
	int max4(int a, int b, int c, int d){
		int max2(int a, int b); //声明一个最大值函数max2()
		
		int m =0;
		 m = max2(m,a);   //调用函数max2() 
		 m = max2(m,b);
		 m = max2(m,c);
		 m = max2(m,d);
		 return m;
	}
	
	//定义函数max2() 
	int max2(int a, int b){ 
		if(a>=b) 
			return a;
		else 
			return b;
	}
	
 

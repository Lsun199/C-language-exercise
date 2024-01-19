#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	void sort(int a[],int n);
	void sort1(int *x,int n);
	
	int a[5]={0};
	printf("Enter the array with 5 numbers:\n");
	for(int i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	
	printf("原数组是：\n");
	for(int i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	
	printf("\n");
	printf("排序之后的数组是：\n");
	//sort(a,5);
	sort(a,5);
	for(int i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	
	return 0;
}

void sort(int a[],int n){
	int i,j,k,tem;
	for(i=0;i<n-1;i++){
		k = i;
		for(j=i+1;j<n;j++)
			if(a[j] > a[k]) k=j;
			if(k != i){
				tem = a[i];
				a[i] = a[k];
				a[k] = tem;
			}
	}
	
}

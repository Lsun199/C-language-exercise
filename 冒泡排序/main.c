#include <stdio.h>
#include <stdlib.h>


//int max2min(int x,int y);
//int min2max(int x,int y);

int main() {
	int a[10]={0};
//	int m = 0;
//	int n = 0;
	int t = 0;
	
	printf("input 10 numbers :");//ÊäÈëÊı×é(array) 
	for(int i=0;i<10;i++){
		scanf("%d\n",&a[i]);
	}
	printf("\n");
	
	for(int j=0;j<9;j++){
		for(int i=0;i<9-j;i++){ 
		if(a[i]<a[i+1]){
			t = a[i];
			a[i] = a[i+1];
			a[i+1] = t;
		}
		}
	} 
		
	printf("the sorted numbers:\n");
		for(int i=0;i<10;i++){
			printf("%d ",a[i]);
		}
        printf("\n");
	
// 	max2min(m,n);
//  min2max(m,n);
    
	return 0;
}

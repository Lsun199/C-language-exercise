#include<stdio.h>
#include<math.h>

void main_P_132();
void main_P_133();
void main_while();

int main(){
	int n,i,k;
	printf("输入一个整数n:");
	scanf("%d",&n);
	k = sqrt(n);
	
	main_P_132();
	printf("==================\n") ;
	main_P_133();
	printf("==================\n");
	main_while();
	
	return 0;
} 

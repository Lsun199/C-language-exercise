void main_P_133(){
	int n,i,k;
	printf("输入一个整数n:");
	scanf("%d",&n);
	k = sqrt(n);
	for(i = 2; i<=k;i++){
		if(n%i == 0) 
			break;
	}
	if(i<=k) 
		printf("%d 不是素数",n);
	else 
		printf("%d 是素数",n); 
}

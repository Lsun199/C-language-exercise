void main_P_132(){
	int n,i;
	printf("输入一个整数n:");
	scanf("%d",&n);
	for(i=2; i<n; i++){
	if(n%i == 0)
		break;
	}
		
		if(i<n) printf("%d不是素数(prime)",n);
		else    printf("%d 是素数",n); 
}

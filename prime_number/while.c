void main_while(){
	int n;
	int i =2;
	
	printf("输入一个整数n:");
	scanf("%d",&n);
	
	while(i<n){
		i += 1;
		if(n%i == 0) break;
	}
	
	if(i<n) printf("%d不是素数(prime)",n);
	else    printf("%d 是素数",n); 
	
}

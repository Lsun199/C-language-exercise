void main_while(){
	int n;
	int i =2;
	
	printf("����һ������n:");
	scanf("%d",&n);
	
	while(i<n){
		i += 1;
		if(n%i == 0) break;
	}
	
	if(i<n) printf("%d��������(prime)",n);
	else    printf("%d ������",n); 
	
}

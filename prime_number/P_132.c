void main_P_132(){
	int n,i;
	printf("����һ������n:");
	scanf("%d",&n);
	for(i=2; i<n; i++){
	if(n%i == 0)
		break;
	}
		
		if(i<n) printf("%d��������(prime)",n);
		else    printf("%d ������",n); 
}

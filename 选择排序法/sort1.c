void sort1(int *x,int n){
	
	int *i, *j, *p, t;
	for(i=x;i<x+n-1;i++){
		p = i;
		for(j=i+1;j<x+n;j++){
			if(*j > *p)  p = j;
		}
		if(p != i){
			t = *i;
			*i = *p;
			*p = t;
		}
	}
} 

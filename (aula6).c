#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a, b, c, r;
	
	printf("etre com os valore para A B C:");
	scanf("%d %d %d", &a, &b, &c);
	
	
	if(a>b){
		r = a;
	}else{
		r = b;
	}
		
	
	
	if(c>r){
		r = c;
	}
	
	
	printf("%d eh o maior", r);
	
	
	//par impar
	int n;
	
	printf("par e inpar");
	scanf("%d",&n);
	
	if(n%2 == 0) printf("par"); else printf("inpar");
	
	
	
	
	return 0;
}

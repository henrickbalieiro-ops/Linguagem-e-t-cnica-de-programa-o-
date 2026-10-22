#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char palavra [30];
	int i, j, palindromo;
	
	scanf("%s", &palavra);
	printf("inserido:  %s", palavra);
	printf("\n");

	for(i=0; i<30 && palavra[i] != '\0'; i++);
	for(j=i-1, i=0; i<j; i++, j--){
		if(palavra[i] == palavra[j])palindromo = 1;
		else palindromo = 0;
		printf("\n%d | %d", i,j);
		
	}
	if(palindromo) printf("eh palindromo");
	else("nao eh palindromo");

	
	return 0;
}

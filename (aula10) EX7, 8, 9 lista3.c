#include <stdio.h>
#include <stdlib.h>

float calc_inss (float salario){                   //escopo

	if(salario<=1412.00) return salario*0.075;
	else if (salario<=2666.68) return salario*0.09;
	else if (salario<=4000.00) return salario*0.12;
	else return salario *0.14;	

}

float calc_irpf (float desconto){
	//salario*liquota-deducao
	
	if (desconto>=2259.21 && <=2826.65) return desconto*0.075-169.44;
	else if (desconto>=2826.66 && <=3751.06) return desconto*0.15-381.44;
	else if (desconto>=3751.07 && <=4664.68) return desconto*0.22-662.77;
	else return (desconto>=4664.68)return desconto*0.27-896.00;
	
}
	
int main(int argc, char *argv[]) {
	
	float salario, desconto;
	scanf("%f", &salario);
	
	desconto = calc_inss(salario);
	printf("%f || %f", desconto, calc_inss(salario));
	
	
	return 0;
}

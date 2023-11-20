# include <stdio.h>

int fatorial(int n)
{
	if (n == 0){return 1;}
	else {return n*fatorial(n-1);}	
}

int potencia (int base, int expoente)

{
	if (expoente == 0){return 1;}
	return base * potencia(base, expoente-1);
		
}


int main (void)
{
	printf("Fatorial: %d\n", fatorial(5));
	printf("Potenciacao: %d\n", potencia(2,10));


	return 0;
}

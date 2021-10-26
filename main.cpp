#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int num = 0, escolha = 0, qtd = 0;
	srand (time(0));
	num = rand() % 10;  // Escolhido pelo computador (aleatório)
	printf(" === VOCÊ TEM 3 TENTATIVAS === \n\n");
	
do{
	qtd++;
		printf(" Faça sua %iª tentativa, digite um número (0-10): ", qtd);
	scanf("%i", &escolha);
	
	if (escolha<num){
		printf("\n Número muito baixo... Escolha outro!\n\n");
	}
		if (escolha>num){
		printf("\n Número muito alto... Escolha outro!\n\n");
	}
		
}
		while(num!=escolha && qtd<3);	// Repetir a execuçãoo novamente
	if (escolha==num) {
		printf("\n\n PARABÉNS!!! Você acertou em %i vezes.\n\n\n", qtd);
	} else {
		printf("\n === GAME OVER ===\n");
		printf(" Você não conseguiu em 3 tentativas!\n\n");
			printf("NÚMERO SORTEADO: %i \n\n\n", num);
}
		system("pause");
		return 0;
}

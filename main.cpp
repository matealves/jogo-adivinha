#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int num = 0, escolha = 0, qtd = 0;
	srand (time(0));
	num = rand() % 10;  // Escolhido pelo computador (aleat�rio)
	printf(" === VOC� TEM 3 TENTATIVAS === \n\n");
	
do{
	qtd++;
		printf(" Fa�a sua %i� tentativa, digite um n�mero (0-10): ", qtd);
	scanf("%i", &escolha);
	
	if (escolha<num){
		printf("\n N�mero muito baixo... Escolha outro!\n\n");
	}
		if (escolha>num){
		printf("\n N�mero muito alto... Escolha outro!\n\n");
	}
		
}
		while(num!=escolha && qtd<3);	// Repetir a execu��oo novamente
	if (escolha==num) {
		printf("\n\n PARAB�NS!!! Voc� acertou em %i vezes.\n\n\n", qtd);
	} else {
		printf("\n === GAME OVER ===\n");
		printf(" Voc� n�o conseguiu em 3 tentativas!\n\n");
			printf("N�MERO SORTEADO: %i \n\n\n", num);
}
		system("pause");
		return 0;
}

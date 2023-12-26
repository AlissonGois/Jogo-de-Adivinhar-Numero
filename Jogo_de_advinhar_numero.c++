#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

main()
{	setlocale(LC_ALL, "portuguese");	
	
	int qual, i, n, vet[100], inicio, fim, meio, pense, qtd1=0, qtd2=0,end=0;

//Vez do usuário adivinhar.
printf("\t\t\t\t\t\tTENTE ADIVINHAR O NÚMERO!");
printf("\n\t\t\t\t\t\t     (VEZ DO USUÁRIO)");
	
//inicialização do programa.
srand(time(NULL));
for(i=0;i<1;i++)
	qual=rand()%100;

//Leitura do valor N.
while ((!end)&&((n>0)||(n<100)))
	{	printf("\n\nDigite um número entre 0 e 100:\n");
		scanf("%d", &n);
		
//Busca sequencial.
	if ((n<0)||(n>100))
		{	printf("\n\n\t   ERRO!");
			printf("\nSomente números entre 0 e 100!");
		}
		else if(qual==n)
		{	printf("\n\nVOCÊ ACERTOU O NÚMERO!");
			end=1;
		}
		else if(qual>n)
		{	printf("\n\nVOCÊ ERROU O NÚMERO, TENTE NOVAMENTE!");
			printf("\nDICA: NUMERO É MAIOR!");
		}
		else
		{	printf("\n\nVOCÊ ERROU O NÚMERO, TENTE NOVAMENTE!");
			printf("\nDICA: NUMERO É MENOR!");
		}
	qtd1++;
	i++;
	}
	
//exibir o resultado de chutes.
	if(end)
	{	printf("\n\nNúmero escolhido era %d", qual);
		printf("\n\nQuantidades de tentativas do USUÁRIO: %d", qtd1);
		printf("\n------------------------------------------------------------------------------------\n\n\n");
	}
	
//Vez do Computador Adivinhar.
printf("\n\t\t\t\t\t\tTENTE ADIVINHAR O NÚMERO!");
printf("\n\t\t\t\t\t\t   (VEZ DO Computador)");

//Pensar em um número.
printf("\n\n\t\t\tPense em um número!");
printf("\n\n\t\t\tJá pensou ?");


//inicialização do programa.
for(i=0;i<100;i++)
	vet[i]=i;
	
//Mecanismo binário.
end=0;
inicio==0;
fim=99;
meio=(inicio+fim)/2;

while (!end)
	{	
		printf("\n\n\tO número que está pensando é %d ?\n", meio);
		printf("\n\tSe o valor está de acordo tecle..[0]");
		printf("\n\tSe o valor for menor tecle.......[1]");
		printf("\n\tSe o valor for maior tecle.......[2]");
		printf("\n\tDigite um dos valores acima:\n");
		scanf("%d", &pense);
		
		if(pense==0)
		{	end=1;
			printf("\n\nAcertou!");
		}
		else if(pense==1)
		{	fim=meio-1;
			printf("\n\nNão é esse número.\n");
			printf("Dica: o número é menor.");
		}
		else if(pense==2)
		{	inicio= meio+1;
			printf("\n\nNão é esse número.\n");
			printf("Dica: o número é maior.");
		}
		else 
		{	printf("\n\n\t   ERRO!");
			printf("\nNÚMERO DESCONHECIDO, TENTE NOVAMENTE!");
		}
		qtd2++;
		meio = (inicio+fim)/2;		
	}
	
//exibir o resultado de chutes.
		printf("\n\nQuantidade de tentativas do COMPUTADOR: %d",qtd2);
		
//Exibir o ganhador.
	printf("\n------------------------------------------------------------------------------------");
	printf("\n\n\t GANHADOR DA PARTIDA");
		if(qtd1==qtd2)
			printf("\n\nEmpate!");
		else if (qtd1<qtd2)
			printf("\n\nO ganhador foi o USUÁRIO com %d tentativas.", qtd1);
		else
			printf("\n\nO ganhador foi o COMPUTADOR com %d tentativas.", qtd2);
	
}
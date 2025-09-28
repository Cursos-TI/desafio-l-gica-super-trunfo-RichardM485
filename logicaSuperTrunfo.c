#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Nível Aventureiro

int main() {

    char estado1, estado2;
    char codigodacarta1[4], codigodacarta2[4];
    char nomecidade1[50], nomecidade2[50];
    unsigned long int pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    int numpontosturisticos1, numpontosturisticos2;
    float densidadepop1, densidadepop2;
    float pibpcap1, pibpcap2;
    float Superpoder1, Superpoder2;
    int ponto1 = 0, ponto2 = 0;
    int jogador;
    //Variáveis criadas para o scrip

    printf("Bem vindo ao cadastro de cartas do jogo SuperTrunfo\n");
    printf("Vamos começar cadastrando 2 cartas para o jogo, por favor insira os valores: \n");
    //Apresentação do programa/inicialização.

    printf("\nCARTA 1! \n");
    printf("Escreva uma letra de 'A' até 'H' para sua carta: ");
    scanf(" %c", &estado1);
    //O scrip vai ler e gravar a letra enviada pelo usuário.

    printf("Escreva o código que esta carta irá ter, usando a letra escolhida anteriormente mais uma combinação de número de '01'a'04': ");
    scanf("%s", codigodacarta1);
    //O scrip vai ler e gravar a combinação enviada pelo usuário.

    while (getchar() != '\n');
    printf("Escreva o nome da cidade: "); 
    fgets( nomecidade1, 50, stdin);
    nomecidade1[strcspn(nomecidade1, "\n")] = '\0';
    //Essa parte do scrip serve para que o usuario consiga inserir nomes de cidades compostos.
    //O while zera o buffer, pois é necessario para que o fgets funcione corretamente, a linha abaixo
    //serve para que a variavel "nomecidade1" fique armazenada corretamente, pois sem essa linha de codigo
    //quando tentamos escrever no terminal, ela pula grandes espaços de texto.

    printf("Informe a população da cidade: ");
    scanf("%lu", &pop1);
    //O scrip vai ler e gravar o pop enviada pelo usuário.

    printf("Informe a área em Km² desta cidade: ");
    scanf("%f", &area1);
    //O scrip vai ler e gravar a area da cidade.

    printf("Escreva o PIB desta cidade: ");
    scanf("%f", &pib1);
    //O scrip vai ler e gravar o valor de PIB que essa cidade possui.

    printf("Escreva quantos pontos turísticos tem essa cidade: ");
    scanf("%d", &numpontosturisticos1);
    //O scrip vai ler e gravar a quantidade dos pontos.

    pibpcap1 = pib1 / pop1;
    densidadepop1 = pop1 / area1;
    Superpoder1 = pop1 + area1 + pib1 + numpontosturisticos1 + (1/densidadepop1) + pibpcap1;
    //O scrip vai efetuar os calculos de densidade populacional,PIB per capita e super poder da carta 1.
    //vale lembrar que se o usuário inserir 0 na população ou na area o programa irá quebrar,
    //mas como foi solicitado para não fazer validações, tive que deixar assim.
        
    //Primeira carta finalizada indo para a carta 2.

    printf("\nCARTA 2!: \n");
    printf("Escreva uma letra de 'A' até 'H' para sua carta: ");
    scanf(" %c", &estado2);
    //O scrip vai ler e gravar a letra enviada pelo usuário.

    printf("Escreva o código que esta carta irá ter, usando a letra escolhida anteriormente mais uma combinação de número de '01'a'04': ");
    scanf("%s", codigodacarta2);
    //O scrip vai ler e gravar a combinação enviada pelo usuário.

    while (getchar() != '\n');
    printf("Escreva o nome da cidade: "); 
    fgets( nomecidade2, 50, stdin);
    nomecidade2[strcspn(nomecidade2, "\n")] = '\0';
    //Essa parte do scrip serve para que o usuario consiga inserir nomes de cidades compostos.
    //O while zera o buffer, pois é necessario para que o fgets funcione corretamente, a linha abaixo
    //serve para que a variavel "nomecidade2" fique armazenada corretamente, pois sem essa linha de codigo
    //quando tentamos escrever no terminal, ela pula grandes espaços de texto.

    printf("Informe a população da cidade: ");
    scanf("%lu", &pop2);
    //O scrip vai ler e gravar o pop enviada pelo usuário.

    printf("Informe a área em Km² desta cidade: ");
    scanf("%f", &area2);
    //O scrip vai ler e gravar a area da cidade.

    printf("Escreva o PIB desta cidade: ");
    scanf("%f", &pib2);
    //O scrip vai ler e gravar o valor de PIB que essa cidade possui.    

    printf("Escreva quantos pontos turísticos tem essa cidade: ");
    scanf("%d", &numpontosturisticos2);
    //O scrip vai ler e gravar a quantidade dos pontos.

    pibpcap2 = pib2 / pop2;
    densidadepop2 = pop2 / area2;
    Superpoder2 = pop2 + area2 + pib2 + numpontosturisticos2 + (1/densidadepop2) + pibpcap2;
    //O scrip vai efetuar os calculos de densidade populacional,PIB per capita e super poder da carta 2.
    //vale lembrar que se o usuário inserir 0 na população ou na area o programa irá quebrar,
    //mas como foi solicitado para não fazer validações, tive que deixar assim.

    //Resultados compilados.
    printf("\n----------------------------------------------------------------------\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigodacarta1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População: %lu\n", pop1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numpontosturisticos1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidadepop1);
    printf("PIB per Capita: %.2f reais\n", pibpcap1);

    printf("\n----------------------------------------------------------------------\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigodacarta2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %lu\n", pop2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numpontosturisticos2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidadepop2);
    printf("PIB per Capita: %.2f reais\n", pibpcap2);

    printf("\n----------------------------------------------------------------------\n");
    printf("Com todos os dados em mão, escolha qual atributo você deseja comparar entre as cartas.\n");
    printf("O resultado da comparação que irá definir quem ganha ou perde o jogo.\n");
    printf("Escolha dentre algumas das opções:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Superpoder\n");
    printf("\n----------------------------------------------------------------------\n");
    printf("Atributo escolhido: ");
    scanf("%d", &jogador);

    switch (jogador){
    case 1:
        printf("\n----------------------------------------------------------------------\n");
        printf("A carta que possui a maior população vence:\n");
        printf("Carta 1: %s (%s) População: %lu\n", nomecidade1, codigodacarta1, pop1);
        printf("Carta 2: %s (%s) População: %lu\n", nomecidade2, codigodacarta2, pop2);
        if (pop1 == pop2){
            printf("Empate, ninguem pontuou\n");
        } else{
            if (pop1 > pop2){
                printf("Carta 1: Pontuou\n");
                ponto1++;
            }else{
                printf("Carta 2: Pontuou\n");
                ponto2++;
            }
        }
    break;
    case 2:
        printf("----------------------------------------------------------------------\n");
        printf("A carta que possui a maior área vence:\n");
        printf("Carta 1: %s (%s) Área: %.2f Km²\n", nomecidade1, codigodacarta1, area1);
        printf("Carta 2: %s (%s) Área: %.2f Km²\n", nomecidade2, codigodacarta2, area2);
        if (area1 == area2){
            printf("Empate, ninguem pontuou\n");
        } else{
            if (area1 > area2){
                printf("Carta 1: Pontuou\n");
                ponto1++;
            }else{
                printf("Carta 2: Pontuou\n");
                ponto2++;
            }
        }
    break;
    case 3:
        printf("----------------------------------------------------------------------\n");
        printf("A carta que possui o maior PIB vence:\n");
        printf("Carta 1: %s (%s) PIB: %.2f\n", nomecidade1, codigodacarta1, pib1);
        printf("Carta 2: %s (%s) PIB: %.2f\n", nomecidade2, codigodacarta2, pib2);
        if (pib1 == pib2){
            printf("Empate, ninguem pontuou\n");
        } else{
            if (pib1 > pib2){
                printf("Carta 1: Pontuou\n");
                ponto1++;
            }else{
                printf("Carta 2: Pontuou\n");
                ponto2++;
            }
        }
    break;
    case 4:
        printf("----------------------------------------------------------------------\n");
        printf("A carta que possui o maior número de pontos turísticos vence:\n");
        printf("Carta 1: %s (%s) Número de Pontos Turísticos: %d\n", nomecidade1, codigodacarta1, numpontosturisticos1);
        printf("Carta 2: %s (%s) Número de Pontos Turísticos: %d\n", nomecidade2, codigodacarta2, numpontosturisticos2);
        if (numpontosturisticos1 == numpontosturisticos2){
            printf("Empate, ninguem pontuou\n");
        } else{
            if (numpontosturisticos1 > numpontosturisticos2){
                printf("Carta 1: Pontuou\n");
                ponto1++;
            }else{
                printf("Carta 2: Pontuou\n");
                ponto2++;
            }
        }
    break;
    case 5:
        printf("----------------------------------------------------------------------\n");
        printf("A carta que possui a menor densidade populacional vence:\n"); 
        printf("Carta 1: %s (%s) Densidade Populacional: %.2f hab/Km²\n", nomecidade1, codigodacarta1, densidadepop1);
        printf("Carta 2: %s (%s) Densidade Populacional: %.2f hab/Km²\n", nomecidade2, codigodacarta2, densidadepop2);
        if (densidadepop1 == densidadepop2){
            printf("Empate, ninguem pontuou\n");
        } else{
            if (densidadepop1 < densidadepop2){
                printf("Carta 1: Pontuou\n");
                ponto1++;
            }else{
                printf("Carta 2: Pontuou\n");
                ponto2++;
            }
        }
    break;
    case 6:
        printf("----------------------------------------------------------------------\n");
        printf("A carta que possui o maior PIB per capita vence:\n");
        printf("Carta 1: %s (%s) PIB per Capita: %.2f reais\n", nomecidade1, codigodacarta1, pibpcap1);
        printf("Carta 2: %s (%s) PIB per Capita: %.2f reais\n", nomecidade2, codigodacarta2, pibpcap2);
        if (pibpcap1 == pibpcap2){
            printf("Empate, ninguem pontuou\n");
        } else{
            if (pibpcap1 > pibpcap2){
                printf("Carta 1: Pontuou\n");
                ponto1++;
            }else{
                printf("Carta 2: Pontuou\n");
                ponto2++;
            }
        }
    break;
    case 7:
        printf("----------------------------------------------------------------------\n");
        printf("A carta que possui o maior Superpoder vence:\n"); 
        printf("Carta 1: %s (%s) SuperPoder: %.2f\n", nomecidade1, codigodacarta1, Superpoder1);
        printf("Carta 2: %s (%s) SuperPoder: %.2f\n", nomecidade2, codigodacarta2, Superpoder2);
        if (Superpoder1 == Superpoder2){
            printf("Empate, ninguem pontuou\n");
        } else{
            if (Superpoder1 > Superpoder2){
                printf("Carta 1: Pontuou\n");
                ponto1++;
            }else{
                printf("Carta 2: Pontuou\n");
                ponto2++;
            }
        }
    break;
    default:
        printf("Opção inválida\n");
        return 0;
    }

    printf("----------------------------------------------------------------------\n");
    printf("A carta que possuir o maior numero de pontos no final de todas as rodadas ganhará:\n");
    printf("A carta 1 ficou com: %d pts\n", ponto1);
    printf("A carta 2 ficou com: %d pts\n", ponto2);
    printf("A carta que ganhou o jogo do SuperTrunfo foi:\n");
    if (ponto1 == ponto2){
        printf("Empate, ninguem ganhou o jogo!\n");
    } else{
        if (ponto1 > ponto2){
            printf("Carta 1: %s (%s)\n", nomecidade1, codigodacarta1);
        }else{
            printf("Carta 2: %s (%s)\n", nomecidade2, codigodacarta2);
        }
    }
    printf("----------------------------------------------------------------------\n");

    return 0;
}

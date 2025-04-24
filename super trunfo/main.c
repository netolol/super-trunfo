#include <stdio.h>

int main() {
    // Declaração dos dados das cartas (nome e atributos)
    char nome1[30] = "Dragao";
    int forca1 = 80;
    int velocidade1 = 70;
    int inteligencia1 = 60;

    char nome2[30] = "Fenix";
    int forca2 = 75;
    int velocidade2 = 85;
    int inteligencia2 = 65;

    // Variáveis auxiliares para controle do menu e comparações
    int opcao, escolha, escolha1, escolha2;
    int valor1, valor2, soma1, soma2;

    // Estrutura de repetição do menu principal
    do {
        // Exibe as opções do jogo
        printf("\n===== SUPER TRUNFO SIMPLES =====\n");
        printf("1. Mostrar Cartas\n");
        printf("2. Comparar um atributo (if/else)\n");
        printf("3. Comparar atributo (switch)\n");
        printf("4. Comparar dois atributos (ternario)\n");
        printf("0. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        // Opção para exibir os atributos das cartas
        if (opcao == 1) {
            printf("\nCarta 1: %s | Forca: %d | Velocidade: %d | Inteligencia: %d\n", nome1, forca1, velocidade1, inteligencia1);
            printf("Carta 2: %s | Forca: %d | Velocidade: %d | Inteligencia: %d\n", nome2, forca2, velocidade2, inteligencia2);
        }

        // Desafio 1: Comparar um único atributo usando if/else
        else if (opcao == 2) {
            printf("\nComparar qual atributo? 1-Forca 2-Velocidade 3-Inteligencia: ");
            scanf("%d", &escolha);

            // Comparação de Força
            if (escolha == 1) {
                if (forca1 > forca2)
                    printf("Ganhou: %s\n", nome1);
                else if (forca2 > forca1)
                    printf("Ganhou: %s\n", nome2);
                else
                    printf("Empate!\n");
            }
            // Comparação de Velocidade
            else if (escolha == 2) {
                if (velocidade1 > velocidade2)
                    printf("Ganhou: %s\n", nome1);
                else if (velocidade2 > velocidade1)
                    printf("Ganhou: %s\n", nome2);
                else
                    printf("Empate!\n");
            }
            // Comparação de Inteligência
            else if (escolha == 3) {
                if (inteligencia1 > inteligencia2)
                    printf("Ganhou: %s\n", nome1);
                else if (inteligencia2 > inteligencia1)
                    printf("Ganhou: %s\n", nome2);
                else
                    printf("Empate!\n");
            }
            else {
                printf("Opcao invalida!\n");
            }
        }

        // Desafio 2: Comparar um atributo usando switch
        else if (opcao == 3) {
            printf("\nComparar qual atributo? 1-Forca 2-Velocidade 3-Inteligencia: ");
            scanf("%d", &escolha);

            switch (escolha) {
                case 1:
                    if (forca1 > forca2)
                        printf("Ganhou: %s\n", nome1);
                    else if (forca2 > forca1)
                        printf("Ganhou: %s\n", nome2);
                    else
                        printf("Empate!\n");
                    break;
                case 2:
                    if (velocidade1 > velocidade2)
                        printf("Ganhou: %s\n", nome1);
                    else if (velocidade2 > velocidade1)
                        printf("Ganhou: %s\n", nome2);
                    else
                        printf("Empate!\n");
                    break;
                case 3:
                    if (inteligencia1 > inteligencia2)
                        printf("Ganhou: %s\n", nome1);
                    else if (inteligencia2 > inteligencia1)
                        printf("Ganhou: %s\n", nome2);
                    else
                        printf("Empate!\n");
                    break;
                default:
                    printf("Opcao invalida!\n");
            }
        }

        // Desafio 3: Comparar dois atributos usando operador ternário
        else if (opcao == 4) {
            // O usuário escolhe dois atributos
            printf("\nEscolha primeiro atributo (1-Forca 2-Velocidade 3-Inteligencia): ");
            scanf("%d", &escolha1);
            printf("Escolha segundo atributo (1-Forca 2-Velocidade 3-Inteligencia): ");
            scanf("%d", &escolha2);

            // Atribui os valores dos atributos escolhidos para cada carta usando ternário
            valor1 = (escolha1 == 1) ? forca1 : (escolha1 == 2) ? velocidade1 : inteligencia1;
            valor2 = (escolha1 == 1) ? forca2 : (escolha1 == 2) ? velocidade2 : inteligencia2;

            soma1 = valor1;
            soma2 = valor2;

            valor1 = (escolha2 == 1) ? forca1 : (escolha2 == 2) ? velocidade1 : inteligencia1;
            valor2 = (escolha2 == 1) ? forca2 : (escolha2 == 2) ? velocidade2 : inteligencia2;

            // Soma os dois atributos escolhidos para cada carta
            soma1 += valor1;
            soma2 += valor2;

            // Mostra os resultados
            printf("\nResultado: %s = %d | %s = %d\n", nome1, soma1, nome2, soma2);

            // Define o vencedor usando operador ternário
            (soma1 > soma2) ? printf("Ganhou: %s\n", nome1) :
            (soma2 > soma1) ? printf("Ganhou: %s\n", nome2) :
            printf("Empate!\n");
        }

        // Sai do jogo
        else if (opcao == 0) {
            printf("Saindo...\n");
        }

        // Caso o jogador escolha uma opção inválida
        else {
            printf("Opcao invalida!\n");
        }

    } while(opcao != 0); // Repete até o jogador escolher sair

    return 0;
}

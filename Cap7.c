#include <stdio.h>
#include <math.h>
#define ex3

#ifdef ex1
/*Escreva um programa que tem uma estrutura da dados com os membros abaixo.
    Receba dados via teclado e imprima estes conteudos no video no seguinte
    formato.
             char, int, long, float, double
             unsigned char, unsigned int, unsigned long,

            10        20        30        40        50        60        70
    1234567890123456789012345678901234567890123456789012345678901234567890
        char      int       long                float               double
              unsigned char       unsigned int        unsigned long*/
    struct entrada{
        char a;
        int b;
        long c;
        float d;
        double e;
        unsigned char f;
        unsigned int g;
        unsigned long h;
    };
    main()
    {
        struct entrada dados;
        char resp;

        for(;;)
        {
            printf("Digite um valor para char\n");
            scanf("%c",&dados.a);

            printf("Digite um valor para int\n");
            scanf("%d",&dados.b);

            printf("Digite um valor para long\n");
            scanf("%ld",&dados.c);

            printf("Digite um valor para float\n");
            scanf("%f",&dados.d);

            printf("Digite um valor para double\n");
            scanf("%lf",&dados.e);

            printf("Digite um valor para unsigned char\n");
            scanf("%u",&dados.f);
            getchar();

            printf("Digite um valor para unsigned int\n");
            scanf("%hu",&dados.g);

            printf("Digite um valor para unsigned long\n");
            scanf("%u",&dados.h);


            printf("        10        20        30        40        50        60        70\n");
            printf("1234567890123456789012345678901234567890123456789012345678901234567890\n");
          //printf("    -128      -32768    -2000000000         -3.4e-038           -1.7e-308");
          //printf("          255                 65535               4294967295");
            printf("    %-4c      %-6d    %-11ld         %-9.1e           %-9.1e\n",dados.a,dados.b,dados.c,dados.d,dados.e);
            printf("          %-3u                 %-5u               %-10u",dados.f,dados.g,dados.h);


            getchar();
            printf("\n\nDeseja rodar o progama novamente? S/N");
            resp = getchar();
            getchar();
            if(resp =='N' || resp == 'n')
            {
                break;
            }
        }
    }
#endif // ex1

#ifdef ex2
/*Escreva um programa com a estrutura abaixo. Defina um vetor de estruturas
    de 4 elementos. Receba os dados pelo teclado e imprima-os no video. Faça um
    menu. (vetor de estruturas)
		nome, end, cidade, estado, cep*/
    struct estrutura
    {
        char nome[20];
        char end[30];
        char cidade [20];
        char estado[3];
        char cep[9];
    };
    main()
    {
        int resp, var = 1;
        struct estrutura dados[4];
        for(;;)
        {
            printf("\t\tMENU\n");
            printf("1 - Inserir Dados\n");
            printf("2 - Mostrar dados\n");
            printf("3 - Sair\n");
            scanf("%d",&resp);
            getchar();
            system("cls");
            switch(resp)
            {
            case 1:
                {
                    if(var == 5){
                        var = 1;
                    }
                    switch(var)
                    {
                    case 1:
                        {
                            printf("Digite o nome da pessoa %d\n",var);
                            gets(dados[0].nome);


                            printf("Digite o endereco da pessoa %d\n", var);
                            gets(dados[0].end);


                            printf("Digite a cidade da pessoa %d\n", var);
                            gets(dados[0].cidade);


                            printf("Digite o estado da pessoa %d\n",var);
                            gets(dados[0].estado);

                            printf("Digite o CEP da pessoa %d\n", var);
                            gets(dados[0].cep);

                            var++;
                            system("cls");
                            break;
                        }
                    case 2:
                        {
                            printf("Digite o nome da pessoa %d\n",var);
                            gets(dados[1].nome);


                            printf("Digite o endereco da pessoa %d\n", var);
                            gets(dados[1].end);


                            printf("Digite a cidade da pessoa %d\n", var);
                            gets(dados[1].cidade);


                            printf("Digite o estado da pessoa %d\n",var);
                            gets(dados[1].estado);

                            printf("Digite o CEP da pessoa %d\n", var);
                            gets(dados[1].cep);

                            var++;
                            system("cls");
                            break;
                        }
                    case 3:
                        {
                            printf("Digite o nome da pessoa %d\n",var);
                            gets(dados[2].nome);


                            printf("Digite o endereco da pessoa %d\n", var);
                            gets(dados[2].end);


                            printf("Digite a cidade da pessoa %d\n", var);
                            gets(dados[2].cidade);


                            printf("Digite o estado da pessoa %d\n",var);
                            gets(dados[2].estado);

                            printf("Digite o CEP da pessoa %d\n", var);
                            gets(dados[2].cep);

                            var++;
                            system("cls");
                            break;
                        }
                    case 4:
                        {
                            printf("Digite o nome da pessoa %d\n",var);
                            gets(dados[3].nome);


                            printf("Digite o endereco da pessoa %d\n", var);
                            gets(dados[3].end);


                            printf("Digite a cidade da pessoa %d\n", var);
                            gets(dados[3].cidade);


                            printf("Digite o estado da pessoa %d\n",var);
                            gets(dados[3].estado);

                            printf("Digite o CEP da pessoa %d\n", var);
                            gets(dados[3].cep);

                            var++;
                            system("cls");
                            break;
                        }
                    default:
                        {
                            printf("erro\n");
                            break;
                        }

                    }
                    break;
                }
            case 2:
                {
                    printf("PESSOA 1:\n");
                    printf("\tNome: %s\n", dados[0].nome);
                    printf("\tEndereco: %s\n", dados[0].end);
                    printf("\tCidade: %s\n", dados[0].cidade);
                    printf("\tEstado: %s\n", dados[0].estado);
                    printf("\tCep: %s\n", dados[0].cep);

                    printf("PESSOA 2:\n");
                    printf("\tNome: %s\n", dados[1].nome);
                    printf("\tEndereco: %s\n", dados[1].end);
                    printf("\tCidade: %s\n", dados[1].cidade);
                    printf("\tEstado: %s\n", dados[1].estado);
                    printf("\tCep: %s\n", dados[1].cep);

                    printf("PESSOA 3:\n");
                    printf("\tNome: %s\n", dados[2].nome);
                    printf("\tEndereco: %s\n", dados[2].end);
                    printf("\tCidade: %s\n", dados[2].cidade);
                    printf("\tEstado: %s\n", dados[2].estado);
                    printf("\tCep: %s\n", dados[2].cep);

                    printf("PESSOA 4:\n");
                    printf("\tNome: %s\n", dados[3].nome);
                    printf("\tEndereco: %s\n", dados[3].end);
                    printf("\tCidade: %s\n", dados[3].cidade);
                    printf("\tEstado: %s\n", dados[3].estado);
                    printf("\tCep: %s\n", dados[3].cep);

                    printf("Digite enter para continuar\n");
                    getchar();
                    system("cls");
                    break;
                }
            case 3:
                {
                   return;
                }
            default:
                {
                    printf("Caracter invalido\n\n");
                    break;
                }
            }
        }
    }


#endif // ex2

#ifdef ex3
/*Crie uma estrutura para representar as coordenadas de um ponto no plano
    (posicoes X e Y). Em seguida, declare e leia do teclado um ponto e exiba a
    distancia dele ate' a origem das coordenadas, isto é, posição (0, 0). Para
    realizar o cálculo, utilize a fórmula a seguir:
           d = raiz quadrada de  (XB - XA)ao 2 +(YB -YA)ao 2
    Em que:
    d = distância entre os pontos A e B
    X = coordenada X em um ponto
    Y = coordenada Y em um ponto*/
    struct pontos{
        float x;
        float y;
    };
    main()
    {
        struct pontos dados;
        float d;
        for(;;){
            printf("Digite um ponto na posicao X\n");
            scanf("%f",&dados.x);
            printf("Digite um ponto na posicao Y\n");
            scanf("%f",&dados.y);
            d = (sqrt((dados.x - 0)*(dados.x - 0))) + (sqrt((dados.y - 0)*(dados.y - 0)));
            printf("Distancia: %f",d);

            printf("\n\nDeseja rodar o progama novamente? S/N");
            getchar();
            char resp = getchar();
            getchar();
            if(resp =='N' || resp == 'n')
            {
                break;
            }
        }
    }
#endif // ex3

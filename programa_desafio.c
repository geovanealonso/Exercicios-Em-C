#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void entrar_produto(char nome[40], float *quantidade, float *estoque, int *dia, int *mes, int *ano);
void listar_produtos(char nome[40], float *quant, float *estoque, int *dia, int *mes, int *ano);
int pesquisa_produto(char nome[40], float *quant, float *estoque, int *dia, int *mes, int *ano);
void listar_produtos_letra(char letra);
void pesquisa_data(int *mes_proc, int *ano_proc);
void lista_produtos_minimo(char nome[40], float *quant, float *estoque, int *dia, int *mes, int *ano);
void movimentar_estoque(char nome_proc[40], float *quantidade);
void altera_produto(char nome_produto[40]);
void exclui_produto(char nome[40]);


int main()
{
    char nome[40];
    float quantidade = 0;
    float estoque = 0;
    int dia = 0;
    int mes = 0;
    int ano = 0;

    int opcao;

    do{
        system("            pause");
        system("cls");
        printf("\n      Menu\n");
        printf("\n      [1]Entrar com produto");
        printf("\n      [2]Listar produtos");
        printf("\n      [3]Pesquisar produtos");
        printf("\n      [4]Pesquisar produto pela primeira letra");
        printf("\n      [5]Pesquisar pela data de validade");
        printf("\n      [6]Listar produtos abaixo do estoque minimo");
        printf("\n      [7]Movimentar estoque");
        printf("\n      [8]Alterar produto");
        printf("\n      [9]Excluir produto");
        printf("\n      [10]Sair");
        printf("\n      Opcao: ");
        scanf("%i", &opcao);
        switch(opcao){
            case 1:{
                printf("\n       Nome do produto: ");
                fflush(stdin);
                gets(nome);
                printf("       Quantidade do produto: ");
                scanf("%f", &quantidade);
                printf("       Estoque do produto: ");
                scanf("%f", &estoque);
                printf("\n       DATA DE VALIDADE ");
                printf("\n       Dia: ");
                scanf("%i", &dia);
                printf("       Mes: ");
                scanf("%i", &mes);
                printf("       Ano: ");
                scanf("%i", &ano);
                entrar_produto(nome, &quantidade, &estoque, &dia, &mes, &ano);

                break;
            }
            case 2:{
                listar_produtos(nome, &quantidade, &estoque, &dia, &mes, &ano);
                break;
            }
            case 3:{
                printf("\n      Nome do produto: ");
                fflush(stdin);
                gets(nome);
                pesquisa_produto(nome, &quantidade, &estoque, &dia, &mes, &ano);
                break;
            }
            case 4:{
                char letra;
                printf("\n      Digite uma letra: ");
                fflush(stdin);
                scanf("%c", &letra);
                listar_produtos_letra(letra);
                break;
            }
            case 5:{
                printf("\n      Informe a data de validade\n\n");
                printf("        Mes: ");
                scanf("%i", &mes);
                printf("        Ano: ");
                scanf("%i", &ano);
                pesquisa_data(&mes,&ano);
                break;
            }
            case 6:{
                lista_produtos_minimo(nome, &quantidade, &estoque, &dia, &mes, &ano);
                break;
            }
            case 7:{
                printf("\n      Nome do produto: ");
                fflush(stdin);
                gets(nome);
                printf("      Quantidade do produto a ser retirado/armazenado: ");
                scanf("%f", &quantidade);
                movimentar_estoque(nome,&quantidade);
                break;
            }
            case 8:{
                printf("\n      Nome do produto: ");
                fflush(stdin);
                gets(nome);
                altera_produto(nome);
                break;
            }
            case 9:{
                printf("\n      Nome do produto: ");
                fflush(stdin);
                gets(nome);
                exclui_produto(nome);
                break;
            }
            case 10:{
                printf("\n\n        Programa encerrado com sucesso!\n");
                break;
            }
            default:{
                printf("\n\n        Opcao invalida\n");
            }
        }
    }while(opcao != 10);


    return 0;
}


void entrar_produto(char nome[40], float *quantidade, float *estoque, int *dia, int *mes, int *ano){

    FILE *pont_arq;
    pont_arq = fopen("arquivo.txt", "a");

    fprintf(pont_arq, "%s\n", nome);
    fprintf(pont_arq, "%f ", *quantidade);
    fprintf(pont_arq, "%f ", *estoque);
    fprintf(pont_arq, "%d ", *dia);
    fprintf(pont_arq, "%d ", *mes);
    fprintf(pont_arq, "%d ", *ano);
    fclose(pont_arq);

}


void listar_produtos(char nome[40], float *quant, float *estoque, int *dia, int *mes, int *ano){

    FILE *pont_arq=fopen("arquivo.txt", "r");
    int fim;

    while(!feof(pont_arq)) {

    if((fscanf(pont_arq, "%d", &fim)) == EOF){
       break;
    }
        fgets(nome, 39, pont_arq);
        fscanf(pont_arq, "%f", quant);
        fscanf(pont_arq, "%f", estoque);
        fscanf(pont_arq, "%d", dia);
        fscanf(pont_arq, "%d", mes);
        fscanf(pont_arq, "%d", ano);

            printf("\n      Nome do produto: %s", nome);
            printf("\n      Quantidade do produto: %f", *quant);
            printf("\n      Estoque minimo do produto: %f", *estoque);
            printf("\n      Data de validade: %i/%i/%i\n\n", *dia, *mes, *ano);
    }

    fclose(pont_arq);
}



int pesquisa_produto(char nome[40], float *quant, float *estoque, int *dia, int *mes, int *ano){

    FILE *pont_arq = fopen("arquivo.txt", "rt");
    char nome_pesquisado[40];

    int fim;
    while(!feof(pont_arq)) {

    if((fscanf(pont_arq, "%d", &fim)) == EOF){
       break;
    }
        fgets(nome_pesquisado, sizeof(nome_pesquisado), pont_arq);

        //retirando o enter capturado do arquivo para fazer a comparação entre as strings
        char nome_auxiliar[40];
        strcpy(nome_auxiliar, nome_pesquisado);// copia a string do arquivo para a variavel
        nome_auxiliar[strlen(nome_auxiliar)-1] = '\0'; // retira o ultimo caracter


        fscanf(pont_arq, "%f", quant);
        fscanf(pont_arq, "%f", estoque);
        fscanf(pont_arq, "%d", dia);
        fscanf(pont_arq, "%d", mes);
        fscanf(pont_arq, "%d", ano);

        if(strcmp(nome, nome_auxiliar)== 0){
            printf("\n\n        Dados encontrados\n");
            printf("\n      Nome do produto: %s", nome);
            printf("\n      Quantidade do produto: %f", *quant);
            printf("\n      Estoque minimo do produto: %f", *estoque);
            printf("\n      Data de validade: %i/%i/%i\n\n", *dia, *mes, *ano);
            return 0;
        }


    }
    printf("\n\n        Produto nao encontrado!\n\n");

    fclose(pont_arq);
    return -1;
}




void pesquisa_data(int *mes_proc, int *ano_proc){
    FILE *pont_arq=fopen("arquivo.txt", "r");
    char nome[40];
    float quant;
    float estoque;
    int dia, mes, ano;
    int cont = 0;
    int fim;

    while(!feof(pont_arq)) {

    if((fscanf(pont_arq, "%d", &fim)) == EOF){
       break;
    }
        fgets(nome, 39, pont_arq);
        fscanf(pont_arq, "%f %f %d %d %d", &quant, &estoque, &dia, &mes, &ano);

            if((mes <= *mes_proc && ano <= *ano_proc) || (mes > *mes_proc && ano < *ano_proc)){
                printf("\n\n        Dados do produto\n");
                printf("\n      Nome: %s", nome);
                printf("\n      Quantidade: %f", quant);
                printf("\n      Estoque: %f", estoque);
                printf("\n      Data de validade: %i/%i/%i\n\n", dia, mes, ano);
                cont++;
            }
    }

    if(cont == 0){
        printf("\n\n        Produto nao encontrado!\n\n");
    }

    fclose(pont_arq);

}

void lista_produtos_minimo(char nome[40], float *quant, float *estoque, int *dia, int *mes, int *ano){
    FILE *pont_arq=fopen("arquivo.txt", "r");
    int cont = 0;
    int fim;

    while(!feof(pont_arq)) {

    if((fscanf(pont_arq, "%d", &fim)) == EOF){
       break;
    }
        fgets(nome, 39, pont_arq);
        fscanf(pont_arq, "%f %f %d %d %d", quant, estoque, dia, mes, ano);
            if(*quant < *estoque){
                printf("\n\n        Dados do produto\n");
                printf("\n      Nome: %s", nome);
                printf("\n      Quantidade: %f", *quant);
                printf("\n      Estoque: %f", *estoque);
                printf("\n      Data de validade: %i/%i/%i\n\n", *dia, *mes, *ano);
                cont++;
            }
    }

    if(cont == 0){
        printf("\n\n        Nenhum produto abaixo do estoque minimo!\n\n");
    }

    fclose(pont_arq);

}


void movimentar_estoque(char nome_proc[40], float *quantidade){
    FILE *pont_arq=fopen("arquivo.txt", "r");
    char nome[1000][40];
    float quant[1000], estoque[1000];
    int dia[1000], mes[1000],ano[1000];
    int quant_dados = 0;
    int fim;

    int cont = 0;
    while(!feof(pont_arq)) {

    if((fscanf(pont_arq, "%d", &fim)) == EOF){
       break;
    }


        fgets(nome[quant_dados], 39, pont_arq);
        fscanf(pont_arq, "%f", &quant[quant_dados]);
        fscanf(pont_arq, "%f", &estoque[quant_dados]);
        fscanf(pont_arq, "%d", &dia[quant_dados]);
        fscanf(pont_arq, "%d", &mes[quant_dados]);
        fscanf(pont_arq, "%d", &ano[quant_dados]);



        //retirando o enter capturado do arquivo para fazer a comparação entre as strings
        char nome_auxiliar[40];
        strcpy(nome_auxiliar, nome[quant_dados]);// copia a string do arquivo para a variavel
        nome_auxiliar[strlen(nome_auxiliar)-1] = '\0'; // retira o ultimo caracter



            if(strcmp(nome_auxiliar, nome_proc)==0){
                    if(quantidade < 0){
                        if((*quantidade * -1) <= quant[quant_dados])
                            quant[quant_dados] = quant[quant_dados] + *quantidade;
                        else{
                            printf("\n\n        Quantidade indisponivel\n");
                        }
                    }
                    else
                            quant[quant_dados] = quant[quant_dados] + *quantidade;


                printf("\n\n        Novos dados do produto\n");
                printf("\n      Nome: %s", nome[quant_dados]);
                printf("\n      Quantidade: %f", quant[quant_dados]);
                printf("\n      Estoque: %f", estoque[quant_dados]);
                printf("\n      Data de validade: %i/%i/%i\n\n",dia[quant_dados], mes[quant_dados], ano[quant_dados]);
                cont++;
            }
            quant_dados++;
    }



    fclose(pont_arq);
    FILE *arquivo=fopen("arquivo.txt", "w");
    for(int i = 0; i <quant_dados; i++){
        fprintf(arquivo, "%s\n", nome[i]);
        fprintf(arquivo, "%f ", quant[i]);
        fprintf(arquivo, "%f ", estoque[i]);
        fprintf(arquivo, "%d ", dia[i]);
        fprintf(arquivo, "%d ", mes[i]);
        fprintf(arquivo, "%d ", ano[i]);
    }

    if(cont == 0){
        printf("\n\n        Produto nao encontrado!\n\n");
    }

    fclose(arquivo);

}

void altera_produto(char nome_produto[40]){
    FILE *pont_arq=fopen("arquivo.txt", "r");
    char nome[1000][40];
    float quant[1000], estoque[1000];
    int dia[1000], mes[1000], ano[1000];
    int quant_dados = 0;
    int fim;


    int cont = 0;
    while(!feof(pont_arq)) {

    if((fscanf(pont_arq, "%d", &fim)) == EOF){
       break;
    }

        fgets(nome[quant_dados], 39, pont_arq);
        fscanf(pont_arq, "%f", &quant[quant_dados]);
        fscanf(pont_arq, "%f", &estoque[quant_dados]);
        fscanf(pont_arq, "%d", &dia[quant_dados]);
        fscanf(pont_arq, "%d", &mes[quant_dados]);
        fscanf(pont_arq, "%d", &ano[quant_dados]);


        //retirando o enter capturado do arquivo para fazer a comparação entre as strings
        char nome_auxiliar[40];
        strcpy(nome_auxiliar, nome[quant_dados]);// copia a string do arquivo para a variavel
        nome_auxiliar[strlen(nome_auxiliar)-1] = '\0'; // retira o ultimo caracter



        if(strcmp(nome_produto, nome_auxiliar)==0){
                printf("\n\n        Dados do produto\n");
                printf("\n      Nome: %s", nome[quant_dados]);
                printf("\n      Quantidade: %f", quant[quant_dados]);
                printf("\n      Estoque: %f", estoque[quant_dados]);
                printf("\n      Data de validade: %i/%i/%i\n\n",dia[quant_dados], mes[quant_dados], ano[quant_dados]);

                printf("\n      Digite novos dados do produto\n");

                printf("\n      Nome do produto: ");
                fflush(stdin);
                gets(nome[quant_dados]);
                printf("      Quantidade do produto: ");
                scanf("%f", &quant[quant_dados]);
                printf("      Estoque do produto: ");
                scanf("%f", &estoque[quant_dados]);
                printf("\n      DATA DE VALIDADE ");
                printf("\n      Dia: ");
                scanf("%i", &dia[quant_dados]);
                printf("      Mes: ");
                scanf("%i", &mes[quant_dados]);
                printf("      Ano: ");
                scanf("%i", &ano[quant_dados]);
                printf("\n");
                cont++;
            }
            quant_dados++;
}



    fclose(pont_arq);
    //Reenviando os dados para o arquivo
    FILE *arquivo=fopen("arquivo.txt", "w");
    for(int i = 0; i <quant_dados; i++){
        fprintf(arquivo, "%s\n", nome[i]);
        fprintf(arquivo, "%f ", quant[i]);
        fprintf(arquivo, "%f ", estoque[i]);
        fprintf(arquivo, "%d ", dia[i]);
        fprintf(arquivo, "%d ", mes[i]);
        fprintf(arquivo, "%d ", ano[i]);
    }

    if(cont == 0){
        printf("\n\n        Produto nao encontrado!\n\n");
    }

    fclose(arquivo);
}


void exclui_produto(char nome_proc[40]){
    FILE *pont_arq=fopen("arquivo.txt", "r");
    char nome[1000][40];
    float quant[1000],estoque[1000];
    int dia[1000],mes[1000],ano[1000];
    int quant_dados = 0;
    int pos_excluida = -1; // inicializa a posicao ecluida com -1
    int fim;


    int cont = 0;
    while(!feof(pont_arq)) {

    if((fscanf(pont_arq, "%d", &fim)) == EOF){
       break;
    }
        fgets(nome[quant_dados], 39, pont_arq);
        fscanf(pont_arq, "%f", &quant[quant_dados]);
        fscanf(pont_arq, "%f", &estoque[quant_dados]);
        fscanf(pont_arq, "%d", &dia[quant_dados]);
        fscanf(pont_arq, "%d", &mes[quant_dados]);
        fscanf(pont_arq, "%d", &ano[quant_dados]);


        //retirando o enter capturado do arquivo para fazer a comparação entre as strings
        char nome_auxiliar[40];
        strcpy(nome_auxiliar, nome[quant_dados]);// copia a string do arquivo para a variavel
        nome_auxiliar[strlen(nome_auxiliar)-1] = '\0'; // retira o ultimo caracter


        if(strcmp(nome_auxiliar, nome_proc)==0){
                printf("\n\n        Produto excluído com sucesso!\n");
                printf("\n      Nome: %s", nome[quant_dados]);
                printf("\n      Quantidade: %f", quant[quant_dados]);
                printf("\n      Estoque: %f", estoque[quant_dados]);
                printf("\n      Data de validade: %i/%i/%i\n\n",dia[quant_dados], mes[quant_dados], ano[quant_dados]);
                pos_excluida = quant_dados;
                cont++;
            }
            quant_dados++;
}


    fclose(pont_arq);

    //Reenviando os dados para o arquivo
    FILE *arquivo=fopen("arquivo.txt", "w");
    for(int i = 0; i <quant_dados; i++){
            if(pos_excluida != i){
                fprintf(arquivo, "%s\n", nome[i]);
                fprintf(arquivo, "%f ", quant[i]);
                fprintf(arquivo, "%f ", estoque[i]);
                fprintf(arquivo, "%d ", dia[i]);
                fprintf(arquivo, "%d ", mes[i]);
                fprintf(arquivo, "%d ", ano[i]);
            }
    }

    if(cont == 0){
        printf("\n\n        Produto nao encontrado!\n\n");
    }

    fclose(arquivo);

}



void listar_produtos_letra(char letra){
    FILE *pont_arq=fopen("arquivo.txt", "r");
    char nome[40];
    float quant, estoque;
    int dia, mes, ano;
    char caracter;
    int cont = 0;
    int fim;

    while(!feof(pont_arq)) {

    if((fscanf(pont_arq, "%d", &fim)) == EOF){
       break;
    }

        fgets(nome, 39, pont_arq);
        int num = fseek(pont_arq, 0, 1);
        caracter = nome[num];
        fscanf(pont_arq, "%f", &quant);
        fscanf(pont_arq, "%f", &estoque);
        fscanf(pont_arq, "%d", &dia);
        fscanf(pont_arq, "%d", &mes);
        fscanf(pont_arq, "%d", &ano);


        if(caracter == letra){
            printf("\n      Nome do produto: %s", nome);
            printf("\n      Quantidade do produto: %f", quant);
            printf("\n      Estoque minimo do produto: %f", estoque);
            printf("\n      Data de validade: %i/%i/%i\n\n", dia, mes, ano);
            cont++;
        }


        }


        if(cont == 0){
            printf("\n\n        Nenhum produto encontrado!\n\n");
        }

    fclose(pont_arq);
}






#include <stdio.h>
#include <stdlib.h>
#define ex1

#ifdef ex1
/*Escreva um programa que receba uma letra via teclado. Escreva uma funcao que
    pesquise esta letra dentro do vetor abaixo. Imprima o resultado da pesquisa
    no video na funcao main(). Passe como informacao para a funcao a letra
    digitada.(utilize o comando return). O vetor deve ser uma variavel global.

    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y*/
    int pesquisa(char letra, int tamanho);
    char vetor[] = {'b','d','f','h','j','k','m','o','q','s','u','w','y'};

main() {
    for(;;){
        char letra;
        puts("Digite uma letra: ");
        letra = getchar();
        puts("Resultado: ");
        int x = pesquisa(letra,sizeof(vetor));
        if(x==1) {
            puts("valor encontado");
        } else {
            puts("valor nao encontrado");
        }

        printf("Deseja rodar o programa novamente? S/N\n");
            getchar();
            char resp = getchar();
            getchar();
            if(resp == 'n' || resp== 'N'){
                break;}
    }
}

int pesquisa(char letra,int tamanho) {
    int i;
    for(i=0;i<tamanho;i++) {
        if(letra==vetor[i]) {
            return 1;
        }
    }
    return 0;
}
#endif // ex1

#ifdef ex2
/*Escreva um programa que receba na funcao main() 2 valores inteiro. Escreva
    uma funcao para cada operacoes aritmeticas e passe como parametro os 2
    valores recebidos na funcao main(). Retorne os resultados usando o comando
    return e imprima-os no video na funcao main().*/
    int soma(int x, int y);
    int subtracao(int x, int y);
    int multiplicacao(int x, int y);
    float divisao(int x, int y);

    main(){
        int a,b;
        for(;;){
            do{
                printf ("Digite o valor da variavel A\n");
                scanf("%d",&a);
                if(a<=0){
                    printf("Digite um valor maior ou igual a zero\n\n");
                }
            }while (a<=0);
            do{
                printf ("Digite o valor da variavel B\n");
                scanf("%d",&b);
                if(b<=0){
                    printf("Digite um valor maior ou igual a zero\n\n");
                }
            }while (b<=0);
            int som = soma(a,b);
            int sub = subtracao(a,b);
            int mult = multiplicacao(a,b);
            float div = divisao (a,b);
            printf("\tResultados:\n");
            printf("\t\tSoma: %d\n",som);
            printf("\t\tSubtracao: %d\n",sub);
            printf("\t\tMultiplicacao: %d\n", mult);
            printf("\t\tDivisao: %.2f\n\n",div);

            printf("Deseja rodar o programa novamente? S/N\n");
            getchar();
            char resp = getchar();
            if(resp == 'n' || resp== 'N'){
                break;
            }
        }
    }

    int soma(int x, int y)
    {
        int c;
        c = x + y;
        return(c);
    }

    int subtracao(int x, int y)
    {
        int c;
        c = x - y;
        return(c);
    }

    int multiplicacao (int x, int y)
    {
        int c;
        c = x * y;
        return(c);
    }

    float divisao (int x, int y)
    {
        float c;
        c = (float)x / y;
        return(c);
    }
#endif // ex2

#ifdef ex3
/*Reescreva o programa do exercicio anterior para receber via teclado n
    valores. Os n valores nao sao definidos previamente.*/
        int soma(int x, int y);
    int subtracao(int x, int y);
    int multiplicacao(int x, int y);
    float divisao(int x, int y);

    main(){
        int a,b,c,d,n;
        for(;;){
                a = 0; b = 0; c = 0; d = 0;
            for(;;){
                do{
                    printf ("Digite o valor da variavel A\n");
                    scanf("%d",&a);
                    c += a;
                    if(a<=0){
                        printf("Digite um valor maior ou igual a zero\n\n");
                    }
                }while (a<=0);


                do{
                    printf ("Digite o valor da variavel B\n");
                    scanf("%d",&b);
                    d += b;
                    if(b<=0){
                        printf("Digite um valor maior ou igual a zero\n\n");
                    }
                }while (b<=0);
                printf("Deseja digitar mais valores? S/N\n");
                getchar();
                char resp = getchar();
                if(resp=='n' || resp =='N'){
                    break;
                }

            }
            int som = soma(c,d);
            int sub = subtracao(c,d);
            int mult = multiplicacao(c,d);
            float div = divisao (c,d);
            printf("\tResultados:\n");
            printf("\t\tSoma: %d\n",som);
            printf("\t\tSubtracao: %d\n",sub);
            printf("\t\tMultiplicacao: %d\n", mult);
            printf("\t\tDivisao: %.2f\n\n",div);

            printf("Deseja rodar o programa novamente? S/N\n");
            getchar();
            char resp = getchar();
            if(resp == 'n' || resp== 'N'){
                break;
            }
        }
    }

    int soma(int x, int y)
    {
        int c;
        c = x + y;
        return(c);
    }

    int subtracao(int x, int y)
    {
        int c;
        c = x - y;
        return(c);
    }

    int multiplicacao (int x, int y)
    {
        int c;
        c = x * y;
        return(c);
    }

    float divisao (int x, int y)
    {
        float c;
        c = (float)x / y;
        return(c);
    }

#endif // ex3

#ifdef ex4
/**Aproveitando o programa anterior inclua a selecao das operacoes aritmeticas
    para transforma-lo em uma calculadora. (utilize o comando switch).**/
            int soma(int x, int y);
    int subtracao(int x, int y);
    int multiplicacao(int x, int y);
    float divisao(int x, int y);

    main(){
        int a,b,c,d,n;
        for(;;){
            c=0; d =0; a =0; b =0;
            for(;;){
                do{
                    printf ("Digite o valor da variavel A\n");
                    scanf("%d",&a);
                    c += a;
                    if(a<=0){
                        printf("Digite um valor maior ou igual a zero\n\n");
                    }
                }while (a<=0);


                do{
                    printf ("Digite o valor da variavel B\n");
                    scanf("%d",&b);
                    d += b;
                    if(b<=0){
                        printf("Digite um valor maior ou igual a zero\n\n");
                    }
                }while (b<=0);
                printf("Deseja digitar mais valores? S/N\n");
                getchar();
                char resp = getchar();
                if(resp=='n' || resp =='N'){
                    break;
                }

            }
            printf("Qual operaçao voce deseja realizar? - ou + ou * ou /\n");
            getchar();
            char op = getchar();
            switch(op)
            {
                case '+':
                    {
                        int som = soma(c,d);
                        printf("\tResultado:\n");
                        printf("\t\tSoma: %d\n",som);
                        break;
                    }
                case '-':
                    {
                        int sub = subtracao(c,d);
                        printf("\tResultado:\n");
                        printf("\t\tSubtracao: %d\n",sub);
                        break;
                    }
                case '*':
                    {
                        int mult = multiplicacao(c,d);
                        printf("\tResultado:\n");
                        printf("\t\tMultiplicacao: %d\n", mult);
                        break;
                    }
                case '/':
                    {
                        float div = divisao (c,d);
                        printf("\tResultado:\n");
                        printf("\t\tDivisao: %.2f\n\n",div);
                        break;
                    }
                default:
                    {
                        printf("Caracter invalido\n");
                    }
            }
            printf("Deseja rodar o programa novamente? S/N\n");
            getchar();
            char resp = getchar();
            if(resp == 'n' || resp== 'N'){
                break;
            }
        }
    }

    int soma(int x, int y)
    {
        int c;
        c = x + y;
        return(c);
    }

    int subtracao(int x, int y)
    {
        int c;
        c = x - y;
        return(c);
    }

    int multiplicacao (int x, int y)
    {
        int c;
        c = x * y;
        return(c);
    }

    float divisao (int x, int y)
    {
        float c;
        c = (float)x / y;
        return(c);
    }

#endif // ex4

#ifdef ex5
/*Escreva um programa que receba na funcao main() 2 strings de ate' 10 caracteres.
    Escreva as funcoes que compare estas 2 strings e retorne se sao IGUAIS 1 e
    se DIFERENTES 0. Declare as strings como variavel global.*/
    char a[11], b[11];
    int compare(const char *str1, const char *str2);

    main()
    {
        for(;;){

            printf("digite a primeira string\n");
            gets(a);
            printf("digite a segunda string\n");
            gets(b);
            int k = compare(a,b);

            if(k == 1){
                printf("As strings sao iguais\n");
            }
            else{
                printf("As strings nao sao igais\n");
            }

            printf("Deseja rodar o programa novamente? S/N\n");
            char resp = getchar();
            getchar();
            if(resp == 'n' || resp== 'N'){
                break;
            }

        }
    }

    int compare(const char *str1, const char *str2)
    {
        int x = 0,ya=0,yb=0;
        for(;;){
                if(a[ya] != '\0'){
                    ya++;
                }
                else
                    break;
            }
            for(;;){
                if(b[yb] != '\0'){
                    yb++;
                }
                else
                    break;
            }
            if(ya!=yb){
                x=0;
            }
            else{
                for(int cont = 0; a[cont] != '\0' && b[cont] != '\0'; cont++){
                    if(a[cont] == b [cont]){
                        x = 1;
                    }
                    else{
                        x = 0;
                        break;
                    }
                }

            }
            return x;
    }
#endif // ex5

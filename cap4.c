#include <stdio.h>
#define ex5

#ifdef ex1
/*Escreva um programa para receber 5 nomes, com até 7 caracteres, via teclado
    e imprima-os no video no seguinte formato:

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      nome1                                   nome5
                nome2               nome4
                          nome3*/
    main(){
        for(;;){
        char a[8],b[8],c[8],d[8],e[8];
        printf("digite a string 1\n");
        scanf("%s",&a[0]);

        printf("digite a string 2\n");
        scanf("%s",&b[0]);

        printf("digite a string 3\n");
        scanf("%s",&c[0]);

        printf("digite a string 4\n");
        scanf("%s",&d[0]);

        printf("digite a string 5\n");
        scanf("%s",&e[0]);

        printf("        10        20        30        40        50\n");
        printf("12345678901234567890123456789012345678901234567890\n");
 /*     printf("  asdfghj                                 assdffg");
        printf("            asdfghj             asdfghj");
        printf("                      asdfghj")*/
        printf("  %-7s                                 %-7s\n",a,e);
        printf("            %-7s             %-7s\n",b,d);
        printf("                      %-7s\n",c);
        printf("\t\t\tDeseja rodar o programa novamente? S/N\n");
            getchar();
            char x = getchar();
            if(x == 'N' || x == 'n'){
                break;
            }
        }
    }
#endif // ex1

#ifdef ex2
/*Escreva um programa para receber 3 strings de ate 10 caracteres cada via
    teclado e imprima-as no video no seguinte formato:
    (utilize vetores multidimensionais)

            10        20        30        40        50        60
    123456789012345678901234567890123456789012345678901234567890
        string1             string2             string3*/
    char c[3][11];

main()
{
    for(;;){

        int x, i;
        for(int cont = 0;cont<3;cont++){
            printf("digite um nome na posicao %d: ",cont);

            scanf("%s", &c[cont]);}

        printf("        10        20        30        40        50        60\n");
        printf("123456789012345678901234567890123456789012345678901234567890\n");
      //printf("    asdfghjklç          asdfghjklo          asdfghjklo");
        printf("    %-10s          %-10s          %-10s\n", c[0], c[1], c[2]);

        printf("\t\t\tDeseja rodar o programa novamente? S/N\n");
        getchar();
        char y = getchar();
        if(y == 'N' || y == 'n'){
            break;
        }
    }

}
#endif // ex2

#ifdef ex3
/*Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras maiusculas. */
    main(){
        for(;;){

            char frase[11];
            int i;

            printf("Entre com o texto: ");
            gets(frase);

            for(i = 0; frase[i] != '\0'; i++){
                if(frase[i] >= 97 && frase[i] <= 122)
                    frase[i] -= 32;
            }

            printf("\nNovo texto: %s\n", frase);

            printf("\t\t\tDeseja rodar o programa novamente? S/N\n");
            char x = getchar();
            getchar();
            if(x == 'N' || x == 'n'){
                break;
            }
        }
    }
#endif // ex3

#ifdef ex4
/*Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras minusculas.*/
    main(){
        for(;;){
            char frase[11];
            int i;

            printf("Entre com o texto: ");
         gets(frase);

         for(i = 0; frase[i] != '\0'; i++){
            if(frase[i] >= 65 && frase[i] <= 90)
                frase[i] += 32;
         }

         printf("\nNovo texto: %s\n", frase);

            printf("\t\t\tDeseja rodar o programa novamente? S/N\n");
            char x = getchar();
            getchar();
            if(x == 'N' || x == 'n'){
                break;
            }
        }
    }
#endif // ex4

#ifdef ex5
/*Receba 2 string de ate 10 caracteres via teclado, compare-as mostrando como
    resultado se são IGUAIS ou DIFERENTES*/
    main(){
        for(;;){
            int i=0,tam;
            do{
                printf("Digite o tamanho dos vetores entre 1 e 10\n");
                scanf("%d",&tam);
                if(tam<=0 || tam>10){
                    printf("voce digitou valores invalidos\n");
                }
            }while(tam<=0 || tam>10);

            char a[11];
            char b[11];

            printf("digite as letras da string 1:\n");
            scanf("%s",&a[0]);
            printf("a string e %s\n\n",a);
            printf("digite as letras da string 2:\n");
            scanf("%s",&b[0]);
            printf("a string e %s\n\n",b);

           for(int cont=0;cont<tam;cont++){
                if(a[cont]==b[cont]){
                    i++;
                }
           }

            if(i == tam){
                printf("os vetores sao iguais\n");
            }
            else{
                printf("Os vetores NAO sao iguais\n\n");
            }

            printf("\t\t\tDeseja rodar o programa novamente? S/N\n");
            getchar();
            char x = getchar();
            if(x == 'N' || x == 'n'){
                break;
            }
        }
    }
#endif // ex5

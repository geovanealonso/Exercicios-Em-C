#include <stdio.h>
#define ex5


#ifdef ex1
/* Escreva um programa para receber via teclado em vetores 3 int, 3 long,
    3 unsigned, 3 float e 3 double e imprima-os no video no seguinte formato:

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double
*/
    main(){
        int a[3];
        long b[3];
        unsigned c [3];
        float d [3];
        double e [3];
        for(int cont=0;cont<3;cont++){
            printf("Digite um valor para int na posicao %d\n",cont);
            scanf("%d",&a[cont]);
        }
        for(int cont=0;cont<3;cont++){
            printf("Digite um valor para long na posicao %d\n",cont);
            scanf("%ld",&b[cont]);
        }
        for(int cont=0;cont<3;cont++){
            printf("Digite um valor para unsigned na posicao %d\n",cont);
            scanf("%d",&c[cont]);
        }
        for(int cont=0;cont<3;cont++){
            printf("Digite um valor para float na posicao %d\n",cont);
            scanf("%f",&d[cont]);
        }
        for(int cont=0;cont<3;cont++){
            printf("Digite um valor para double na posicao %d\n",cont);
            scanf("%lf",&e[cont]);
        }

        printf("        10        20        30        40        50\n");
        printf("12345678901234567890123456789012345678901234567890\n");
      //printf("  -23767              -2000000000         65535");
      //printf("            -3.4e-38            -1.7e-308");
        printf("  %-6d              %-11ld         %-5u\n",a[0],b[0],c[0]);
        printf("            %-8.1e            %-9.1e\n",d[0],e[0]);
        printf("  %-6d              %-11ld         %-5u\n",a[1],b[1],c[1]);
        printf("            %-8.1e            %-9.1e\n",d[1],e[1]);
        printf("  %-6d              %-11ld         %-5u\n",a[2],b[2],c[2]);
        printf("            %-8.1e            %-9.1e\n",d[2],e[2]);
    }
#endif // ex1

#ifdef ex2
/*Receba via teclado dez valores inteiros e ordene por ordem crescente assim
que sao digitados. Guarde-os em um vetor. Mostre ao final os valores em ordem.*/
main(){
    for(;;){
        int vet[10],x,y,aux;
        for(x=0;x<10;x++){
            printf("Digite um numero na posicao %d\n",x);
            scanf("%d",&vet[x]);
        }
        for(x=0;x<10;x++){
            for(y=x+1;y<10;y++){
                if(vet[x]>vet[y]){
                    aux = vet[x];
                    vet[x] = vet[y];
                    vet[y] = aux;
                }
            }
        }
        for(x=0;x<10;x++){
            printf("posicao %d = %d\n",x,vet[x]);
        }
        printf("Deseja rodar o programa novamente? S/N\n");
        getchar();
        char resp = getchar();
        if(resp=='n' || resp=='N'){
        break;
        }
    }
}

#endif // ex2

#ifdef ex3
/*Um vetor é palíndromo se ele não se altera quando as posições dos componentes
    são invertidos. Por exemplo, o vetor v = {1, 3, 5, 2, 2, 5, 3, 1} é palíndromo.
    Escreva um programa que verifique se um vetor é palíndromo. Receba o vetor
    via teclado (tamanho 10)*/
    main(){
        for(;;){
            int vetor[10],cont,x,pal=0;
            for(cont=0;cont<10;cont++){
                printf("Digite um valor na posicao %d\n", cont);
                scanf("%d",&vetor[cont]);
            }
            for(cont=0;cont<5;cont++){
                x = 9 - cont;
                if(vetor[cont] == vetor[x]){
                    pal++;}
            }
            if(pal == 5){
                printf("O vetor e palindromo\n");
            }
            else{
                printf("O vetor NAO e palindromo\n");
            }
            printf("Deseja rodar o programa novamente? S/N\n");
            getchar();
            char resp = getchar();
            if(resp=='n' || resp=='N'){
            break;
            }
        }
    }
#endif // ex3

#ifdef ex4
/*Defina 2 vetores bidimensionais do tipo inteiro de 2x3. Escreva um programa
    que recebe os dados via teclado para esses 2 vetores. Usando o operador
    subtracao "-", subtraia os elementos de mesmo indice dos 2 vetores
    e guarde o resultado num 3. vetor. Imprima na tela o indice, os valores e
    o resultado dos 6 elementos dos vetores*/
    main(){
        for(;;){
            int veta [2] [3], vetb [2] [3], vetc [2] [3],cont,x=0,y=0;
            for(cont=0;cont<6;cont++){
                printf("Digite um valor no vetor a na linha %d coluna %d\n",x,y);
                scanf("%d",&veta[x][y]);
                printf("Digite um valor no vetor b na linha %d coluna %d\n",x,y);
                scanf("%d",&vetb[x][y]);
                if (cont == 2){
                    y = 0;
                    x = 1;
                }
                else{
                    y++;
                }
            }
            x = 0;
            y = 0;
            for(cont=0;cont<6;cont++){
                vetc [x] [y] = veta [x] [y] - vetb [x] [y];
                printf("Vetor Final [%d] [%d] = %d\n\n",x,y,vetc[x][y]);
                y++;
                if(cont==2 ){
                    y = 0;
                    x = 1;
                }

            }
            printf("Deseja rodar o programa novamente? S/N\n");
            getchar();
            char resp = getchar();
            if(resp=='n' || resp=='N'){
                break;
            }
        }
    }
#endif // ex4

#ifdef ex5
/*Receba via teclado valores para uma matriz 5 x 5. Receba via teclado um valor X.
    O programa dever fazer a busca desse valor x na matriz e, ao final escrever a
    localizacao (linha e coluna) ou uma mensagem de ”nao encontrado”*/
    main(){
        for(;;){
            int vet[5][5],cont,x=0,y=0,num;

            for(cont=0;cont<25;cont++){

                printf("Digite um valor no vetor na linha %d coluna %d\n",x,y);
                scanf("%d",&vet[x][y]);

                if(cont == 4 || cont ==9 || cont==14 || cont == 19){
                    x++;
                    y=0;
                }
                    else{
                        y++;
                    }
            }

            printf("Digite o valor que deseja procurar na matriz\n");
            scanf("%d",&num);

            for(x=0;x<5;x++){
                for(y=0;y<5;y++){
                    if(vet[x][y] == num){
                        printf("O valor %d foi encontrado na linha %d coluna %d\n",num,x,y);
                    }
                    else{
                        cont++;
                    }
                }
            }
            if(cont == 25){
                printf("Valor nao encontrado\n");
            }
            printf("Deseja rodar o programa novamente? S/N\n");
            getchar();
            char resp = getchar();
            if(resp=='n' || resp=='N'){
                break;
            }
    }
}
#endif // ex5

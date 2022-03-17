#include <stdio.h>
#define ex1

#ifdef ex1
main(){
    /*Escreva um programa que receba dados via teclado para variaveis do tipo short,
    long, int, float, double e um char e imprima-os no video no seguinte
    formato:

             10        20        30        40        50        60
     12345678901234567890123456789012345678901234567890123456789012345
         short               long                int
                   float               double              char*/
    for(;;){
        printf("Digite um valor para short:");
        short a;
        scanf("%hd",&a);
        printf("Digite um valor para float:");
        float b;
        scanf ("%f",&b);
        printf("Digite um valor para long:");
        long c;
        scanf("%ld",&c);
         printf("Digite um valor para double:");
        double d;
        scanf("%lf",&d);
        printf("Digite um valor para int:");
        int e;
        scanf("%d",&e);
        printf("Digite um valor para char:");
        char f;
        getchar();
        f = getchar();

        printf("        10        20        30        40        50        60\n");
        printf("12345678901234567890123456789012345678901234567890123456789012345\n");
      //printf("    -32767              -2000000000         -32767");
      //printf("              -3.4e-38            -1.7e-308           -128");
        printf("    %-6hd              %-11ld         %-6d\n",a,c,e);
        printf("              %-8.1e            %-9.1e           %-4c\n",b,d,f);

        printf("Deseja rodar o programa novamente? S/N\n");
        getchar();
        char resp = getchar();
        if(resp=='n' || resp=='N'){
            break;
        }
    }
}
#endif // ex1

#ifdef ex2
/*Escreva um programa que receba via teclado um tempo em segundos e converta um
    para horas, minutos e segundos.
    Ex.: recebe 3850 segundos que converte para 1h 4min 10s.*/
main(){
    for(;;){
        int tempo, horas, minutos, segundos;
        printf("Digite o tempo em segundos: ");
        scanf("%d", &tempo);
        horas = (tempo/3600);
        minutos = (tempo -(3600*horas))/60;
        segundos = (tempo -(3600*horas)-(minutos*60));
        printf("%dh %dmin %ds \n",horas,minutos,segundos);

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
/*Escreva um programa para ler um numero inteiro, positivo de tres digitos, e gere
    outro número formado pelos dígitos invertidos do número lido.
    Ex:   NúmeroLido = 123
        NúmeroGerado = 321*/
main(){
    for(;;){
        int num,numInvertido;
        int a=0,b=0,c=0;
        do{
            printf("Digite um numero de 3 digitos: ");
            scanf("%d",&num);
            if (num<100 || num>=1000){
                printf("Voce nao digitou um numero de 3 digitos. Digite novamente\n\n");
            }
        }while(num<100 || num>=1000);
        while(num!=0){
            if(num>100){
                num-=100;
                a++;
            }
            else if(num>10){
                num-=10;
                b++;
            }
            else {
                num-=1;
                c++;
            }
        }
        num = a*100 + b*10 + c;
        printf("Numero digitado: %d\n",num);
        numInvertido = c*100 + b*10 + a;
        printf("Numero invertido: %d",numInvertido);

        printf("\nDeseja rodar o programa novamente? S/N\n");
        getchar();
        char resp = getchar();
        if(resp=='n' || resp=='N'){
            break;
        }
    }
}
#endif // ex3

#ifdef ex4
main(){
    /*Escreva um programa que permute o conteúdo de duas variáveis sem utilizar uma
    variável auxiliar.*/
    for(;;){
        int a,b;
        printf("Digite o valor de a:");
        scanf("%d",&a);
        printf("Digite o valor de b:");
        scanf("%d",&b);
        a = a + b;
        b = a - b;
        a = a - b;
        printf("a = %d\nb = %d",a,b);

        printf("\nDeseja rodar o programa novamente? S/N\n");
        getchar();
        char resp = getchar();
        if(resp=='n' || resp=='N'){
            break;
        }
    }
}
#endif // ex4

#ifdef ex5
/*Escreva um programa que lê um valor em reais e calcula qual o menor número
    possível de notas de $100, $50, $10, $5, $2 e $1 em que o valor lido pode ser
    decomposto. Escrever o valor lido e a relação de notas necessárias.*/
main(){
    for(;;){
        int vValor;
        printf("Digite um valor\n");
        scanf("%d", &vValor);

        int v100 = vValor / 100;
        vValor = vValor - v100 * 100;

        int v50 = vValor / 50;
        vValor = vValor - v50 * 50;

        int v20 = vValor / 20;
        vValor = vValor - v20 * 20;

        int v10 = vValor / 10;
        vValor = vValor - v10 * 10;

        int v5 = vValor / 5;
        vValor = vValor - v5 * 5;

        int v2 = vValor / 2;
        vValor = vValor - v2 * 2;

        int v1 = vValor;

        printf("O numero de notas de 100 e: %d\n", v100);
        printf("O numero de notas de 50 e: %d\n", v50);
        printf("O numero de notas de 20 e: %d\n", v20);
        printf("O numero de notas de 10 e: %d\n", v10);
        printf("O numero de notas de 5 e: %d\n", v5);
        printf("O numero de notas de 2 e: %d\n", v2);
        printf("O numero de notas de 1 e: %d\n", v1);

        printf("Deseja rodar o programa novamente? S/N\n");
        getchar();
        char resp = getchar();
        if(resp=='n' || resp=='N'){
            break;
        }
    }
}
#endif // ex5

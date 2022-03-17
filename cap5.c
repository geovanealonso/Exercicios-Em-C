#include <stdio.h>
#define ex6

#ifdef ex1
/*Escreva um programa que receba via teclado 2 numeros inteiros e
    imprima-os no video com o resultado das 4 operacoes aritmeticas*/
    main(){
        int a,b;
        for(;;){
            printf("Digite o primeiro numero\n");
            scanf("%d",&a);
            printf("Digite o segundo numero\n");
            scanf("%d",&b);
            printf("Adicao: %d\n", a+b);
            printf("Subtacrao a-b:%d\n", a-b);
            printf("Multiplicacao:%d\n", a*b);
            printf("Divisao a/b:%.2f\n", (float)a/b);

            printf("Deseja rodar o programa novamente? S/N\n");
            getchar();
            char resp = getchar();
            if (resp == 'n' || resp == 'N')
                break;
        }
    }
#endif // ex1

#ifdef ex2
/*Reescreva o exercicio anterior utilizando operadores de atribuicao
    composta*/
    main(){
        int a,b,c;
        float d;
        for(;;){
            printf("Digite o primeiro numero\n");
            scanf("%d",&a);
            printf("Digite o segundo numero\n");
            scanf("%d",&b);
            c=a;
            a+=b;
            printf("Adicao: %d\n", a);
            a=c;
            a-=b;
            printf("Subtacrao a-b:%d\n", a);
            a=c;
            a*=b;
            printf("Multiplicacao:%d\n", a);
            a=c;
            d= a/(float)b;
            printf("Divisao b/a:%.2f\n", d);

            printf("Deseja rodar o programa novamente? S/N\n");
            getchar();
            char resp = getchar();
            if (resp == 'n' || resp == 'N')
                break;
        }
    }
#endif // ex2




#ifdef ex3
/*Escreva um programa que receba via teclado 2 numeros inteiros e execute
    as operacoes logicas bit a bit AND, OU, OU EXCLUSIVO e imprima-os no
    video no formato decimal e hexadecimal.*/
    main(){

        int num1, num2;

        for(;;){
            printf("Informe o primeiro numero: \n");
            scanf("%d", &num1);

            printf("Informe o segundo numero:\n");
            scanf("%d", &num2);

            printf("AND           -->  %3d   0x%x\n", num1 & num2, num1 & num2);
            printf("OU            -->  %3d   0x%x\n", num1 | num2, num1 | num2);
            printf("OU EXCLUSIVO  -->  %3d   0x%x\n", num1 ^ num2, num1 ^ num2);


            printf("Deseja rodar o programa novamente? S/N\n");
            getchar();
            char resp = getchar();
            if (resp == 'n' || resp == 'N')
                break;
        }
    }

#endif // ex3

#ifdef ex4
    /* Escreva um programa que receba um numero inteiro via teclado, divida-o
        por 8 e multiplique-o por 8 utilizando os operadores de deslocamento.
        Imprima no video o numero recebido e os resultados obtidos.*/
    main()
    {
        for(;;){
            int num;
            printf("Digite um numero: \n");
            scanf("%d",&num);

            num = num>>3;
            printf("desloc. a direita >> 3: %d\n",num);
            num = num<<3;
            printf("desloc. a esquerda << 3: %d\n",num);

            printf("Deseja rodar o programa novamente? S/N\n");
            getchar();
            char resp = getchar();
            if (resp == 'n' || resp == 'N')
                break;
        }
    }
#endif // ex4

#ifdef ex5
/*Escreva um programa para determinar a idade de uma pessoa, em anos, meses e
    dias, recebendo via teclado a data (dia, mes e ano) do seu nascimento e a
    data (dia, mes e ano) atual*/
    main(){
        for(;;){
        int dia,mes,ano,dia2,mes2,ano2,idade;

        do{
        printf("Digite o dia em que nasceu\n");
        scanf("%d",&dia);
        if(dia<=0 || dia>31)
            printf("Digite um dia valido\n");
        }while(dia<=0 || dia>31);

        do{
        printf("Digite o mes em que nasceu\n");
        scanf("%d",&mes);
        if(mes<=0 || mes>12)
            printf("Digite um mes valido\n");
        }while(mes<=0 || mes>12);

        do{
        printf("Digite o ano em que nasceu\n");
        scanf("%d",&ano);
        if(ano>=2020)
            printf("Digite um ano valido\n");
        }while(ano>=2020);

        do{
        printf("Digite o dia atual\n");
        scanf("%d",&dia2);
        if(dia2<=0 || dia2>31)
            printf("Digite um dia valido\n");
        }while(dia2<=0 || dia2>31);

        do{
        printf("Digite o mes atual\n");
        scanf("%d",&mes2);
        if(mes2<=0 || mes2>12)
            printf("Digite um mes valido\n");
        }while(mes2<=0 || mes2>12);

        do{
        printf("Digite o ano atual\n");
        scanf("%d",&ano2);
        if(ano2<=ano)
            printf("Digite um ano valido\n");
        }while(ano2<=ano);

        idade = ano2 - ano;
        if(mes2<mes){
            idade--;
        }
        else if(mes2 == mes){
            if(dia2 == dia){
                printf("Feliz Aniversario! Voce esta com %d anos\n",idade);
            }
            else if(dia2<dia){
                idade--;
            }
        }
        printf("Voce esta com %d anos\n\n\n\n", idade);
        printf("Deseja digitar mais valores? S/N");
        getchar();
        char resp = getchar();
        if(resp == 'N' || resp == 'n'){
            break;
        }
    }
}
#endif // ex5

#ifdef ex6
/* Escreva um programa para determinar o dia da semana de uma determinada
    data (dia, mes e ano)*/
    main()
    {
        int dia, mes, ano, dataSemana, bissexto;
        static char nomeSemana[7][4] = {"Dom", "Seg", "Ter", "Qua", "Qui", "Sex", "Sab"};
        static int mesesDias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        static int mesesAddTot[12] = {0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5};

        for(;;){
            do
            {
                printf("Dia: ");
                scanf("%d",&dia);
                if (dia > 31 || dia < 1)
                    printf("Dia invalido!\n");
            }while(dia > 31 || dia < 1);
            do
            {
                printf("Mes: ");
                scanf("%d",&mes);
                if (mes > 13 || mes < 1)
                    printf("Mes invalido!\n");
                else if (dia > mesesDias[mes-1] && !(dia == 29 && mes == 2))
                    printf("Dia do mes nao condiz.!\n");
            }while (mes > 13 || mes < 1 || (dia > mesesDias[mes-1] && !(dia == 29 && mes == 2)));
            do
            {
                printf("Ano: ");
                scanf("%d",&ano);

                bissexto = !(ano % 400 != 0 && !(ano % 4 == 0 && ano % 100 != 0));
                if (mes == 2 && dia == 29 && !bissexto)
                    printf("Ano bissexto invalido!\n");
            }while(!bissexto && mes == 2 && dia == 29);

            dataSemana = (6 + ano + (ano/4) - (ano/100) + (ano/400) + mesesAddTot[mes-1] - (bissexto && mes <=2) + dia) % 7;
            printf("%d/%d%/%d = %s\n",dia, mes, ano, nomeSemana[dataSemana]);

             printf("Deseja digitar mais valores? S/N");
             getchar();
             char resp = getchar();
             if(resp == 'N' || resp == 'n')
                 break;
        }

    }
#endif // ex6


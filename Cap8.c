#include <stdio.h>
#define ex1

#ifdef ex1
/* Escreva um programa que receba via teclado usando ponteiros um char,
    int, long, unsigned,float, double, unsigned long e unsigned char,
    e imprima-os no video utilizando ponteiros e o operador de conteudo *
    no seguinte formato:

            10        20        30        40        50        60
    123456789012345678901234567890123456789012345678901234567890
        int                 long                unsigned
                  float               double              char
             unsigned long       unsigned char*/
    main(){
        char a,*pc;
        int b,*pi;
        long c,*pl;
        unsigned d,*pu;
        float e,*pf;
        double f,*pd;
        unsigned long g,*pul;
        unsigned char h,*puc;

        pc = &a;
        pi = &b;
        pl = &c;
        pu = &d;
        pf = &e;
        pd = &f;
        pul = &g;
        puc = &h;

        for(;;){
            printf("Digite um valor para char\n");
            scanf("%c",pc);
            printf("Digite um valor para int\n");
            scanf("%d",pi);
            printf("Digite um valor para long\n");
            scanf("%ld",pl);
            printf("Digite um valor para unsigned\n");
            scanf("%u",pu);
            printf("Digite um valor para float\n");
            scanf("%f",pf);
            printf("Digite um valor para double\n");
            scanf("%lf",pd);
            printf("Digite um valor para unsigned long\n");
            scanf("%lu",pul);
            printf("Digite um valor para unsigned char\n");
            scanf("%c",puc);

            printf("        10        20        30        40        50        60\n");
            printf("123456789012345678901234567890123456789012345678901234567890\n");
            printf("    %-6d              %-11ld         %-5u\n",*pi,*pl,*pu);
            printf("              %-8.1e            %-8.1e            %-4c\n",*pf,*pd,*pc);
            printf("         %-10lu           %-3c\n",*pul,*puc);

            printf("Deseja rodar o programa novamente? S/N\n");
            char resp2 = getchar();
            getchar();
            if(resp2 == 'N' || resp2 == 'n'){
                break;
            }
        }


    }
#endif // ex1

#ifdef ex2
/*Com a estrutura abaixo, defina um vetor de estruturas de 4 elementos.
    Receba os dados pelo teclado usando ponteiros e imprima-os no video
    também usando ponteiros. Utilize um comando de loop. (vetor de estruturas)
              nome, end, cidade, estado, cep*/
    struct info{
        char nome [40];
        char end[40];
        char cidade[20];
        char estado[3];
        char cep[40];
    };
    main(){
        struct info dados[4], *p[4];
        p[0] = &dados[0];
        p[1] = &dados[1];
        p[2] = &dados[2];
        p[3] = &dados[3];
        int resp;
        int  contador = 0;
        for(;;){
            printf("1 - Entrada de dados\n");
            printf("2 - Listar dados\n");
            printf("3 - Sair\n");
            printf("Opcao:\n");
            scanf("%d",&resp);
            getchar();


            switch(resp){
                case 1:
                    {
                      if(contador == 4){
                        printf("Voce nao pode mais inserir usuarios\n");
                      }
                      else{
                        printf("Digite o nome:");
                        gets(p[contador]->nome);

                        printf("Digite o endereco:");
                        gets(p[contador]->end);

                        printf("Digite o cidade:");
                        gets(p[contador]->cidade);

                        printf("Digite o estado:");
                        gets(p[contador]->estado);

                        printf("Digite o cep:");
                        scanf("%s",p[contador]->cep);

                        contador++;
                      }
                      break;
                    }
                case 2:
                    {
                        if(contador == 0){
                            printf("Nao ha usuarios para mostrar\n\n");
                        }
                        else{
                            for(int n=0; n<contador;n++){
                                printf("\t\tPESSOA %d\n",n + 1);
                                printf("Nome: %s\n",p[n]->nome);
                                printf("Endereco: %s\n",p[n]->end);
                                printf("Cidade: %s\n",p[n]->cidade);
                                printf("Estado: %s\n",p[n]->estado);
                                printf("Cep: %s\n\n",p[n]->cep);
                            }
                        }
                        break;
                    }
                case 3:
                    {
                        return 0;
                        break;
                    }
                default:
                    {
                        printf("Digite um numero valido\n");
                        break;
                    }
            }
            printf("Deseja rodar o programa novamente? S/N\n");
            char resp2 = getchar();
            getchar();
            if(resp2 == 'N' || resp2 == 'n'){
                break;
            }
        }
    }
#endif // ex2

#ifdef ex3
/*Receba um caracter via teclado usando ponteiros e compara com o vetor abaixo
    usando ponteiros. Mostre como resultado se são EXISTE ou NAO EXISTE.
    vetor -> b,d,f,h,j,l,m,o,q,s,u,w,y*/
    main(){
        int local=-1;
        char resp,resp2;
        char a [13] = {'b','d','f','h','j','l','m','o','q','s','u','w','y'};
        char *p[13];
        for(int cont =0; cont<13; cont++){
            p[cont] = &a[cont];
        }

        for(;;){
            printf("Digite um caracter\n");
            resp = getchar();
            getchar();
            for(int cont=0;cont<13;cont++){
                if(resp == *p[cont]){
                    local = cont;
                    break;
                }
            }
            if(local!=-1){
                printf("A letra foi encontrada na posicao %d\n", local);
            }
            else{
                printf("A letra nao esta na funcao\n");
            }
            local = -1;
            printf("Deseja rodar o programa novamente? S/N\n");
            resp2 = getchar();
            getchar();
            if(resp2 == 'N' || resp2 == 'n'){
                break;
            }
        }
    }
#endif // ex3

#ifdef ex4
/* Receba 2 string de ate 10 caracteres via teclado, compare-as usando ponteiros
    e mostre como resultado se são IGUAIS ou DIFERENTES.*/
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

            char a[11],*pa[11];
            char b[11],*pb[11];
            pa[0] = &a[0]; pb[0] = &b[0];
            pa[1] = &a[1]; pb[1] = &b[1];
            pa[2] = &a[2]; pb[2] = &b[2];
            pa[3] = &a[3]; pb[3] = &b[3];
            pa[4] = &a[4]; pb[4] = &b[4];
            pa[5] = &a[5]; pb[5] = &b[5];
            pa[6] = &a[6]; pb[6] = &b[6];
            pa[7] = &a[7]; pb[7] = &b[7];
            pa[8] = &a[8]; pb[8] = &b[8];
            pa[9] = &a[9]; pb[9] = &b[9];
            pa[10] = &a[10]; pb[10] = &b[10];

            printf("digite as letras da string 1:\n");
            scanf("%s",&a[0]);
            printf("a string e %s\n\n",a);
            printf("digite as letras da string 2:\n");
            scanf("%s",&b[0]);
            printf("a string e %s\n\n",b);

           for(int cont=0;cont<tam;cont++){
                if(*pa[cont]==*pb[cont]){
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
#endif // ex4

#ifdef ex5
/*Escreva um programa que receba via teclado numeros inteiros positivos usando
    ponteiros. Quando o numero digitado for negativo o programa deve parar e calcula
    a media dos valores digitados e mostrar o resultado. Todos os calculos devem ser
    feitos usando ponteiro.
*/
 main(){
        for(;;){
            int num,var=0,cont=0,*pa,*pb,*pc;
            float media,*pd;
            pa = &num;
            pb = &var;
            pc = &cont;
            pd = &media;
            for(;;){
                printf ("Digite um numero\n");
                scanf("%d",pa);
                if (*pa >= 0 ){
                    *pc += 1;
                    *pb += *pa;
                }
                else{
                    break;
                }
            }

            *pd = (float)*pb / *pc;
            printf ("A media e %.2f", *pd);
            printf("\nDeseja rodar o programa novamente? S/N\n");
            getchar();
            char resp = getchar();
            if(resp=='n' || resp=='N'){
                break;
            }
        }
}
#endif // ex5

#ifdef ex6
/*Escreva um programa que contenha uma estrutura representando uma data
    valida. Essa estrutura deve conter os campos dia, mes e ano. Em seguida,
    leia duas datas e armazene nessa estrutura usando ponteiros. Calcule e exiba o
    numero de dias que decorreram entre as duas datas usando ponteiros.*/
    struct dados{
        int dia;
        int mes;
        int ano;
    };
    main(){
        struct dados d[2], *p[2];
        p[0] = &d[0];
        p[1] = &d[1];
        for(;;){
            do{
                printf("Digite o primeiro dia\n");
                scanf("%d",&p[0]->dia);
                if(p[0]->dia>31 || p[0]->dia<=0)
                    printf("Digite um dia valido\n\n");
            }while(p[0]->dia>31 || p[0]->dia<=0);
            do{
                printf("Digite o primeiro mes\n");
                scanf("%d",&p[0]->mes);
                if(p[0]->mes>12 || p[0]->mes<=0)
                    printf("Digite um mes valido\n\n");
            }while(p[0]->mes>12 || p[0]->mes<=0);
            do{
                printf("Digite o primeiro ano\n");
                scanf("%d",&p[0]->ano);
                if(p[0]->ano>2020 || p[0]->ano<=0)
                    printf("Digite um ano valido\n\n");
            }while(p[0]->ano>2020 || p[0]->ano<=0);
            do{
                printf("Digite o segundo dia\n");
                scanf("%d",&p[1]->dia);
                if(p[1]->dia>31 || p[1]->dia<=0)
                    printf("Digite um dia valido\n\n");
            }while(p[1]->dia>31 || p[1]->dia<=0);
            do{
                printf("Digite o segundo mes\n");
                scanf("%d",&p[1]->mes);
                if(p[1]->mes>12 || p[1]->mes<=0)
                    printf("Digite um mes valido\n\n");
            }while(p[1]->mes>12 || p[1]->mes<=0);
            do{
                printf("Digite o segundo ano\n");
                scanf("%d",&p[1]->ano);
                if(p[1]->ano>2020 || p[1]->ano<=0)
                    printf("Digite um ano valido\n\n");
            }while(p[1]->ano>2020 || p[1]->ano<=0);

            if(p[0]->ano > p[1]->ano){
                printf("O primeiro ano e maior que o segundo. Digite novamente.\n\n");
            }
            else{
                p[1]->ano = p[1]->ano - p[0]->ano;
                p[1]->ano = p[1]->ano * 365;
                p[1]->mes = p[1]->mes - p[0]->mes;
                p[1]->mes = p[1]->mes * 30;
                p[1]->dia = p[1]->dia - p[0]->dia;
                p[1]->dia = p[1]->dia + p[1]->mes + p[1]->ano;
                printf("Dias decorridos: %d",p[1]->dia);
            }



            printf("\nDeseja rodar o programa novamente? S/N\n");
            getchar();
            char resp = getchar();
            if(resp=='n' || resp=='N'){
                break;
            }

        }
    }
#endif // ex6

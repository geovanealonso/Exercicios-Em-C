#include <stdio.h>
#define ex5


#ifdef ex1
/*Escreva um programa para adivinhar um numero entre 1 e 99 que o usuario
    pensou. Digite via teclado os simbolos =, > ou < a cada pergunta. Utilize o
    comando if-else.*/
    main(){
        for(;;){
            int num,chute=50;
            char x;

            do {
                printf("Digite o valor para o programa adivinhar, entre 1 e 99\n");
                scanf("%d",&num);
                if (num<1 || num>99){
                    printf ("Digite um numero valido\n\n");
                }
            }while(num<1 || num>99);

            printf("\n\t\tDigite apenas '>', '<' ou '='\n\n");

            for(;;){
                printf ("O numero e %d?\n", chute);

                getchar();
                x = getchar();

                if (x == '>'){
                    chute++;
                }
                if (x == '<'){
                    chute--;
                }
                if (x == '='){
                    printf ("\n\n\n\n\n\n\n\n\n O NUMERO E %d\n\n",chute);
                    break;
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
#endif // ex1

#ifdef ex2
/*Resecreva o programa do execicio anterior agora utilizando o comando switch.
    Conte o n. de tentativas e imprima o resultado no video.
*/
    main(){
    for(;;){
        int num,chute=50,cont=0;
        char x;

        do {
            printf("Digite o valor para o programa adivinhar, entre 1 e 99\n");
            scanf("%d",&num);
            if (num<1 || num>99){
                printf ("Digite um numero valido\n\n");
            }
        }while(num<1 || num>99);

        for(;;){
            printf ("O numero e %d?\n", chute);
            getchar();
            x = getchar();
            cont++;

            switch (x){
                case '>':
                {
                    chute+=1;
                    break;
                }
                case '<':
                {
                    chute-=1;
                    break;
                }
                case '=':
                {
                    printf ("\n\n\n\n\n\n\n\n\n O NUMERO E %d\n\n",chute);
                    printf("\n%d tentativas", cont);
                    break;
                }
            }

            if (x == '='){
                break;
            }

        }
        cont=0;
        printf("\nDeseja rodar o programa novamente? S/N\n");
        getchar();
        char resp = getchar();
        if(resp=='n' || resp=='N'){
            break;
        }
    }
}
#endif // ex2

#ifdef ex3
/*  De um modo geral, as ligações telefônicas são cobradas pelas suas durações.
    O sistema registra os instantes em que a ligação foi iniciada e concluída.
    Escreva um programa que recebe via teclado dois instantes dados em
    horas, minutos e segundo e determina o intervalo de tempo
    (em horas, minutos e segundos) decorrido entre eles.*/
    main(){
        for(;;){
            int h1,h2,h3,m1,m2,m3,s1,s2,s3,a,b;
            char x;
            for (;;){
                do{
                    printf("Digite a hora de inicio da ligacao\n");
                    scanf("%d",&h1);
                    if (h1<0 || h1>23)
                        printf("digite um numero valido\n\n");
                }while (h1<0 || h1>23);
                do{
                    printf("Digite o minuto de inicio da ligacao\n");
                    scanf("%d",&m1);
                    if (m1<0 || m1>59)
                        printf("digite um numero valido\n\n");
                }while (m1<0 || m1>59);
                do{
                    printf("Digite o segundo de inicio da ligacao\n");
                    scanf("%d",&s1);
                if (s1<0 || s1>59)
                    printf("digite um numero valido\n\n");
                }while (s1<0 || s1>59);
                do{
                    printf("Digite a hora do fim da ligacao\n");
                    scanf("%d",&h2);
                    if (h2<0 || h2>23)
                        printf("digite um numero valido\n\n");
                }while (h2<0 || h2>23);
                do{
                    printf("Digite o minuto do fim da ligacao\n");
                    scanf("%d",&m2);
                    if (m2<0 || m2>59)
                        printf("digite um numero valido\n\n");
                }while (m2<0 || m2>59);
                do{
                    printf("Digite o segundo do fim da ligacao\n");
                    scanf("%d",&s2);
                    if (s2<0 || s2>59)
                        printf("digite um numero valido\n\n");
                }while (s2<0 || s2>59);
                printf ("HORARIO DE INICIO: %d h %d m % d s\n",h1,m1,s1);
                printf ("HORARIO DO FIM: %d h %d m %d s\n",h2,m2,s2);
                printf ("\t\t\tOs valores estao corretos?\n");
                printf("\t\t\tNAO digite: n\n");
                printf("\t\t\tSIM digite: s\n");
                getchar();
                x=getchar();
                if(x=='s' || x=='S'){
                    break;
                }
            }
            h1 *= 3600; //horas para segundos
            m1 *= 60; //minutos para segundos
            a = h1 + m1 + s1;
            h2 *= 3600;
            m2 *=60;
            b = h2 + m2 + s2;
            b -= a;
            h3 = b/3600;
            m3 = (b % 3600) / 60;
            s3 = b%60;
            printf("A LIGACAO TEVE DURACAO DE %dhrs %dmin %dseg\n",h3,m3,s3);
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
/*  Escreva um programa que receba via teclado numeros inteiros positivos.
    Quando o numero digitado for negativo o programa deve parar e calcula a
    media dos valores positivos digitados.*/
    main(){
        for(;;){
            int num,var=0,cont=0;
            float media;
            for(;;){
                printf ("Digite um numero\n");
                scanf("%d",&num);
                if (num >= 0 ){
                    cont++;
                    var += num;
                }
                else{
                    break;
                }
            }

            media = (float)var / cont;
            printf ("A media e %.2f", media);
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
/*Escreva um programa que realize arredondamentos de números utilizando a
    seguinte regra:
    - se a parte fracionaria for menor ou igual a 0,24 o n. e' arredonda para 0
    - se a parte fracionaria for maior ou igual a 0,25 e menor ou igual a 0,74
      o numero e' arredondado para 0,5
    - se a parte fracionaria for maior ou igual a 0,75 o numero e' arredondado
      para o inteiro imediatamente superior*/
      main(){
      float a,b;
      int x;
      for(;;){
        do{
        printf("Digite um numero float\n");
        scanf("%f",&a);
        if(a<0)
        {
            printf("DIGITE UM NUMERO POSITIVO\n");
        }
    }while(a<0);

        b = a;
        a -= (int)a;

        if(a<0.25)
        {
            printf("NUMERO ARREDONDADO = %.0f\n",b - a);
        }
            else if((a>=0.25) && (a<0.75))
            {
                b -= a;
                b += 0.5;
                printf("NUMERO ARREDONDADO = %.1f\n",b);
            }
                else if(a>=0.75)
                {
                    b -= a;
                    printf("NUMERO ARREDONDADO = %.0f\n",b+1);
                }

        printf ("Digite 2 para sair do loop\n");
        printf("\tou\n");
        printf("Digite outro numero para continuar\n");
        scanf ("%d",&x);
        if (x==2){
            break;
            }

      }

      }
#endif // ex5

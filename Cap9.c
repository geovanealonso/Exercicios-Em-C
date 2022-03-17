#include <stdio.h>
#include <string.h>
#define ex1

#ifdef ex1
/*Escreva um programa que tem uma estrutura da dados com os membros abaixo.
    A estrutura é uma variavel local na função main().Receba via teclado o
    conteudo de cada um dos membros numa função e imprima-os no video no
    seguinte fomato(também numa função).

            10        20        30        40        50        60        70
    1234567890123456789012345678901234567890123456789012345678901234567890
        char      int       long                float               double
              unsigned char       unsigned int        unsigned long*/
    struct dados{
        char a;
        int b;
        long c;
        unsigned d;
        float e;
        double f;
        unsigned long g;
        unsigned char h;
    };

    void receber(struct dados *p);
    void printar(struct dados *p);
    main(){
        struct dados var;
        struct dados *p;
        p = &var;
        for(;;){

            receber(p);
            printar(p);



            printf("Deseja rodar o programa novamente? S/N\n");
            char resp2 = getchar();
            getchar();
            if(resp2 == 'N' || resp2 == 'n'){
                break;
            }
        }


    }
    void receber(struct dados *p){
        printf("Digite um valor para char\n");
        scanf("%c",&p->a);
        printf("Digite um valor para int\n");
        scanf("%d",&p->b);
        printf("Digite um valor para long\n");
        scanf("%ld",&p->c);
        printf("Digite um valor para unsigned\n");
        scanf("%u",&p->d);
        printf("Digite um valor para float\n");
        scanf("%f",&p->e);
        printf("Digite um valor para double\n");
        scanf("%lf",&p->f);
        printf("Digite um valor para unsigned long\n");
        scanf("%lu",&p->g);
        printf("Digite um valor para unsigned char\n");
        getchar();
        scanf("%c",&p->h);
        getchar();
        return;
    }

    void printar(struct dados *p){
        printf("        10        20        30        40        50        60        70\n");
        printf("1234567890123456789012345678901234567890123456789012345678901234567890\n");
      //printf("    -128      -32768    -2000000000         -3.4e38             -1.7e308");
      //printf("          255                 65535               4294967295");
        printf("    %-4c      %-6d    %-11ld         %-8.1e            %-8.1e\n",p->a,p->b,p->c,p->e,p->f);
        printf("          %-3c                 %-5u               %-10lu\n",p->h,p->d,p->g);

    }

#endif // ex1

#ifdef ex2
/*Escreva um programa que receba n valores via teclado, receba também a
    operação a ser executada. Quando for digitado "=" o programa deve mostrar
    o resultado acumulado dos n valores. As operações aritmeticas e a entrada
    de dados devem ser funções que recebe os valores usando ponteiros.
*/
int returnOperation(int* number, char* operation) {
  printf("Operacoes (+, -, /, *, =): ");
  *operation = getchar();

  if (*operation == '=') {
    return 0;
  }

  getchar();

  printf("\nNumero: ");
  scanf("%d", number);

  return 1;
}

void calculate(int* valor, char* operation, int* result) {
  switch (*operation) {
    case '+':
      *result += *valor;
      break;
    case '-':
      *result -= *valor;
      break;
    case '/':
      *result /= *valor;
      break;
    case '*':
      *result *= *valor;
      break;
  }
  getchar();
}

void main() {
  int running = 1;

  while (running == 1) {
    int number = 0, result = 0, run;
    char operation;

    do {
      run = returnOperation(&number, &operation);
      calculate(&number, &operation, &result);
    } while (run == 1);

    printf("Resultado: %d \n", result);

    printf("\n\nDeseja continuar? (1) Sim (0) Não: ");
    scanf("%d", &running);
    system("cls");
  }
}
#endif // ex2

#ifdef ex3
/*Escreva um programa que receba uma letra via teclado. Escreva uma funcao que
    pesquise esta letra dentro do vetor abaixo. Imprima o resultado da pesquisa no
    video na funcao main(). O vetor é uma variavel local na função main().Passe
    como parametro para a funcao o vetor e a letra digitada usando ponteiros.
    Pesquise usando ponteiros. (utilize o comando return)
    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y*/
    int pesquisa(char a[13],char *pa);
    main(){
        char resp,resp2;
        char a [13] = {'b','d','f','h','j','l','m','o','q','s','u','w','y'};
        char *p[13];
        char *pa;


        for(;;){
            printf("Digite um caracter\n");
            resp = getchar();
            getchar();
            pa = &resp;
            int var = pesquisa(a,*pa);
            if(var!=-1){
            printf("A letra foi encontrada na posicao %d\n", var);
            }
            else{
                printf("A letra nao esta na funcao\n");
            }

            printf("Deseja rodar o programa novamente? S/N\n");
            resp2 = getchar();
            getchar();
            if(resp2 == 'N' || resp2 == 'n'){
                break;
            }
        }
    }
    int pesquisa(char a[13],char *pa)
    {
        int local=-1;
        for(int cont=0;cont<13;cont++){
            if(pa == a[cont]){
                local = cont;
                break;
            }
        }

        return (local);
    }
#endif // ex3

#ifdef ex4
/*Escreva um programa que receba em 1 funcao 2 strings de ate' 10 caracteres.
    Os vetores sao declaradas como variavel local na função main().
    Escreva uma funcao que recebe as 2 strings como parametros usando ponteiros
    e compare estas 2 strings.
    Retorne como resultado da comparacao 0 se forem DIFERENTES, 1 se forem
    IGUAIS, 2 se a string 1 for maior que a string 2, 3 se a string 2 for maior
    que a string 1 e 4 se as string tem tamanhos iguais mas são diferentes.*/
    void receber(char *pa[11],char *pb[11]);
    int comparar(char *pa[11],char *pb[11]);
    main(){
        int resul;
        for(;;){

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

            receber(pa,pb);
            resul = comparar(pa,pb);
            printf("Valor retornado: %d",resul);



            printf("\t\t\tDeseja rodar o programa novamente? S/N\n");
            getchar();
            char x = getchar();
            if(x == 'N' || x == 'n'){
                break;
            }
        }
    }
    void receber(char *pa[11],char *pb[11])
    {
        printf("digite as letras da string 1:\n");
        scanf("%s",pa[0]);
        printf("digite as letras da string 2:\n");
        scanf("%s",pb[0]);
    }
    int comparar(char *pa[11],char *pb[11])
    {
        int tama,tamb,i=0;
        tama = strlen(*pa);
        tamb = strlen(*pb);
        if(tama > tamb)
            return 2;
        else if(tamb > tama)
            return 3;
        for(int cont=0;cont<tama;cont++){
            if(*pa[cont]==*pb[cont]){
                i++;
            }
        }

        if(i == tama){
            return 1;
        }
        else{
            return 4;
        }
    }
#endif // ex4

#ifdef ex5
/*Escreva um programa com a estrutura abaixo. Defina um vetor de estruturas
    de 4 elementos como variavel local na funcao main(). Receba os 4 registros
    sequencialmente pelo teclado numa função e imprima todos os registros no
    video em outra funcao. Faça um menu. Utilize ponteiros nas funcoes.
    Coloque no menu a opção de sair tambem. Utilize o comando switch.
    (vetor de estruturas)
                nome, end, cidade, estado, cep*/
 struct pessoa {
  char nome[21];
  char end[51];
  char cidade[51];
  char estado[51];
  char cep[10];
};

void insert(struct pessoa *p){
  int i;
  for (i = 0; i < 4; i++)
  {
    system("cls");

    printf("\nDigite o nome da %i pessoa: ", (i+1));
    scanf("%s", &p[i].nome);

    printf("\nDigite o endereco da %i pessoa: ", (i+1));
    scanf("%s", &p[i].end);

    printf("\nDigite a cidade da %i pessoa: ", (i+1));
    scanf("%s", &p[i].cidade);

    printf("\nDigite o estado da %i pessoa: ", (i+1));
    scanf("%s", &p[i].estado);

    printf("\nDigite o cep da %i pessoa: ", (i+1));
    scanf("%s", &p[i].cep);
  }
}

void list(struct pessoa *p){

    int i;
  	for (i = 0; i < 4; i++)
  	{
		if(p->nome[i] != NULL){
	    printf("\tNome: %s - Endereco: %s - Cidade: %s - Estado: %s - CEP: %s\n\n", p[i].nome, p[i].end, p[i].cidade, p[i].estado, p[i].cep);
		}
	}
	printf("\n\nPressione qualquer coisa para voltar ao menu... ");
    getch();
}

void main() {
  int menu;
  struct pessoa pessoas [4];

  while(1){
    system("cls");

    printf("\n(1) Inserir dados");
    printf("\n(2) Listar dados");
    printf("\n(3) Sair");
    printf("\n\n-> Digite sua acao: ");

    scanf("%i", &menu);
    getchar();

    switch (menu)
    {
      case 1:
        insert(pessoas);
      break;
      case 2:
        list(pessoas);
      break;
      default:
        exit(0);
      break;
    }
  }
}
#endif // ex5

#ifdef ex6
/* Acrescente ao menu do exercicio anterior as funcoes de procura, altera e
    exclui um registro.*/
    struct pessoa {
  char nome[21];
  char end[51];
  char cidade[51];
  char estado[51];
  char cep[10];
};

void insert(struct pessoa *p){
  int i;
  for (i = 0; i < 4; i++)
  {
    system("cls");

    printf("\nDigite o nome da %i pessoa: ", (i+1));
    scanf("%s", &p[i].nome);

    printf("\nDigite o endereco da %i pessoa: ", (i+1));
    scanf("%s", &p[i].end);

    printf("\nDigite a cidade da %i pessoa: ", (i+1));
    scanf("%s", &p[i].cidade);

    printf("\nDigite o estado da %i pessoa: ", (i+1));
    scanf("%s", &p[i].estado);

    printf("\nDigite o cep da %i pessoa: ", (i+1));
    scanf("%s", &p[i].cep);
  }
}

void list(struct pessoa *p){

  int i;
  for (i = 0; i < 4; i++)
  {
		if(p->nome[i] != NULL){
      printf("\tNome: %s - Endereco: %s - Cidade: %s - Estado: %s - CEP: %s\n\n", p[i].nome, p[i].end, p[i].cidade, p[i].estado, p[i].cep);
		}
	}
	printf("\n\nPressione qualquer coisa para voltar ao menu... ");
  getch();
}

void search(struct pessoa *p){

  char nameText[21];

  printf("\n\nPesquisar nome: ");
  gets(nameText);

  int finded = 0;
  int j;
  int i;
  int achados = 0;
  for (i = 0; i < 4; i++)
  {
    if(p->nome != NULL){
      for(j = 0; j < 21 && (nameText[j] != '\0' || p[i].nome[j] != '\0'); j++) {
        if (nameText[j] == p[i].nome[j]){
          finded++;
        }
        else{
          finded = 0;
          break;
        }
      }
      if(finded != 0){
        achados++;
        printf("\tNome: %s - Endereco: %s - Cidade: %s - Estado: %s - CEP: %s\n\n", p[i].nome, p[i].end, p[i].cidade, p[i].estado, p[i].cep);
      }
		}
  }
  if (achados == 0) {
    printf("\n\tNenhum registro foi encontrado.");
  }
	printf("\n\nPressione qualquer coisa para voltar ao menu... ");
  getch();
}

void update(struct pessoa *p){

  char nameText[21];

  printf("\n\nPesquisar nome: ");
  gets(nameText);

  int finded = 0;
  int j;
  int i;
  int achados = 0;
  for (i = 0; i < 4; i++)
  {
    if(p->nome != NULL){
      for(j = 0; j < 21 && (nameText[j] != '\0' || p[i].nome[j] != '\0'); j++) {
        if (nameText[j] == p[i].nome[j]){
          finded++;
        }
        else{
          finded = 0;
          break;
        }
      }
      if(finded != 0){
        achados++;
        printf("\tNome: %s - Endereco: %s - Cidade: %s - Estado: %s - CEP: %s\n\n", p[i].nome, p[i].end, p[i].cidade, p[i].estado, p[i].cep);

        printf("\nDigite o novo nome: ");
        scanf("%s", &p[i].nome);

        printf("\nDigite o novo endereco: ");
        scanf("%s", &p[i].end);

        printf("\nDigite a nova cidade: ");
        scanf("%s", &p[i].cidade);

        printf("\nDigite o novo estado: ");
        scanf("%s", &p[i].estado);

        printf("\nDigite o novo cep: ");
        scanf("%s", &p[i].cep);
        break;
      }
		}
  }
  if (achados == 0) {
    printf("\n\tNenhum registro foi encontrado.");
  }
	printf("\n\nPressione qualquer coisa para voltar ao menu... ");
  getch();
}

void delete(struct pessoa *p){

  char nameText[21];

  printf("\n\nPesquisar nome: ");
  gets(nameText);

  int finded = 0;
  int j;
  int i;
  int achados = 0;
  for (i = 0; i < 4; i++)
  {
    if(p->nome != NULL){
      for(j = 0; j < 21 && (nameText[j] != '\0' || p[i].nome[j] != '\0'); j++) {
        if (nameText[j] == p[i].nome[j]){
          finded++;
        }
        else{
          finded = 0;
          break;
        }
      }
      if(finded != 0){
        achados++;
        printf("\tNome: %s - Endereco: %s - Cidade: %s - Estado: %s - CEP: %s\n\n", p[i].nome, p[i].end, p[i].cidade, p[i].estado, p[i].cep);
        printf("Registro deletado!");
        p[i].nome[0] = '\0';
        p[i].end[0] = '\0';
        p[i].cidade[0] = '\0';
        p[i].estado[0] = '\0';
        p[i].cep[0] = '\0';
        break;
      }
		}
  }
  if (achados == 0) {
    printf("\n\tNenhum registro foi encontrado.");
  }
	printf("\n\nPressione qualquer coisa para voltar ao menu... ");
  getch();
}

void main() {
  int menu;
  struct pessoa pessoas [4];

  while(1){
    system("cls");

    printf("\n(1) Inserir dados");
    printf("\n(2) Listar dados");
    printf("\n(3) Procurar dados pelo nome");
    printf("\n(4) Atualizar dados pelo nome");
    printf("\n(5) Excluir dados pelo nome");
    printf("\n(6) Sair");
    printf("\n\n-> Digite sua acao: ");

    scanf("%i", &menu);
    getchar();

    switch (menu)
    {
      case 1:
        insert(pessoas);
      break;
      case 2:
        list(pessoas);
      break;
      case 3:
        search(pessoas);
      break;
      case 4:
        update(pessoas);
      break;
      case 5:
        delete(pessoas);
      break;
      default:
        exit(0);
      break;
    }
  }
}
#endif // ex6

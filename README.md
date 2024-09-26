# Exercicios-Em-C
### Alguns exercícios que fiz para aprender o básico de programação em C.
### Os temas são dividos em capítulos, com cerca de 5 exercícios cada.

# Capítulo 1 Exercícios
1. Escreva um programa que receba dados via teclado para variaveis do tipo short,
    long, int, float, double e um char e imprima-os no video no seguinte
    formato:

             10        20        30        40        50        60
     12345678901234567890123456789012345678901234567890123456789012345
         short               long                int
                   float               double              char
                
2. Escreva um programa que receba via teclado um tempo em segundos e converta um
    para horas, minutos e segundos.
    Ex.: recebe 3850 segundos que converte para 1h 4min 10s.

3. Escreva um programa para ler um numero inteiro, positivo de tres digitos, e gere
    outro número formado pelos dígitos invertidos do número lido.
    Ex:   NúmeroLido = 123
        NúmeroGerado = 321

4.Escreva um programa que permute o conteúdo de duas variáveis sem utilizar uma
    variável auxiliar.

5. Escreva um programa que lê um valor em reais e calcula qual o menor número
    possível de notas de $100, $50, $10, $5, $2 e $1 em que o valor lido pode ser
    decomposto. Escrever o valor lido e a relação de notas necessárias.


# Capítulo 2 Exercícios
1. screva um programa para adivinhar um numero entre 1 e 99 que o usuario
    pensou. Digite via teclado os simbolos =, > ou < a cada pergunta. Utilize o
    comando if-else.

2. Resecreva o programa do execicio anterior agora utilizando o comando switch.
    Conte o n. de tentativas e imprima o resultado no video.

3. De um modo geral, as ligações telefônicas são cobradas pelas suas durações.
    O sistema registra os instantes em que a ligação foi iniciada e concluída.
    Escreva um programa que recebe via teclado dois instantes dados em
    horas, minutos e segundo e determina o intervalo de tempo
    (em horas, minutos e segundos) decorrido entre eles.

4. Escreva um programa que receba via teclado numeros inteiros positivos.
    Quando o numero digitado for negativo o programa deve parar e calcula a
    media dos valores positivos digitados.

5. Escreva um programa que realize arredondamentos de números utilizando a
    seguinte regra:
    - se a parte fracionaria for menor ou igual a 0,24 o n. e' arredonda para 0
    - se a parte fracionaria for maior ou igual a 0,25 e menor ou igual a 0,74
      o numero e' arredondado para 0,5
    - se a parte fracionaria for maior ou igual a 0,75 o numero e' arredondado
      para o inteiro imediatamente superior

# Capítulo 3 Exercícios
1. Escreva um programa para receber via teclado em vetores 3 int, 3 long,
    3 unsigned, 3 float e 3 double e imprima-os no video no seguinte formato:

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double

2. Receba via teclado dez valores inteiros e ordene por ordem crescente assim
que sao digitados. Guarde-os em um vetor. Mostre ao final os valores em ordem.

3. Um vetor é palíndromo se ele não se altera quando as posições dos componentes
    são invertidos. Por exemplo, o vetor v = {1, 3, 5, 2, 2, 5, 3, 1} é palíndromo.
    Escreva um programa que verifique se um vetor é palíndromo. Receba o vetor
    via teclado (tamanho 10)

4. efina 2 vetores bidimensionais do tipo inteiro de 2x3. Escreva um programa
    que recebe os dados via teclado para esses 2 vetores. Usando o operador
    subtracao "-", subtraia os elementos de mesmo indice dos 2 vetores
    e guarde o resultado num 3. vetor. Imprima na tela o indice, os valores e
    o resultado dos 6 elementos dos vetores

5. Receba via teclado valores para uma matriz 5 x 5. Receba via teclado um valor X.
    O programa dever fazer a busca desse valor x na matriz e, ao final escrever a
    localizacao (linha e coluna) ou uma mensagem de ”nao encontrado”

# Capítulo 4 Exercícios
1. Escreva um programa para receber 5 nomes, com até 7 caracteres, via teclado
    e imprima-os no video no seguinte formato:

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      nome1                                   nome5
                nome2               nome4
                          nome3

2. Escreva um programa para receber 3 strings de ate 10 caracteres cada via
    teclado e imprima-as no video no seguinte formato:
    (utilize vetores multidimensionais)

            10        20        30        40        50        60
    123456789012345678901234567890123456789012345678901234567890
        string1             string2             string3

3. Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras maiusculas. 

4. Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras minusculas.

5. Receba 2 string de ate 10 caracteres via teclado, compare-as mostrando como
    resultado se são IGUAIS ou DIFERENTES

# Capítulo 5 Exercícios
1. Escreva um programa que receba via teclado 2 numeros inteiros e
    imprima-os no video com o resultado das 4 operacoes aritmeticas

2. Reescreva o exercicio anterior utilizando operadores de atribuicao
    composta

3. Escreva um programa que receba via teclado 2 numeros inteiros e execute
    as operacoes logicas bit a bit AND, OU, OU EXCLUSIVO e imprima-os no
    video no formato decimal e hexadecimal.

4. Escreva um programa que receba um numero inteiro via teclado, divida-o
        por 8 e multiplique-o por 8 utilizando os operadores de deslocamento.
        Imprima no video o numero recebido e os resultados obtidos.

5. Escreva um programa para determinar a idade de uma pessoa, em anos, meses e
    dias, recebendo via teclado a data (dia, mes e ano) do seu nascimento e a
    data (dia, mes e ano) atual

# Capítulo 6 Exercícios
1. Escreva um programa que receba uma letra via teclado. Escreva uma funcao que
    pesquise esta letra dentro do vetor abaixo. Imprima o resultado da pesquisa
    no video na funcao main(). Passe como informacao para a funcao a letra
    digitada.(utilize o comando return). O vetor deve ser uma variavel global.

    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y

2. Escreva um programa que receba na funcao main() 2 valores inteiro. Escreva
    uma funcao para cada operacoes aritmeticas e passe como parametro os 2
    valores recebidos na funcao main(). Retorne os resultados usando o comando
    return e imprima-os no video na funcao main().

3. Reescreva o programa do exercicio anterior para receber via teclado n
    valores. Os n valores nao sao definidos previamente.

4. Aproveitando o programa anterior inclua a selecao das operacoes aritmeticas
    para transforma-lo em uma calculadora. (utilize o comando switch).

5. Escreva um programa que receba na funcao main() 2 strings de ate' 10 caracteres.
    Escreva as funcoes que compare estas 2 strings e retorne se sao IGUAIS 1 e
    se DIFERENTES 0. Declare as strings como variavel global.

# Capítulo 7 Exercícios
1. Escreva um programa que tem uma estrutura da dados com os membros abaixo.
    Receba dados via teclado e imprima estes conteudos no video no seguinte
    formato.
             char, int, long, float, double
             unsigned char, unsigned int, unsigned long,

            10        20        30        40        50        60        70
    1234567890123456789012345678901234567890123456789012345678901234567890
        char      int       long                float               double
              unsigned char       unsigned int        unsigned long

2. Escreva um programa com a estrutura abaixo. Defina um vetor de estruturas
    de 4 elementos. Receba os dados pelo teclado e imprima-os no video. Fa�a um
    menu. (vetor de estruturas)
		nome, end, cidade, estado, cep

3. Crie uma estrutura para representar as coordenadas de um ponto no plano
    (posicoes X e Y). Em seguida, declare e leia do teclado um ponto e exiba a
    distancia dele ate' a origem das coordenadas, isto �, posi��o (0, 0). Para
    realizar o c�lculo, utilize a f�rmula a seguir:
           d = raiz quadrada de  (XB - XA)ao 2 +(YB -YA)ao 2
    Em que:
    d = dist�ncia entre os pontos A e B
    X = coordenada X em um ponto
    Y = coordenada Y em um ponto*

# Capítulo 8 Exercícios
1. Escreva um programa que receba via teclado usando ponteiros um char,
    int, long, unsigned,float, double, unsigned long e unsigned char,
    e imprima-os no video utilizando ponteiros e o operador de conteudo *
    no seguinte formato:

            10        20        30        40        50        60
    123456789012345678901234567890123456789012345678901234567890
        int                 long                unsigned
                  float               double              char
             unsigned long       unsigned char

2. Com a estrutura abaixo, defina um vetor de estruturas de 4 elementos.
    Receba os dados pelo teclado usando ponteiros e imprima-os no video
    tamb�m usando ponteiros. Utilize um comando de loop. (vetor de estruturas)
              nome, end, cidade, estado, cep

3. Receba um caracter via teclado usando ponteiros e compara com o vetor abaixo
    usando ponteiros. Mostre como resultado se s�o EXISTE ou NAO EXISTE.
    vetor -> b,d,f,h,j,l,m,o,q,s,u,w,y

4.Receba 2 string de ate 10 caracteres via teclado, compare-as usando ponteiros
    e mostre como resultado se s�o IGUAIS ou DIFERENTES.

5. Escreva um programa que receba via teclado numeros inteiros positivos usando
    ponteiros. Quando o numero digitado for negativo o programa deve parar e calcula
    a media dos valores digitados e mostrar o resultado. Todos os calculos devem ser
    feitos usando ponteiro.

6. Escreva um programa que contenha uma estrutura representando uma data
    valida. Essa estrutura deve conter os campos dia, mes e ano. Em seguida,
    leia duas datas e armazene nessa estrutura usando ponteiros. Calcule e exiba o
    numero de dias que decorreram entre as duas datas usando ponteiros.

# Capítulo 9 Exercícios
1. Escreva um programa que tem uma estrutura da dados com os membros abaixo.
    A estrutura � uma variavel local na fun��o main().Receba via teclado o
    conteudo de cada um dos membros numa fun��o e imprima-os no video no
    seguinte fomato(tamb�m numa fun��o).

            10        20        30        40        50        60        70
    1234567890123456789012345678901234567890123456789012345678901234567890
        char      int       long                float               double
              unsigned char       unsigned int        unsigned long

2. Escreva um programa que receba n valores via teclado, receba tamb�m a
    opera��o a ser executada. Quando for digitado "=" o programa deve mostrar
    o resultado acumulado dos n valores. As opera��es aritmeticas e a entrada
    de dados devem ser fun��es que recebe os valores usando ponteiros.

3. Escreva um programa que receba uma letra via teclado. Escreva uma funcao que
    pesquise esta letra dentro do vetor abaixo. Imprima o resultado da pesquisa no
    video na funcao main(). O vetor � uma variavel local na fun��o main().Passe
    como parametro para a funcao o vetor e a letra digitada usando ponteiros.
    Pesquise usando ponteiros. (utilize o comando return)
    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y

4. Escreva um programa que receba em 1 funcao 2 strings de ate' 10 caracteres.
    Os vetores sao declaradas como variavel local na fun��o main().
    Escreva uma funcao que recebe as 2 strings como parametros usando ponteiros
    e compare estas 2 strings.
    Retorne como resultado da comparacao 0 se forem DIFERENTES, 1 se forem
    IGUAIS, 2 se a string 1 for maior que a string 2, 3 se a string 2 for maior
    que a string 1 e 4 se as string tem tamanhos iguais mas s�o diferentes.

5. Escreva um programa com a estrutura abaixo. Defina um vetor de estruturas
    de 4 elementos como variavel local na funcao main(). Receba os 4 registros
    sequencialmente pelo teclado numa fun��o e imprima todos os registros no
    video em outra funcao. Fa�a um menu. Utilize ponteiros nas funcoes.
    Coloque no menu a op��o de sair tambem. Utilize o comando switch.
    (vetor de estruturas)
                nome, end, cidade, estado, cep

6. Acrescente ao menu do exercicio anterior as funcoes de procura, altera e
    exclui um registro.

# Exercicios Basicos de C

Professor: Guilherme A.

![C-programming-1024x530](https://user-images.githubusercontent.com/68473916/226371932-ed4684f7-fded-4170-802b-20a3271421c2.png)

# Introdução dos Exercicios

A linguagem de programação C é uma das linguagens mais influentes e amplamente usadas na história da programação de computadores. Desenvolvida por Dennis Ritchie na década de 1970, ela é conhecida por sua eficiência, versatilidade e capacidade de construir sistemas de baixo nível até aplicativos de alto nível. Para começar a explorar o mundo da programação em C, é importante entender algumas questões básicas que servem como fundamentos para qualquer programador. <br>

Cada instrução encerra com ; (ponto e vírgula) que faz parte do comando.<br>

```c++
{
ㅤmain() /* função obrigatória */
ㅤ{
ㅤㅤprintf("Olá Mundo!");
ㅤ}
}
```

# Identificadores

São nomes usados para se fazer referência a variáveis, funções, rótulos e
vários outros objetos definidos pelo usuário. O primeiro caracter deve ser uma letra ou
um sublinhado. Os 32 primeiros caracteres de um identificador são significativos. É
case sensitive, ou seja, as letras maiúsculas diferem das minúsculas.<br>

int x; /_é diferente de int X;_/<br>

# Tipos

Quando você declara um identificador dá a ele um tipo. Os tipos principais
podem ser colocados dentro da classe do tipo de objeto de dado. Um tipo de objeto de
dados determina como valores de dados são representados, que valores pode
expressar, e que tipo de operações você pode executar com estes valores. <br>

ex:

```c++
{
ㅤint main() /* função obrigatória */
ㅤ{
ㅤㅤprintf("oi");
ㅤㅤint Inteiro;
ㅤㅤfloat Real;
ㅤㅤchar Caractere;
ㅤ}
}
```

# Operadores

# Operador de atribuição

O operador de atribuição em C é o sinal de igual "=". Ao contrário de outras
linguagens, o operador de atribuição pode ser utilizado em expressões que também
envolvem outros operadores.<br>

#Aritméticos

Os operadores \*, /, + e - funcionam como na maioria das linguagens, o operador
% indica o resto de uma divisão inteira.<br>

i+=2; -> i=i+2;
x*=y+1; -> x=x*(y+1);
d-=3; -> d=d-3;

Ex:

```c++
{
ㅤㅤmain()
ㅤㅤ{
ㅤㅤㅤㅤint x,y; x=10; y=3;
ㅤㅤㅤㅤprintf("%d\n",x/y);
ㅤㅤㅤㅤprintf("%d\n",x%y);
ㅤㅤ}
}
```

# Operadores de relação e lógicos

ㅤㅤRelação refere-se as relações que os valores podem ter um com o outro e
lógico se refere às maneiras como essas relações podem ser conectadas. Verdadeiro
é qualquer valor que não seja 0, enquanto que 0 é falso. As expressões que usam
operadores de relação e lógicos retornarão 0 para falso e 1 para verdadeiro.<br>
ㅤTanto os operadores de relação como os lógicos tem a precedência menor que os
operadores aritméticos. As operações de avaliação produzem um resultado 0 ou 1.

![image](https://user-images.githubusercontent.com/68473916/226375662-c89778b1-89ee-483f-a7d3-da4827beaa48.png)

Ex:

```c++
{
ㅤㅤmain()
ㅤㅤ{
ㅤㅤㅤㅤint i,j;
ㅤㅤㅤㅤprintf("digite dois números: ");
ㅤㅤㅤㅤscanf("%d%d",&i,&j);
ㅤㅤㅤㅤprintf("%d == %d é %d\n",i,j,i==j);
ㅤㅤㅤㅤprintf("%d != %d é %d\n",i,j,i!=j);
ㅤㅤㅤㅤprintf("%d <= %d é %d\n",i,j,i<=j);
ㅤㅤㅤㅤprintf("%d >= %d é %d\n",i,j,i>=j);
ㅤㅤㅤㅤprintf("%d < %d é %d\n",i,j,i< j);
ㅤㅤㅤㅤprintf("%d > %d é %d\n",i,j,i> j);
ㅤㅤ}
}
```

# Concluindo

ㅤㅤVocês usaram esses exercicios para testarem seus conhecimentos até aqui, dia 28(Segunda-Feira), iremos ver como estão se saindo. E apresentar soluções diferentes para os exercicios.<br>

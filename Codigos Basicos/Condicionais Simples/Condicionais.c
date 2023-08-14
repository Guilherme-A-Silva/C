#include <stdio.h> // Função padrão de entrada e saida de Dados em C

int main() // Função principal do Programa

{ // Abertura de chaves para  função principal

  char Usuario[50]; // Variavel de tipo Char, para receber o nome do usuario.
  char Genero;      // Variavel de Tipo Char, para receber o Genero do usuario.

  printf("Insira seu nome: "); // Comando para printar um texto ao usuario, para informar oque ele precisar fazer...
  gets(Usuario);               // Comando para guardar o nomes compostos de usuario, ou seja... Podemos colocar o nome completo Ex: Guilherme Augusto
  // scanf("%s", &Usuario); // Comando para guardar o nome do usuario, porém com parada quando houver espaço.
  // getchar(); // Comando para armazenar em buffer, possiveis erros de codigo.

  /*
   OBSERVAÇÃO: Não use o getchar(), junto ao gets. Vai haver um erro de passagem de dados e vai fazer você perder os dados informados pelo usuario.
  */

  printf("Informe seu genero: F para feminino e M para Masculino: "); // Comando para printar um texto ao usuario, para informar oque ele precisar fazer...
  scanf("%c", &Genero);                                               // Comando para guardar o genero do usuario

  if (Genero == 'F' || Genero == 'f') //  Condicional para seguir um fluxo no programa de acordo com o dado informado do usuario.
  {
    printf("Bem vinda: %s", Usuario); // Mensagem apresentada no fluxo respectivo a condição a cima.
  }
  else if (Genero == 'M' || Genero == 'm') //  Condicional para seguir um fluxo no programa de acordo com o dado informado do usuario.
  {
    printf("Bem vindo: %s", Usuario); // Mensagem apresentada no fluxo respectivo a condição a cima.
  }
  else //  Condicional para seguir um fluxo no programa de acordo com o dado informado do usuario.
  {
    printf("Genero invalido"); // Mensagem apresentada no fluxo respectivo a condição a cima.
  }
} // Fechamento de chaves da função principal

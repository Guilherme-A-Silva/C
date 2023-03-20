#include <stdio.h>  // Biblioteca Padrao de entrada e saida de dados
#include <locale.h> // Biblioteca para adptacao para idioma selecionado

void main()
{

  setlocale(LC_ALL, "Portuguese");

  int Numero1 = 0, Numero2 = 0; // Definição de duas Variaveis de Tipo Inteiro, inicializadas em 0.
  int Opc = -1;                 // Definição de variavel para Controle do SwitchCase

  /* SwitchCase é um tipo de mecanismo de controle de seleção,
    onde nele podemos direcionar o usuario para diferentes caminhos,
    dependendo da informação recebida */
  while (Opc != 5) // Laço de Repetição While, que em tradução é Enquanto
  {
    printf("Informe o primeiro numero: "); // Pritnf é o comando padrao de saida de dados
    scanf("%d", &Numero1);                 // Scanf é o comando padrao de entrada de dados
    printf("Informe o segundo numero: ");  // Printf é a maneira como mostramos alguma mensagem para o usuario
    scanf("%d", &Numero2);                 // Scanf é a forma como recebemos alguma informacao do usuario

    /* Sintaxe do Scanf é que devemos informar de que tipo sera o dado recebido
      Caso o dado seja inteiro deve ser %d de decimal, Caso seja real deve ser %f de valor flutuante.
      Caso seja uma string represente com %s, Caso seja uma caractere %c.
    */

    /*
     String é uma cadeia de caracteres, Caracter é uma unica letra.
    */

    system("cls"); // Comando para que possamos limpar o console

    printf("----------------------\n");
    printf("| [1]  Soma          |\n");
    printf("| [2]  Multiplicação |\n");
    printf("| [3]  Divisão       |\n");
    printf("| [4]  Subtração     |\n");
    printf("| [5]  Sair          |\n");
    printf("| Informe sua Opção:");
    scanf("%d", &Opc);

    switch (Opc) // Comando switch que é um  mecanismo de controle de seleção
    {
    case 1:
      printf("%d + %d = %d \n", Numero1, Numero2, Numero1 + Numero2); // Mostrando variaveis ao usuario.
      /*
        Sintaxe para mostrar variveis, informe o tipo da variavel e apos o fechamento das aspas.
        Informe o nome da variavel, para que a mesma possa ser printada.
      */
      system("pause"); // Comando para que possamos pausar o console
      system("cls");
      break;
    case 2:
      printf("%d x %d = %d \n", Numero1, Numero2, Numero1 * Numero2);
      system("pause");
      system("cls");
      break;
    case 3:
      printf("%d / %d = %d \n", Numero1, Numero2, Numero1 / Numero2);
      system("pause");
      system("cls");
      break;
    case 4:
      printf("%d - %d = %d \n", Numero1, Numero2, Numero1 - Numero2);
      system("pause");
      system("cls");
      break;
    case 5:
      printf("Saindo... \n");
      system("pause");
      system("cls");
      break;
    default:
      printf("Opção Invalida");
      break;
    }
  }
}

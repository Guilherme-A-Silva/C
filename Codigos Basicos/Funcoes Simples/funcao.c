#include <stdio.h>
#include <windows.h>
int Qt;

typedef struct Personagem
{
  char Nome[60];
  int Ataque;
  int Defesa;
  int Magia;
  int Vida;
} personagem;

personagem CriarPersonagens(int i, personagem G[])
{
  printf("Personagem [%d]\n", i);
  printf("Informe um nome para seu personagem: ");
  getchar();
  fgets(G[i].Nome, 60, stdin);
  printf("Insira seu ataque: ");
  scanf("%d", &G[i].Ataque);
  printf("Insira seu defesa: ");
  scanf("%d", &G[i].Defesa);
  printf("Insira seu Magia: ");
  scanf("%d", &G[i].Magia);
  printf("Insira seu Vida: ");
  scanf("%d", &G[i].Vida);
  system("pause");
  system("cls");
  return G[i];
}

int main()
{
  int x = 0;
  int opc;
  printf("Insira a quantidade de personagens: ");
  scanf("%d", &Qt);
  personagem Personagens[Qt];
  do
  {
    printf("Menu de Opções:\n ");
    printf("[1] - Criar Personagem \n [2] - Exibir Personagens \n [3] - Sair\n");
    printf("Insira: ");
    scanf("%d", &opc);
    int i;
    switch (opc)
    {

    case 1:

      Personagens[x] = CriarPersonagens(x, Personagens);
      x++;
      break;
    case 2:

      for (i = 0; i < x; i++)
      {

        printf("Personagem [%d]\n", i);
        printf("----------------------\n");
        printf("Nome : %s\n", Personagens[i].Nome);
        printf("Ataque : %d\n", Personagens[i].Ataque);
        printf("Defesa : %d\n", Personagens[i].Defesa);
        printf("Magia : %d\n", Personagens[i].Magia);
        printf("Vida : %d\n", Personagens[i].Vida);
        printf("----------------------");
      }
      break;
      case 3:
      return 0;
      break;
    default:
      printf("Valor inválido, digite um valor entre 1 e 3");
      break;
    }
  } while (opc != 3);
}
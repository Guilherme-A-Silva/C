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
  do{
  printf("Deseja cadastrar um personagem:\n ");
  printf("[1] - Sim | [2] - Nao | [3] - Sair\n");
  printf("Insira: ");
  scanf("%d", &opc);

  if (opc == 1)
  {
    Personagens[x] = CriarPersonagens(x, Personagens);
    x++;
  }
  else if(opc == 2)
  {
    printf("Ok");
  }
  }while(opc != 3);
}
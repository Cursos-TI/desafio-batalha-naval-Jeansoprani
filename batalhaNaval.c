#include <stdio.h>
#include <stdlib.h>

void habilidadeCone()
{
  int matriz[3][5] = {0};
  for (int i = 0; i < 3; i++)
  {
    for (int j = 2 - i; j <= 2 + i; j++)
    {
      matriz[i][j] = 1;
    }
  }
  printf("Cone:\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
}

void habilidadeOctaedro()
{
  int matriz[3][5] = {0};
  for (int i = 0; i < 3; i++)
  {
    for (int j = 2 - abs(1 - i); j <= 2 + abs(1 - i); j++)
    {
      matriz[i][j] = 1;
    }
  }
  printf("Octaedro:\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
}

void habilidadeCruz()
{
  int matriz[3][5] = {0};
  for (int i = 0; i < 3; i++)
  {
    matriz[i][2] = 1;
  }
  for (int j = 0; j < 5; j++)
  {
    matriz[1][j] = 1;
  }
  printf("Cruz:\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
}

int main()
{
  habilidadeCone();
  habilidadeOctaedro();
  habilidadeCruz();
  return 0;
}

#include <stdio.h>
void dadosmatriz(int matriz[3][3]){

int valor;
int i, j;
for(i = 0; i < 3; i++){

  for(j = 0; j < 3; j++){
      printf("Matriz : [%d] [%d]: ", i, j);
       scanf("%d",&valor);
       matriz[i][j] = valor;
      
    }
    }}
  

void multiplicamatrizes(int m1[3][3], int m2[3][3], int resultado[3][3]){
int i, j;
  int valor;
  
    for(i = 0; i < 3; i++){

      for(j = 0; j < 3; j++){

        valor = m1[i][j] * m2[i][j];
        resultado[i] [j] = valor;
      }
      }

  }

int main() {
  int i,j;
  int valor;

int MatrizA[3][3];
int MatrizB[3][3];
int resultado[3][3];

    printf("Input MatrizA:");
    dadosmatriz( MatrizA );

    printf("Imput da MatrizB:");
    dadosmatriz(MatrizB );

    multiplicamatrizes(MatrizA, MatrizB, resultado);


  for(i = 0; i < 3; i++){

    for(j = 0; j < 3; j++){
    valor = resultado[i] [j];
            
        printf(" %d ", valor);
            }
            printf("\n");
            }
               return 0;
            }
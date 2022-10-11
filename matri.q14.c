#include <stdio.h>

void somando(int m1[3][3], int m2[3][3], int m3[3][3], int ls, int cs){
    //funçao soma
  for(int i = 0; i < ls; i++){
    for(int j = 0; j < cs; j++){
      m3[i][j] = m1[i][j] + m2[i][j];
        }
     }
     }

void subtraindo(int m1[3][3], int m2[3][3], int m4[3][3], int ls, int cs){
  for(int i = 0; i < ls; i++){
    for(int j = 0; j < cs; j++){
      m4[i][j] = m1[i][j] - m2[i][j];
       }
       }
     }
void inputmatriz(int matriz[3][3], int ls, int cs){
  for (int i = 0; i < ls; i++){
    for (int j = 0; j < cs; j++){
      scanf("%d", &matriz[i][j]);
              }
             }
           }

void printandoamatriz(int matriz[3][3], int ls, int cs){
  for (int i = 0; i < ls; i++){
    for (int j = 0; j < cs; j++){
      printf("%d ", matriz[i][j]);
    }
    printf("\n"); 
      }
}
int main()
{
  
  int m1[3][3]; 
  int m2[3][3]; 
  int m3[3][3];
  int m4[3][3];
  int ls =  3;
  int cs = 3;
//cs -> colunas
//ls -> linhas
  printf("input da matriz : \n");
  inputmatriz(m1, ls, cs);
  printf("input da matriz 2 :\n");
  inputmatriz(m2, ls, cs);

  
  somando(m1, m2, m3, ls, cs);

  
  subtraindo(m1, m2, m4, ls, cs);

  
  printf(" Soma das matrizes 1 e 2: \n ");
  printandoamatriz(m3, ls, cs);

  
  printf("Subtraçao das matrizes 1 e 2:\n");
  printandoamatriz(m4, ls, cs);

  return 0;
}
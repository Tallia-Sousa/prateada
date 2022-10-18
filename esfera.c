#include <stdio.h>
#include <math.h>
#define PI 3.14
void esfera(float r, float *area, float *volume){

  (*area) =4 * PI * r * r;
  (*volume) = 4 * PI * r * r * r / 3;
}

int main(void) {
  float raio, a, v;
  
  printf("digite o raio da sua esfera: ");
  scanf("%f", &raio);
  esfera(raio, &a, &v);
  printf("Area :%f \n volume = %f",a, v);
  return 0;
}

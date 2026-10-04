#include <stdio.h>
#include <math.h>

int main (){
 double raio, area, volume;
 const double PI = 3.14159265;

 printf("Digite o valor do raio da esfera: " );
 scanf("%lf", &raio);

 area = 4 * PI * pow(raio, 2);
 volume = (4.0 / 3.0) * PI * pow(raio, 3);

 printf("Area de superficie: %.3f\n", area);

return 0;

}
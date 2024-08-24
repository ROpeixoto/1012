#include <stdio.h>
 
int main() {
    double a, b, c, area, circulo, pi, trapezio, quadrado, retangulo, triangulo;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    area = (a * c) / 2;
    printf("TRIANGULO: %.3lf\n", area);
    pi = 3.14159;
    circulo = pi * (c * c);
    printf("CIRCULO: %.3lf\n", circulo);
    trapezio = ((a + b)* c) /2;
    printf("TRAPEZIO: %.3lf\n", trapezio);
    quadrado = (b * b);
    printf("QUADRADO: %.3lf\n", quadrado);
    retangulo = (a * b);
    printf("RETANGULO: %.3lf\n", retangulo);
   
    /**pr
     *(prin Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 
    return 0;
}

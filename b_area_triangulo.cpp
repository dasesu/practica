#include <iostream>
#include <iomanip>
// esta libreria es para el setprecision 

int main( int argc, char *argv[] ){
   // El triangulo se compone de una base y una altura
   float base{0.0};
   float altura{0.0};
   //std::printf("Introduzca la base del triangulo\n");
   //scanf("%f\n", &base);
   std::cout << "Introduzca la base del triangulo\n";
   std::cin >> base;

   //std::printf("Introduzca la altura del triangulo\n");
   //std::scanf("%f\n", &altura);
   std::cout << "Introduzca la altura del triangulo\n";
   std::cin >> altura;

   float area{base*altura/2};
   //std::printf("El area del triangulo es: %.2f\n", area);
   std::cout << "El area del triangulo es: " << std::fixed << std::setprecision(2) << area << '\n';

   return 0; // returna 0
}


// ## Escribe un programa en C que determine si un numero es par o no del 1 al 20
#include <stdio.h> // Importamos la libreria
int main(){
  //1. Imprimimos esos números... usaremos for 
  int num; // Declaramos los numeros 
  for (num = 1; num <= 20; num = num + 1){ 
//1.1) num = 1:: Quiere decir que los numeros comienzan desde 1
//1.2) num <= 20:: Es un intervalo (1 < num <= 20) incluyendo al 20:: Los numeros mayores a 1 y menores-igual a 20
//1.3) num = num + 1:: Es decir x = x+1 => 2x => x = 2:: En otras palabra el numero va aumentando de 1 en 1...
    // printf("%d\n", num); // Imprime los numeros del 1 al 20:: \n los imprime en columna
  

  //2. Verificamos si son pares o no:: Dividimos entre 2 y el resto debe ser 0
  if(num % 2 == 0){
  // Sí num al dividirlo entre 2 el resto es 0, es par:: "==" este es el operador de igulación
    printf("%d\n", num);
    }
  }
  return 0;
}

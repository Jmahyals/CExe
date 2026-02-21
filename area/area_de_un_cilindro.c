// Escribe un programa que pida los datos al usuario: altura y radio para determinar el area de un cilindro 
#include <stdio.h> //1. Importamos la libreria para poder imprimir y pedir datos
//2. Creamos nuestra función main(Función principal)
int main(){
  //3. Definimos las variable a usar:
  float altura; //La definimos, pero el valor se lo dará el usuario
  float radio; //De igual forma la definimos pero el valor lo dará el usuario
  float PI = 3.141592; //Definimos la varaible PI, aunque realmente es un constante
  // formula del area :  (2 * PI * radio * altura) + (2 * PI * radio * radio); // Creamos nuestra formula... r*r es igual a r^2
  
  //4. Pedimos esos valores:
  printf("Ingresa la altura: "); // Muestra de manera grafica el texto entre las comillas
  scanf("%f", &altura); // Pedimos la altura: con %f especificamos que es un float y se lo pasamos a la variable 
  printf("Ingresa el radio: "); // Muestra de manera grafica el texto entre las comillas
  scanf("%f", &radio); // Hacemos lo mismo que con la altura
  //5. Creamos la logica de ejecución 
  float formula_y_resultado = (2 * PI * radio * altura) + (2 * PI * radio * radio); // Acá procesamos los datos y hallamos el area 
  //5. Mostramos el resultado en pantalla
  printf("El resultado del area del cilindro es: %.2f unidades al cuadrado", formula_y_resultado); /* Imprimimos el area... 
  con %.2f especificamos el tipo de dato a imprimir y los decinmales con ".2" */ 
  return 0; // Retorna 0::es decir finaliza el programa aquí, y no ejecuta lo que esté debajo  
  printf("Esto no se imprime"); // Esto no se imprimirá porque esta debajo del "return 0" 
}

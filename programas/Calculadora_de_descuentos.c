#include <stdio.h> //Importación de la libreria habitual
int main(){
  printf("Calculadora de Descuentos\n"); //Mostramos el nombre del programa
  //1. Solicitar al usuario
  float precio; // Decalrammos la variable para el precio 
  printf("Ingrese el precio: ");
  scanf("%f", &precio); // Solicitamos el precio al usuario
  
  //2. Calcular
  int porcentaje_de_descuento; // Declaramos la varable para el descuento 
  printf("Ingrese el porcentaje a descontar: ");
  scanf("%d", &porcentaje_de_descuento); // Solicitamos ese valor y se lo pasamos a porcentaje_de_descuento

  printf("--------------------------------------"); // Esto es solo con un fin estético

  if (porcentaje_de_descuento > 50) { // Si el precio es > 50, mostramos un mensaje
   printf("\nEl porcentaje de descuento es mayor a 50");
  }

  int descuento = (precio * porcentaje_de_descuento) / 100; // Declaramos una variable para calcular el descuento
  int descuneto_total = precio - descuento; // Calculamos el descuento total == precio final

  //3. Mostrar 
  printf("\nPorcentaje de descuento: %d \nDescuento: %d \nDescuento Total: %d", porcentaje_de_descuento, descuento, descuneto_total);
  // Arriba Imprimimos toda la información con un solo printf
  if (descuneto_total <= 100){ // Determinamos si el descuento <= 100 
    printf("\nEl precio total es menor a 100");
  }

  //4. Requisitos
  if (descuneto_total < 100 && porcentaje_de_descuento >= 30){ // Usamos estos parametros para determinar si el producto saldrá económico
    printf("\nEl producto salió económico");
  } else {
    printf("\nDescuento estándar");
  }
  return 0; // Terminamos el programa
}

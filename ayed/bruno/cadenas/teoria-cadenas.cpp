#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main(){

  // Maneras de ingresar arreglos de cadenas

  char palabra[10] = "Facundo";
  char nombre[10] = {'F', 'a', 'c', 'u', 'n', 'd', 'o'};

  char nombreDigitado[30];

  cout << endl << "Digite su nombre: ";
  cin.getline(nombreDigitado, 30, '\n');

  cout << endl << "Hola! Tu nombre es: " << nombreDigitado << endl << endl;
  
  cout << "Array de caracteres ingresados entre comillas dobles: " << palabra << endl << endl;
  
  cout << "Array de caracteres ingresados caracter por caracter: " << nombre << endl << endl;

  // Medir tamaño de arreglo de cadenas

  cout << "Ingrese una oración: ";

  char oracion[30];

  cin.getline(oracion, 30, '\n');

  int longitud = 0;
  longitud = strlen(oracion);

  cout << endl << "El tamaño de su oración es de " << longitud << " caracteres." << endl;

  cout << oracion << endl << endl;

  // Copiar cadenas

  char a[] = "hola";
  char b[5];

  strcpy(b, a);

  cout << "El array que previamente estaba vacio, ahora tiene: " << b << endl;

  cout << endl;

  char comparo1[] = "Hola";
  char comparo2[] = "Chau";

  // Comparación de caracteres (Según igualdad, o diferencia de orden alfabetico)

  if (strcmp(comparo1, comparo2) == 1){
    cout << "Las palabras son iguales" << endl;
  }
  else {
    cout << "Las palabras son distintas" << endl;
  }

  cout << endl;

  if (strcmp(comparo1, comparo2) > 0){
    cout << comparo1 << " está despues alfabeticamente" << endl;
  }
  else if (strcmp(comparo1, comparo2) < 0) {
    cout << comparo2 << " está despues alfabeticamente" << endl;
  }

  cout << endl;

  // Concatenación de arreglos de cadenas

  char cad1[] = "Esto es una";
  char cad2[] = " concatenación";
  
  char cad3[30];

  strcpy(cad3, cad1);
  strcat(cad3, cad2);

  cout << "La cadena concatenada dice: " << cad3 << endl;
  
  // Pasar una cadena de caracter (texto) a numero
  // ** No está de más aclarar que en caso de querer pasar la cadena a, por ejemplo, float, simplemente almacenamos el contenido de "atoi" en una variable de tipo float

  char numTexto[] = "123";

  int numero;

  int numero2 = 642;

  numero = atoi(numTexto);
  
  cout << numero + numero2 << endl;

  cout << endl;
  return 0;
}

/*
  ¿Qué es un puntero?

  Un puntero es una variable cuyo tipo de dato le provee la capacidad de contener
  una dirección de memoria, en vez de un valor fijo

*/

/*
  ¿Qué es un nodo?

  Un nodo va a ser la manera en la que solicitamos nosotros memoria dinamicamente
  para contener un valor entero.
  
  También, se da a entender que la UNIDAD MINIMA de las colas, las listas y las pilas
  se llama NODO.

  Es una estructura autoreferenciada que, ademas de contener los datos propiamente dichos,
  posee al menos un campo con la dirección de otros nodos del mismo tipo

  Concateno nodos entre si

  Un nodo contiene el nodo y la dirección del que le sigue

*/

struct Nodo{
  int info;
  Nodo *sgte;
};

#include <iostream>

using namespace std;

void push(Nodo *&pila, int valor);
int pop(Nodo *&pila);

int main(){
  int a = 10;
  int *p = &a;
  cout << p << endl; // Muestra la dirección de memoria
  cout << *p << endl; // Muestra el contenido de la dirección de memoria

  int *q = new int(); // Creo una nueva instancia de memoria
  delete q; // Libero la memoria solicitada al comienzo
  
  Nodo *pila = NULL;

  
  return 0;
}

void push(Nodo *&pila, int valor){
  Nodo *nuevo = new Nodo();

  nuevo->info = valor;
  nuevo->sgte = pila;

  pila = nuevo;
}
int pop(Nodo *&pila){
  int retorno;
  retorno = pila->info;

  Nodo *aux = pila;
  pila = aux->sgte;
  delete(aux);
  return retorno;
}

/*
  ¿Qué es una lista?

  Es una estructura dinamica que puedo manipular facilmente

  Puedo acceder a cualquier parte de la lista

  Su nodo siempre apunta al primero

*/

struct Nodo{
  int info;
  Nodo *sgte;
};

#include <iostream>

using namespace std;

void agregarPrimero(Nodo *&lista, int valor);
int eliminarPrimero(Nodo *&lista);

void mostrar(Nodo *lista);

void liberar(Nodo *&lista);

int main(){
  Nodo *lista = NULL;
  return 0;
}

void agregarPrimero(Nodo *&lista, int valor){
  Nodo *nuevo = new Nodo();
  nuevo->info = valor;
  nuevo->sgte = lista;
  lista = nuevo;
}

int eliminarPrimero(Nodo *&lista){
  int retorno;
  retorno = lista->info;
  Nodo *aux = lista;
  lista = aux->sgte;
  delete aux;
  return retorno;
}

void mostrar(Nodo *lista){
  Nodo *aux = lista;
  while(aux != NULL){
    cout << aux->info << endl;
    aux = aux->sgte;
  }
}

void liberar(Nodo *&lista){
  Nodo *aux;
  while(lista != NULL){
    aux = lista;
    lista = lista->sgte;
    delete aux;
  }
}

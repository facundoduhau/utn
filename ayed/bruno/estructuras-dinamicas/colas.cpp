/*
  ¿Qué cambia en la cola?

  Lo que cambia principalmente es que en vez de tener 1 nodo (como en las pilas o las listas)
  tengo 2 nodos, 1 que apunta al frente y otro al final.
 */

#include <iostream>

using namespace std;

struct Nodo{
  int info;
  Nodo *sgte;
};

void agregar(Nodo *&cfte, Nodo *&cfin, int valor);
int suprimir(Nodo *&cfte, Nodo *&cfin);

int main(){
  Nodo *colafte = NULL;
  Nodo *colafin = NULL;

  int valor;

  agregar(colafte, colafin, 1);
  agregar(colafte, colafin, 2);
  agregar(colafte, colafin, 3);
  agregar(colafte, colafin, 4);
  agregar(colafte, colafin, 5);

  while (colafte != NULL){  
    valor = suprimir(colafte, colafin);
    cout << valor << endl;
  }

}

void agregar(Nodo *&cfte, Nodo *&cfin, int valor){
  Nodo *nuevo = new Nodo();

  nuevo->info = valor;
  nuevo->sgte = NULL;

  if (cfte == NULL){
    cfte = nuevo;
  }
  else{
    cfin->sgte = nuevo;
  }
  cfin = nuevo;
}

int suprimir(Nodo *&cfte, Nodo *&cfin){
  int retorno;
  retorno = cfte->info;

  Nodo *aux = cfte;

  cfte = aux->sgte;
  
  if (cfte == NULL){
    cfin = NULL;
  }
  delete(aux);
  return retorno;
}

/*
  ¿Qué es el corte de control?
  
  Basicamente, teniendo un archivo ordenado, en el que el dominio/legajo/orden de un registro
  se repite en algún momento, busca que se pueda operar durante el período en el que este 
  ordenamiento se repite
  

*/

struct multa{
  int dominio;
  int tipo;
  int imp;
};

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

  FILE* multas;
  multas = fopen("multas.dat", "rb");

  multa raux;
  int anterior;
  int sumaMultas;

  fread(&raux, sizeof(multa), 1, multas);

  while(!feof(multas)){
    anterior = raux.dominio;
    sumaMultas = 0;

    while((!feof(multas) && anterior == raux.dominio)){
      sumaMultas += raux.imp;
      fread(&raux, sizeof(multa), 1, multas);
    }

    cout << "La suma total de multas del dominio " << anterior << " da un importe de " << sumaMultas << endl;
  }
  fclose(multas);
  return 0;
}

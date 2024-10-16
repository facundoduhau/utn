#include <cstdio>
#include <iostream>
#include <stdio.h>

using namespace std;

struct Alumno{
  int legajo;
  int dni;
  int nota1;
  int nota2;
};

int main(){

  Alumno raux;

  FILE * archivo;

  archivo = fopen("archivo.dat", "wb");

  cout << "Ingrese numero de legajo (finaliza en un num != a 0)";
  
  cin >> raux.legajo;

  while (raux.legajo > 0) {
  
    cout << "Ingrese DNI: ";
    cin >> raux.dni;

    cout << "Ingrese primer nota: ";
    cin >> raux.nota1;

    cout << "Ingrese segunda nota: ";
    cin >> raux.nota2;

    fwrite(&raux, sizeof(struct Alumno), 1, archivo);

    cout << "Ingrese numero de legajo (finaliza en un num != a 0)";
    cin >> raux.legajo;
  }
  fclose(archivo);
  return 0;
}

/* 
¿Qué es el apareo?

Es la manera que tengo para integrar >= 2 archivos

Busca crear un archivo "c" unico, que contenga información de un archivo "a" y un archivo "b"

Importante: 

Que los dos archivos EXISTAN
Que tengan el mismo tipo de dato
Ordenados por la misma clave de ordenamiento
*/

struct Alumno{
  int legajo;
  int dni;
  int nota1;
  int nota2;
};

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

  FILE* A;
  FILE* B;
  FILE* C;

  Alumno rauxA;
  Alumno rauxB;

  fread(&rauxA, sizeof(Alumno), 1, A);
  fread(&rauxB, sizeof(Alumno), 1, B);

  while((!feof(A) && !feof(B))){
    if(rauxA.legajo < rauxB.legajo){
      fwrite(&rauxA, sizeof(Alumno), 1, C);
      fread(&rauxA, sizeof(Alumno), 1, A);
    }
    else {
      fwrite(&rauxB, sizeof(Alumno), 1, C);
      fread(&rauxB, sizeof(Alumno), 1, A);
    }
  }

  while(!feof(A)){
    fwrite(&rauxA, sizeof(Alumno), 1, C);
    fread(&rauxA, sizeof(Alumno), 1, A);
  }
  
  while(!feof(B)){
    fwrite(&rauxB, sizeof(Alumno), 1, C);
    fread(&rauxB, sizeof(Alumno), 1, B);
  }
  fclose(A);
  fclose(B);
  fclose(C);
}

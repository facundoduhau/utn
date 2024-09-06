#include <iostream>

using namespace std;

int main()
{
  struct registro
{
  int campo1;
  int campo2;
};
  // Variables globales y estaticas

  int a = 10;
  float b = 5.5;
  registro r;
  int i;
  int v[3] = {10, 20, 30};
  r.campo1 = 100;
  r.campo2 = 200;

  // Declaracion de punteros

  int* p; // p es un puntero a un entero
  float* q; // q es un puntero a un dato tipo float
  registro* t; // t es un puntero a una estructura de tipo registro
  
  // los punteros son tipos de datos que contienen direcciones de memoria

  // & este es el operador de dirección aplicado sobre un identificador dice la dirección de memoria donde este está

  // Asignación a los punteros

  p = &a; // A p le asignamos la dirección de memoria de a
  q = &b; // Asignamos la direccion de memoria de b
  t = &r; // Asignamos la direccion de memoria de r

  // Los punteros apuntan a una determinada dirección de memoria, por ejemplo, p apunta a la dirección de memoria de a

  // * es el operador de indirección aplicado sobre un puntero dice lo que hay en la dirección de memoria al que ese puntero apunta

  cout << endl << "El valor de a es: " << a << ", el valor del puntero p es: " << *p << endl;
  cout << "El valor de b es: " << b << ", el valor del puntero q es: " << *q << endl;

  // Si t es un puntero a un registro entonces *t es un registro

  // El campo1 se puede acceder (*t).campo1 require los parentesis por la prioridad de los operadores. Esto se puede reemplazar por t->campo1

  cout << "El valor del registro.campo1 es: " << r.campo1 << ", el valor del puntero t->campo1 es: " << t->campo1 << endl;
  cout << "El valor del registro.campo2 es: " << r.campo2 << ", el valor del puntero t->campo2 es: " << t->campo2 << endl << endl;

  // El nombre del vector "v" es la dirección de memoria del primer elemento del vector (&v[0])

  p = v; // Es equivalente a poner que p es igual al &v[0]
  
  // No puedo hacer v = p

  for (i = 0; i < 3; i++)
  {
    cout << "Valor del vector en la posición: " << i << " = " << v[i] << endl << "Valor del puntero en la posición: " << i << " = " << p[i] << endl;
  }

  // Los punteros pueden contener direcciones de memoria de variables estaticas pero con los punteros se puede hacer asignación dinamica en memoria

  // Existe el operador new para crear nuevas instancias

  p = new int(); // Variables anonimas

  // A "p" se le está asignando un espacio de memoria creado en tiempo de ejecución. Ahora "p" apunta a ese lugar. Este espacio de memoria está hecho a instancias de "p" y solo se puede acceder a traves de *p.

  *p = 200; // Le asignamos un valor a la variable anonima

  cout << endl << "Valor del puntero apuntando a la variable anonima: " << *p << endl;

  // Ahora vamos a liberar la instancia de "p". La dirección a la que apunta "p" es la parte de memoria que se libera.

  delete(p); // Libera la instancia creada por new.

  // Observamos qué pasa cuando hacemos cout de un puntero despues del "delete(p)"

  cout << "Valor de p luego de haber hecho delete(p): " << p << endl;

  p = NULL; // Asignamos NULL a p

  cout << "Valor de p tras asignarle NULL: " << p << endl;

  q = new float(); // Se crea variable anonima de tipo float
  
  *q = 5.4;

  cout << endl << "Valor de variable anonima q: " << *q << endl;

  t = new registro(); // Creación de variable anonima de tipo registro

  t->campo1 = 1000; // Se asignan los valores con la "flechita"
  t->campo2 = 2000;

  cout << "Valor de t->campo1: " << t->campo1 << ", valor de t->campo2: " << t->campo2 << endl;

  i = 5; // Le asignamos un valor a "i"

  p = new int[i](); // Creamos una cantidad de variables anonimas determinadas por "i" (En este caso, 5). Se manejan como vectores, con posiciones.

  // Asignamos valores a las posiciones de "p"

  p[0] = 5000;

  p[4] = 80000;

  cout << endl << "Valor de p[0]: " << p[0] << ", valor de p[4]: " << p[4]<< endl;
  
  t = new registro[4](); // Creamos vector de registro de 4 posiciónes

  t[0].campo1 = 3240; // Como t ahora le asignamos variables anonimas de tipo int, ahora se trata como un vector, y por ende, podemos asignarle variables sin el uso de la "flechita".


  cout << "Valor de t[0].campo1: " << t[0].campo1 << endl;
  
  // No es necesario poner el "&" porque se crea un vector en tiempo de ejecución, y se trata como tal. 

  return 0;
}

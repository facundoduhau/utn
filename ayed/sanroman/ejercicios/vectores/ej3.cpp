#include <iostream>

using namespace std;

int main()
{
  int edad, suma = 0, promedio, lista[5];
  const int alumnos = 5;

  for (int i = 0; i < 5; i++)
  {
    cout << "Ingrese la edad del alumno: ";
    cin >> edad;
    suma += edad;
    lista[i] = edad;
  }

  promedio = suma/alumnos;

  cout << "Las edades que superan el promedio son: ";

  for (int n = 0; n < 5; n++)
  {
    if (lista[n] >= promedio)
    {
      cout << lista[n] << ", ";
    }
  }
cout << endl;
}

#include <iostream>

using namespace std;

int main()
{
  string nombre;
  int nota, promedio, suma, cant;

  for (int i = 0; i < 3; i++)
  {
    cant = 0;
    suma = 0;

    cout << "Ingrese nombre del alumno: " << endl;
    cin >> nombre;
    do
    {
      cout << "Ingrese nota: " << endl;
      cin >> nota;
      if (nota != 0)
      {
        suma += nota;
        cant++;
      }
    }while(nota != 0);
    promedio = suma / cant;
    cout << "Promedio de " << nombre << ": " << promedio << endl;
  }
  return 0;
}

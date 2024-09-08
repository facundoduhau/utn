#include <iostream>

using namespace std;

int main()
{
  int mayor, segundomayor, lado, tiros = 0, suma=0, sumalados = 0;
  float promedio;
  char respuesta;

  do{
    bool flag = true, flag2 = true;
    for (int i = 0; i < 5; i++)
    {
      if (flag && flag2)
      {
        cout << "Ingrese valor de un dado: ";
        cin >> mayor;
        flag = false;
        tiros++;
        suma+=mayor;
      }
      else if (!flag && flag2)
      {
        cout << "Ingrese valor de otro dado: ";
        cin >> lado;
        flag2 = false;
        tiros++;
        suma += lado;

        if (lado > mayor)
        {
          segundomayor = mayor;
          mayor = lado;
        }
        else
      {
          segundomayor = lado;
        }
      }
      else if (!flag && !flag2)
      {
        cout << "Ingrese otro valor de los dados restantes ";
        cin >> lado;
        tiros++;
        suma += lado;

        if (lado > segundomayor && lado < mayor)
        {
          segundomayor = lado;
        }
        else if (lado > mayor)
        {
          segundomayor = mayor;
          mayor = lado;
        }
      }
    }
    sumalados = mayor + segundomayor;

    cout << "Suma de los 2 valores más altos obtenidos: " << sumalados << endl;

    cout << "Continuar? Y/N: ";
    cin  >> respuesta;
  }
  while(respuesta != 'N');

  cout << "Cantidad de tiros de dados: " << tiros << endl << "Puntaje promedio: " << suma/tiros << endl;
}

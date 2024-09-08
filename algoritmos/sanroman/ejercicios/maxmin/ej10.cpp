#include <iostream>

using namespace std;

int main()
{
  int vuelo, asientos, pasaporte, importe, recaudadovuelo, mayorrecaudo = 0, vuelomayorrecaudo;
  string destino;

  cout << "Vuelos y pasajeros" << endl << endl;

  while(true)
  {
    cout << "Ingrese num de vuelo: ";
    cin >> vuelo;
    recaudadovuelo = 0;

    if (vuelo == 0){break;}

    cout << "Ingrese destino: ";
    cin >> destino;


    cout << "Ingrese cantidad de asientos total: ";
    cin >> asientos;

    while(true)
    {
      cout << "Ingrese pasaporte: ";
      cin >> pasaporte;
      if (pasaporte == 0){break;}
      asientos--;

      cout << "Ingrese importe: ";
      cin >> importe;
      recaudadovuelo += importe;

      if(recaudadovuelo > mayorrecaudo)
      {
        mayorrecaudo = recaudadovuelo;
        vuelomayorrecaudo = vuelo;
      }
      cout << endl << "Nº de vuelo: " << vuelo << endl;
      cout << "Destino del vuelo: " << destino << endl;
      cout << "Nº de pasaporte: " << pasaporte << endl;
      cout << "Importe pagado: $" << importe << endl;
    }
    cout << endl << "Total recaudado del vuelo " << vuelo << ": " << recaudadovuelo << endl;
    cout << "Cantidad de asientos libres: " << asientos << endl;
  }
  cout << "Nº de vuelo que más recaudó: " << vuelomayorrecaudo << endl;
}

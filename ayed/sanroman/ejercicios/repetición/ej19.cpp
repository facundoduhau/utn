#include <iostream>

using namespace std;

int main()
{ 
  int cuenta, saldo, deudor = 0, acreedor = 0, nulo = 0, estado;
  string cliente;

  do
  {
    cout << "Ingrese número de cuenta: ";
    cin >> cuenta;

    if (cuenta != 0)
    {

      cout << "Ingrese nombre del cliente: ";
      cin >> cliente;

      cout << "Ingrese saldo de la cuenta: ";
      cin >> saldo;

      if (saldo > 0)
      {
        acreedor++;
        estado = 1;
      }
      else if (saldo == 0)
      {
        nulo++;
        estado = 2;
      }
      else if (saldo < 0)
      {
        deudor++;
        estado = 3;
      }

      cout << "Cuenta Nº: " << cuenta << endl << "Cliente: " << cliente << endl << "Estado: ";
      switch(estado)
      {
        case 1: cout << "Acreedor" << endl; break;
        case 2: cout << "Nulo" << endl; break;
        case 3: cout << "Deudor" << endl; break;
      }
    }
  }while(cuenta != 0);

  cout << "Cuentas acreedoras: " << acreedor << endl << "Cuentas nulas: " << nulo << endl << "Cuentas deudoras: " << deudor << endl;
}

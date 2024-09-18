#include <iostream>

using namespace std;

int main()
{
  char puerto;
  int contenedor, peso = 0, pesototal = 0, mayorpeso = 0, puertoa = 0, puertob = 0, puertoc = 0, contenedorpesado;

  cout << endl << "Buque: puertos y contenedores" << endl << endl;

  while(true)
  {

    cout << "Ingrese identificador del contenedor: ";
    cin >> contenedor;
    if (contenedor == 0){break;}

    cout << "Ingrese su peso (en kg.): ";
    cin >> peso;
    pesototal += peso;
    if (peso > mayorpeso)
    {
      mayorpeso = peso;
      contenedorpesado = contenedor;
    }

    cout << "Ingrese puerto de destino (1, 2, 3): ";
    cin >> puerto;
    
    switch(puerto)
    {
      case '1':
        {
          puertoa++; 
        }break;
      case '2':
        {
          puertob++;
        }break;
      case '3':
        {
          puertoc++;
        }break;
    }
  }

  cout << endl << "El buque deberá trasladra un total de: " << pesototal << " kgs" << endl;
  cout << "El contenedor de mayor peso, es el: " << contenedorpesado << ", con " << mayorpeso << " kgs" << endl;
  cout << "Contenedores al 1er puerto: " << puertoa << endl;
  cout << "Contenedores al 2do puerto: " << puertob << endl;
  cout << "Contenedores al 3er puerto: " << puertoc << endl;
}

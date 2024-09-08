#include <iostream>

using namespace std;

int main ()
{
  int fecha, fechamayor, fechamenor;
  string nombre, joven, mayor;
  bool flag = true;

  do
  {
    if (flag)
    {
      cout << "Ingrese un nombre, y su respectiva fecha de nacimiento, en el formato \"AAAAMMDD\": ";
      cin >> nombre;
      if (nombre != "FIN")
        cin >> fecha;
      { 
        joven = nombre;
        mayor = nombre;

        fechamayor = fecha;
        fechamenor = fecha;

        flag = false;
      }
    }
    else if (!flag)
    {
      cout << "Ingrese otro nombre, con su propia respectiva fecha de nacimiento, en el formato anterior: ";
      cin >> nombre;
      if (nombre != "FIN"){
        cin >> fecha;
        if (fecha > fechamayor)
        { 
          fechamayor = fecha;
          joven = nombre;
        }
        else if (fecha < fechamenor)
        {
          fechamenor = fecha;
          mayor = nombre;
        }
      }
    }
  }
  while(nombre != "FIN");

  cout << "La persona más joven es: " << joven << " mientras que la persona más adulta es: " << mayor << endl;
}
